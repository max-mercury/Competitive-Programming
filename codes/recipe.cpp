#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {return b;}
    return gcd(b%a,a);
}

int main(){
    int t,a[50],n,i,c,d;
    cin >> t;
    while (t--)
    {
    cin >> n;
    for (i=0;i<n;i++){
        cin >> a[i];
    }
            //cout<<n<<endl;
c=a[0];
for(i=1;i<n;i++)
{
    d=gcd(a[i],c);
c=d;
}
for(i=0;i<n;i++)
cout<<a[i]/c<<" ";
cout<<"\n";
}
cin.get();
cin.get();
return 0;
}
