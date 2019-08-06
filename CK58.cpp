#include <iostream>
using namespace std;

int main()
{
  int n, k;
  int found = 0;

  cin >> n >> k;

  while(n != 0)
  {
    int num;

    cin >> num;

    if(num == k)
    {
        found = 1;
        break;
    }

    n--;
  }

  if(found){
           cout<<"yes";
           } else{
               cout<<"no" ;
           }

  return 0;
}
