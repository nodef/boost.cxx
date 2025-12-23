#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

int main() {
  boost::gregorian::date d = boost::gregorian::day_clock::local_day();
  std::cout << "Today is: " << d << std::endl;
  return 0;
}
