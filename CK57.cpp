#include <iostream>
using namespace std;

int main()
{
  int n, k, count = 0;

  cin >> n >> k;

  while( n != 0 )
  {
    int number;

    cin >> number;

    if(number == k) count++;

    n--;
  }

  cout << count;

  return 0;
}
