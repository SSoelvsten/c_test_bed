#include <iostream>
#include <sstream>

class A
{
public:
  int calls = 0;
  int latest_val = 0;

public:
  A() { }

  void operator() (int a)
  {
    calls++;
    latest_val = a;
  }

public:
  std::string to_string() const
  {
    std::stringstream ss;
    calls == 0 ? ss << "A(_)" : ss << "A(" << latest_val << ")";
    return ss.str();
  }
};

std::ostream& operator<< (std::ostream& os, const A &a)
{ return os << a.to_string(); }

template<typename callback_t>
class B
{
private:
  callback_t& __callback;

public:
  B(callback_t& cb) : __callback(cb)
  { }

public:
  void go()
  {
    __callback(42);
  }
};


int main(int argc, char* argv[]) {
  {
    // ===== Your code starts here =====

    A a;
    std::cout << a << std::endl;
    B b(a);
    b.go();
    std::cout << a << std::endl;

    // =====  Your code ends here  =====
  }

  return 0;
}

