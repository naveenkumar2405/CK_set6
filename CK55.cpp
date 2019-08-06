#include <iostream>
using namespace std;

int main()
{
  int num1, num2;

  cin >> num1 >> num2;

  if( (num1 * num2) % 2 == 0){
    cout << "even";
  }
  else{
        cout << "odd" ;
  }
  return 0;
}
