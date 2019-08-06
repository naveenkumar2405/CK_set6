#include <iostream>
using namespace std;

int main()
{
  int n, digit;
  
  cin >> n;
  digit = ( n == 0 ); 
  
  while(n != 0)
  {
    digit++;
    n /= 10;
  }
  
  cout << digit;
  
  return 0;
}
