#include <iostream>
#include <sstream>

class A
{
  friend class B;

private:
  int a1;
  int a2;

public:
  A(int arg_1, int arg_2)
    : a1(arg_1), a2(arg_2)
  { }

public:
  std::string to_string() const
  {
    std::stringstream ss;
    ss << "A(" << a1 << "," << a2 << ")";
    return ss.str();
  }
};

std::ostream& operator<< (std::ostream& os, const A &a)
{ return os << a.to_string(); }


class B
{
private:
  A& a;

public:
  B(A& arg) : a(arg)
  { }

public:
  void go()
  {
    a.a2 = 2 * a.a2;
  }
};


int main(int argc, char* argv[]) {
  {
    // ===== Your code starts here =====

    A a(42,21);
    std::cout << a << std::endl;
    B b(a);
    b.go();
    std::cout << a << std::endl;

    // =====  Your code ends here  =====
  }

  return 0;
}

