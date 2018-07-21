#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,j,t,n;
    
    char array[10];
    string arr[100];
    string str;
    cin>>t;
    i=0;
    while(t--)
    {
        cin>>array;
        cin.getline(array, 100);
        arr[i] = array;
        i++;
    }
    for (j=0;j<t;j++){
        cout << arr[i] << endl;
    }
cin.get();
cin.get();
return 0;    
}
