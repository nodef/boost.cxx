#include <boost/optional.hpp>
#include <boost/optional/optional_io.hpp>
#include <iostream>

boost::optional<int> divide(int a, int b) {
  if (b == 0)
    return boost::none;
  return a / b;
}

int main() {
  auto r1 = divide(10, 2);
  if (r1)
    std::cout << "10/2 = " << *r1 << std::endl;

  auto r2 = divide(10, 0);
  if (!r2)
    std::cout << "10/0 is invalid" << std::endl;

  return 0;
}
