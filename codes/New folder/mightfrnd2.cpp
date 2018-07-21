#include <iostream>

using namespace std;

int calc1(int arr[], int n)
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


int calc(int arr1[], int arr2[] ,int n1, int n2)
{
    int j=0,i=0,motu=0,tomu=0;
    for(i=0;i<n1;i++)
    {
        motu += arr1[i];     
    } 
    for(i=0;i<n2;i++)
    {
        tomu += arr2[i];     
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


int swapmov(int arr[],int n,int fina)
{
    int ml,tl,i,j,k;
    int temp,ans;
    int found=0;
    
    if (n%2==0)
    {
        ml = n/2;tl=n/2;    
    }
    else
    {
        ml = (n/2)+1;tl=(n/2);    
    }
    int mot[ml],tom[tl];
    
    j=0,k=0;
    
    for (i=0;i<n;i++)
    {
        if (i%2 == 0)
        {
            mot[j] = arr[i];
            j++;     
        } 
        else
        {
            tom[k] = arr[i];
            k++;
        }     
    }
    //for (i=0;i<ml;i++) cout << mot[i] << " ";
    //cout << endl;
    //for (i=0;i<tl;i++) cout << tom[i] << " ";
    //cout << endl;
    
    for (i=0;i<fina;i++)
    {   
        bubbleSort(mot,ml);
        bubbleSort(tom,tl);
    
        temp = tom[0];
        tom[0] = mot[ml];
        mot[ml] = temp;
        
        ans = calc(mot,tom,ml,tl);
        if (ans==1) {found = 1;break;}    
    }
    if(found==1) cout << "YES" << endl;
    else cout << "NO" << endl;
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
        
        for(i=0;i<n;i++)
        {
            cin >> a[i];    
        }      
        if (k == 0)
        {
            ans = calc1(a,n);
            if(ans == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else
        {
            ans = calc1(a,n);
            if(ans == 1) cout << "YES" << endl;
            else swapmov(a,n,k); 
        }
        
    }
    cin.get();
    cin.get();
    return 0;    
}
