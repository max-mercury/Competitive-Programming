#include <iostream>
#include <string.h>

using namespace std;

    int gcd(int a, int b)
    {
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
    }

int main ()
{
    int i,j,k,x,a;
    char b[255];
    cin >> x;
    int n1[x],n2[x],ans[x];
    for (j=0;j<x;j++)
    {
        cin >> a >> b;
        n1[j]= a;
        int g=0;
 		int m=strlen(b);
 		if(a!=0){
 		for (i = 0; i < m; ++i)
 			g=(g*10+(b[i]-'0'))%a; 
        n2[j]= g;
        }
 	} 
     for (i=0;i<x;i++)
     {
            if (n1[i]!=0)
                cout<<gcd(n1[i],n2[i])<<endl;
            else
 	          cout<<n2[i]<<endl;
            
    } 
    cin.get();
    cin.get();
    return 0;
    
}
