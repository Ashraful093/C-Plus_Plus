//4. Write a program in C++ to find the perfect numbers between 1 and 500.

#include <iostream>
using namespace std;
int main()
{
  int i = 1, u = 1, sum = 0;

  cout << "\n The perfect numbers between 1 to 500 are: \n";
  while (i <= 500)
  {
    while (u <= 500)
    {
      if (u < i)
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
}
