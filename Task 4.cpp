#include <iostream>
using namespace std;

int foo [] = {1,2,3,4,5,6,7,8,9,10,11,12};
int n, result=0;

int main ()
{
  for ( n=0 ; n<12 ; ++n )
  {
    result += foo[n];
  }
  cout << result;
  return 0;
}
