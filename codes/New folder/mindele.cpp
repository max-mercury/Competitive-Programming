#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    int t,n,i,j,k;
    bool found=false;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for (i=0;i<n;i++)
        {
            cin >> a[i];    
        } 
        if (findGCD(a,n) == 1)
        {
            cout << 0 <<endl;    
        }
        else
        {
            bubbleSort(a,n);
            k=n-1;
            i=1;
            while(k > 0)
            {
                if (findGCD(a,n-i) == 1)
                {
                    cout << i <<endl;
                    found = true;
                    break;    
                } 
                i++; 
                k--;
            }
            if(found == false)
            {
                cout << -1 <<endl;
            }
        }   
    }
    cin.get();
    cin.get(); 
    return 0;
}
