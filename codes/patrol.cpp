#include <iostream>
using namespace std;

int main()
{
    int n;
    double s1,s2,d;
    double time;
    
    cin >> n;
    while(n--)
    {
        cin >> s1 >> s2 >> d;
        time = d/(s1+s2);
        cout << fixed;
        cout.precision(10);
        cout << time << endl;
    }
    cin.get();
cin.get();
    return 0;

    }
