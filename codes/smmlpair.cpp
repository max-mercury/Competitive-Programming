#include <iostream>

using namespace std;
 
int main() {
    unsigned long long int n;
    int t,a[n],sum,min,i,j; 
    
	cin>>t;
	while(t--)
	{   sum=0;min=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    min=a[0]+a[1];
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {   
	            if(i!=j)
	            { 
	                sum=a[i]+a[j];
	                if(min>sum)
	                {
	                    min=sum;
	                }
	                
	            }
	            
	        }
	    }
	    cout<<min<<"\n";
	}
	cin.get();
	cin.get();
	return 0;
}
