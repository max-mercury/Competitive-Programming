#include <iostream>

using namespace std;

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
    int t,n,m;
    int i,j,k,l;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int a[m],b[n];
        
        int chefl,assistlen;
        int chef[1000],assist[1000];
                
        for (i=0;i<m;i++)
        {
            cin >> a[i];    
        }
        bubbleSort(a,m);
        j=0;k=0;
        for (i=0;i<n;i++)
        {
            if(a[k] != i+1)
            {
              b[j] = i+1;
              j++;  
            }
            else
            {k++;}
        }
        
        k=0;l=0;
        
        for (i=0;i<n-m;i++)
        {
            //cout << b[i];
            if(i%2==0)
            {
                chef[k] = b[i];
                k++;    
            }
            else
            {
                assist[l] = b[i];
                l++;
            }    
        }
        chefl = k;
        assistlen = l;
        
        if(chef[0] == 0)
        {
            cout << " ";
        }
        else
        {
            for (i=0;i<chefl;i++)
            {cout << chef[i]<< " ";}
        }
        cout << endl;
        
        if(assist[0] == 0)
        {
            cout << " ";
        }
        else
        {    
            for (i=0;i<assistlen;i++)
            {cout << assist[i]<< " ";}
        }
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
