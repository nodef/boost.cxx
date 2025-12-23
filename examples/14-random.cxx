#include <boost/random.hpp>
#include <boost/random/random_device.hpp>
#include <iostream>

int main() {
  boost::random::random_device rd;
  boost::random::mt19937 gen(rd());
  boost::random::uniform_int_distribution<> dist(1, 6);

  std::cout << "Rolling die: " << dist(gen) << std::endl;
  return 0;
}
