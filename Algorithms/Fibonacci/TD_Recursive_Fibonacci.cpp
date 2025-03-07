using namespace std;

#include <iostream>

class Fibonacci {

public:
  virtual int CalculateFibonacci(int n) {
    if (n < 2) {
      return n;
    }
    return CalculateFibonacci(n - 1) + CalculateFibonacci(n - 2);
  }
};

int main(int argc, char *argv[]) {
  Fibonacci *fib = new Fibonacci();
  cout << "5th Fibonacci is ---> " << fib->CalculateFibonacci(5) << endl;
  cout << "6th Fibonacci is ---> " << fib->CalculateFibonacci(6) << endl;
  cout << "7th Fibonacci is ---> " << fib->CalculateFibonacci(7) << endl;

  delete fib;
}