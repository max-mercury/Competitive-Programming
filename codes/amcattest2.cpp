#include <iostream>
using namespace std;
int main()
{
 int n=4,num=n-1;
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=i;j++)
        cout<<num;
 num++;
 cout<<endl;
 }
 num-=2;
 for(int i=n-1;i>=1;i--)
 {
    for(int j=1;j<=i;j++)
        cout<<num;
 num--;
 cout<<endl;
 }
 cin.get();
 cin.get();
return 0;
}
