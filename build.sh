#!/usr/bin/env bash
# Build the package
build() {
URL="https://github.com/boostorg/boost/releases/download/boost-1.90.0.beta1/boost-1.90.0.beta1-cmake.zip"
ZIP="${URL##*/}"
DIR="${ZIP%-cmake.zip}"
mkdir -p .build
cd .build

# Download the boost release
if [ ! -f "$ZIP" ]; then
  echo "Downloading $ZIP from $URL ..."
  curl -L "$URL" -o "$ZIP"
  echo ""
fi

# Unzip the boost release
if [ ! -d "$DIR" ]; then
  echo "Unzipping $ZIP to .build/$DIR ..."
  cp "$ZIP" "$ZIP.bak"
  unzip -q "$ZIP"
  rm "$ZIP"
  mv "$ZIP.bak" "$ZIP"
  echo ""
fi
cd ..

# Ensure all libs are added to gitignore
# echo "Updating .gitignore ..."
# for libdir in "$DIR"/libs/*; do
#   if [ ! -d "$libdir" ]; then continue; fi
#   for pth in "$libdir/include/boost"/*; do
#     entry="${pth##*/}"
#     if [ -d "$pth" ]; then entry="$entry/"; fi
#     if grep -q "$entry" ../.gitignore; then continue; fi
#     echo "$entry" >> ../.gitignore
#   done
# done

# Copy the libs to the package directory
mkdir -p boost
for libdir in ".build/$DIR/libs/"*; do
  lib="${libdir##*/}"
  if [ ! -d "$libdir" ]; then continue; fi
  echo "Copying $lib ..."
  if [ -d "$libdir/include/boost" ]; then
    cp -rf "$libdir/include/boost"/* boost/
  else
    mkdir -p "boost/$lib"
    for libsubdir in "$libdir/"*; do
      sublib="${libsubdir##*/}"
      echo "Copying $lib/$sublib ..."
      if [ -d "$libsubdir/include/boost" ]; then
        cp -rf "$libsubdir/include/boost"/* boost/
      fi
    done
  fi
done
}


# Test the package
test() {
echo "Running 01-thread.cxx ..."
g++ -I. -std=c++17 examples/01-thread.cxx && ./a && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test; else build; fi
