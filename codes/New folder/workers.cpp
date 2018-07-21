#include <iostream>

using namespace std;

int main()
{
    long int n,i,j,temp1,temp2,sum=0,sum3=0;
    bool found = false;
    cin >> n;
    long int a[n],c[n];
    for(i=0;i<n;i++)
    {
        cin >> c[i];    
    }
    for(i=0;i<n;i++)
    {
        cin >> a[i];    
    }
    for (i = 0; i < n-1; i++)      
    {   for (j = 0; j < n-i-1; j++) 
        {  if (c[j] > c[j+1])
              {temp1 = c[j];c[j] = c[j+1];c[j+1] = temp1;
              temp2 = a[j];a[j] = a[j+1];a[j+1] = temp2;}
    }}
    if(a[0] == 3) {sum = c[0];found = true;}
    else if (a[0] == 1)
    {
        sum += c[0];
        for (i=1;i<n-1;i++)
        {    if (a[i] == 2)  {sum += c[i];found = true;break;}    }
        for (i=0;i<n;i++)
        {    if (a[i] == 3)  {sum3 = c[i];break;}    }    
    }
    else if(a[0] == 2)
    {
        sum += c[0];
        for (i=1;i<n-1;i++)
            { if (a[i] == 1)  {sum += c[i];found = true;break; }    } 
        for (i=0;i<n;i++)
        {    if (a[i] == 3)  {sum3 = c[i];break;}    }      
    }
    if (sum > sum3 && sum3 != 0) sum = sum3;
    if (found == false ) sum = sum3;
    cout << sum << endl;
    return 0;
}
