#include <iostream>
using namespace std;


int func(int m, int n)
{
    int ans=1,ct=0;
    while(m-n>=0)
    {
     ans = ans *2;
     m = m-n; 
     ct++;  
    }
    return (ct);
}

int main()
{
  int ans = func(120,13);  
  cout << ans;
  cin.get();
  cin.get();
  return 0;
}
