#!/usr/bin/env bash
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
mkdir -p ../boost
for libdir in "$DIR"/libs/*; do
  lib="${libdir##*/}"
  if [ ! -d "$libdir" ]; then continue; fi
  echo "Copying $lib to $lib/ ..."
  cp -rf "$libdir/include/boost"/* ../boost/
done
