#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string str;
  int alphabet = 0, number = 0;

  cin >> str;

  for(int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
        alphabet = 1;
    if(str[i] >= '0' && str[i] <= '9')
        number = 1;
    if(alphabet && number)
        break;
  }
  if (alphabet && number ) {
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }

  return 0;
}
