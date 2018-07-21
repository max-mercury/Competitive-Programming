#include <iostream>
using namespace std;

int main(){
    int t;
    int a,b,n,c,d,i,ans;
    cin >> t;
    while (t--){
        cin >> a >> b >> n; 
        for (i = 1; i <= n; i++){
           if (i%2==1){
                a = 2 * a;
            }
            else {
                b = 2 * b;
            }
        }
        c=a;d=b;
        ans = max (c,d)/min (c,d);
    cout << ans <<endl; 
}
return 0;
}
