#include <iostream>

using namespace std;

int calc(int arr[], int n)
{
    int i=0,motu=0,tomu=0;
    for(i=0;i<n;i++)
    {
        if (i%2 == 0)
        {
            motu += arr[i];     
        } 
        else
        {
            tomu += arr[i];
        } 
    }
    if(tomu > motu)
    {
        return 1;
    } 
    else
    {
        return 0;
    }   
}

int swapmov(int arr[],int n)
{
    int i,min=100000;
    int temp=0;
    int minpos=0;
    
    for(i=0;i<n;i++)
    {
        if (i%2 != 0)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                minpos = i;    
            }
        } 
    }
    if (arr[minpos+1] > min && arr[minpos+1] > arr[minpos-1] )
    {
        temp = arr[minpos+1];
        arr[minpos+1] = arr[minpos];
        arr[minpos] = temp;    
    }
    else if (arr[minpos-1] > min && arr[minpos-1] > arr[minpos+1])
    {
        temp = arr[minpos-1];
        arr[minpos-1] = arr[minpos];
        arr[minpos] = temp;    
    }
    for (i=0;i<n;i++)
    {
        cout << arr[i] << " ";    
    } 
    return (calc(arr,n));   
}

int main()
{
    int t,n,k,i,j;
    int ans;
    cin >> t;
    
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        int motu=0,tomu=0;
        int found = 0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];    
        }      
        if (k == 0)
        {
            ans = calc(a,n);
            if(ans == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else
        {
            for (i=0;i<k;i++)
            {
                ans = swapmov(a,n);
                if(ans==1) {found == 1;}
            }  
        }
        if(found == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    cin.get();
    cin.get();
    return 0;    
}
