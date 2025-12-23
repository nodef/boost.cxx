#include <boost/bind.hpp>
#include <iostream>

void print_sum(int a, int b) {
  std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}

int main() {
  // boost::bind allows binding arguments to functions
  // Here we bind 10 to the first argument, and the second argument is a
  // placeholder
  auto f = boost::bind(print_sum, 10, _1);
  f(20); // calls print_sum(10, 20)
  return 0;
}
