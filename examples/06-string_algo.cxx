#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s = "Boost C++ Libraries";
  boost::to_upper(s);
  std::cout << "Upper: " << s << std::endl;

  std::vector<std::string> parts;
  boost::split(parts, s, boost::is_any_of(" "));

  for (const auto &part : parts) {
    std::cout << "Part: " << part << std::endl;
  }
  return 0;
}
