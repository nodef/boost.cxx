#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
  boost::filesystem::path p(argc > 1 ? argv[1] : ".");

  if (boost::filesystem::exists(p)) {
    if (boost::filesystem::is_directory(p)) {
      std::cout << p << " is a directory." << std::endl;
    } else {
      std::cout << p << " is a file." << std::endl;
    }
  } else {
    std::cout << p << " does not exist." << std::endl;
  }
  return 0;
}
