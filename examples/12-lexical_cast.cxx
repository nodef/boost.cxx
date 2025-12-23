#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

int main() {
  try {
    int x = boost::lexical_cast<int>("123");
    std::cout << "x + 1 = " << (x + 1) << std::endl;

    std::string s = boost::lexical_cast<std::string>(456);
    std::cout << "s + '7' = " << (s + "7") << std::endl;
  } catch (const boost::bad_lexical_cast &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
