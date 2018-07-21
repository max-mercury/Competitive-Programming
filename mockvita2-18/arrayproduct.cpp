#include <iostream> 
using namespace std;

int c=0; 

void product(int k,int i,int m) 
{ 
    int j; 
    if(k==0) 
    { 
        if(i<=m) 
        { 
            c++; 
            return; 
        } 
    } 
    else 
    { 
        if(i>m) 
            return ; 
        for(j=i;j<=m;j++) 
        { 
            if(m%j == 0) 
            product(k-1,j,m/j); 
        } 
    } 
} 
int main() 
{ 
    int n,k,a[10],m=1,i,j; 
    cin >> n >> k; 
    for(i=0;i<n;i++) 
    { 
        cin >> a[i]; 
        m=m*a[i]; 
    } 
    for(i=1;i<=m;i++) 
    { 
        if(m%i==0) 
        product(k-2,i,m/i); 
    } 
    cout << c << endl; 
    return 0; 
}
