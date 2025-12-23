#include <boost/any.hpp>
#include <iostream>
#include <vector>

int main() {
  std::vector<boost::any> values;
  values.push_back(10);
  values.push_back(std::string("Hello"));
  values.push_back(3.14);

  for (const auto &v : values) {
    if (v.type() == typeid(int)) {
      std::cout << "Int: " << boost::any_cast<int>(v) << std::endl;
    } else if (v.type() == typeid(std::string)) {
      std::cout << "String: " << boost::any_cast<std::string>(v) << std::endl;
    } else if (v.type() == typeid(double)) {
      std::cout << "Double: " << boost::any_cast<double>(v) << std::endl;
    }
  }
  return 0;
}
