#include <boost/smart_ptr.hpp>
#include <iostream>

class MyClass {
public:
  MyClass() { std::cout << "MyClass constructed" << std::endl; }
  ~MyClass() { std::cout << "MyClass destroyed" << std::endl; }
  void say_hello() { std::cout << "Hello" << std::endl; }
};

int main() {
  boost::shared_ptr<MyClass> p(new MyClass());
  p->say_hello();
  return 0;
}
