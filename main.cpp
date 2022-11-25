
#include <iostream>
#include <cstring>
#include <iomanip>

/// test -Wshadow
int main()
{
  int x = 42;
  int sum = 0;

  for (int i = 0; i < 10; i++) {
    int x = i;
    std::cout << "x: " << x << '\n'; // prints values of i from 0 to 9
	  sum += x;
  }

  std::cout << "sum: " << sum << '\n';
  std::cout << "x:   " << x   << '\n'; // prints out 42

  return 0;
}
