#include <boost/regex.hpp>
#include <iostream>
#include <string>

int main() {
  std::string s = "Boost Libraries";
  boost::regex re("^Boost.*");

  if (boost::regex_match(s, re)) {
    std::cout << "Match found!" << std::endl;
  } else {
    std::cout << "No match." << std::endl;
  }
  return 0;
}
