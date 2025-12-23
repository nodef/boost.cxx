#include <boost/tokenizer.hpp>
#include <iostream>
#include <string>

int main() {
  std::string s = "Boost,C++,Libraries";
  boost::tokenizer<> tok(s);

  for (const auto &t : tok) {
    std::cout << t << std::endl;
  }
  return 0;
}
