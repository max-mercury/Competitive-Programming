#include <iostream>

using namespace std;

int main()
{
    int a=2,b=4,c=8;
    int (*arr1)[2];
    *arr1[2] = {6*a,8*b};
    int *arr2[2]; 
    *arr2[2] = {6*b,8*c};
    
    int (*arr[2][2]) = {&arr1,&arr2};
    
    cout << *(*(**(arr+1)+1)));    
    
}
