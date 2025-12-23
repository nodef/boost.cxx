#include <boost/thread.hpp>
#include <iostream>

void worker() { std::cout << "Hello from thread!" << std::endl; }

int main() {
  std::cout << "Main thread start." << std::endl;
  boost::thread t(worker);
  t.join();
  std::cout << "Main thread end." << std::endl;
  return 0;
}
