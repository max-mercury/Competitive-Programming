#include<iostream>
#include<math.h>
using namespace std;

int main (){
    
    int t,a,b;
    float cmax,cmin;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cmax = sqrt(b*b+a*a);
        cmin = sqrt(b*b-a*a);
        cout << cmin << " " << cmax << endl;
        }
        
return 0;
}
