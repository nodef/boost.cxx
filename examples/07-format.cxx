#include <boost/format.hpp>
#include <iostream>

int main() {
  std::cout << boost::format("Writing %1%,  x=%2% : %3%-th try") % "toto" %
                   40.23 % 50
            << std::endl;
  return 0;
}
