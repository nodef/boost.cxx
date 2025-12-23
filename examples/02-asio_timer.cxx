#include <boost/asio.hpp>
#include <iostream>

int main() {
  boost::asio::io_context io;
  boost::asio::steady_timer t(io, boost::asio::chrono::seconds(1));

  std::cout << "Waiting for 1 second..." << std::endl;
  t.wait();
  std::cout << "Timeout!" << std::endl;

  return 0;
}
