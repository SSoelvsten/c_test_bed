#include <iostream>

class A
{
public:
  A(int i)
  {
    std::cout << "A(" << i << ")" << std::endl;
  }

  ~A()
  {
    std::cout << "~A()" << std::endl;
  }
};

class B
{
public:
  B(int i, int j)
  {
    std::cout << "  B(" << i << "," << j << ")" << std::endl;
  }

  ~B()
  {
    std::cout << "  ~B()" << std::endl;
  }
};

int main(int argc, char* argv[]) {
  {
    // ===== Your code starts here =====

    for (int i = 0; i < 2; i++) {
      A a(i);
      for (int j = 0; j < 2; j++) {
        B b(i,j);
        if (i == 1) { goto test_point;  }
        std::cout << "  for (j = 0; ...) end" << std::endl;
      }
      std::cout << "for (i = 0; ...) end" << std::endl;
    }
  test_point:
    std::cout << "..." << std::endl;

    // =====  Your code ends here  =====
  }

  return 0;
}

