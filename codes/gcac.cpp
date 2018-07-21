#include <iostream>

using namespace std;

int main ()
{
    int t,n,m,i,p,j;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int minsal[n],ofsal[m],maxjob[m],qual[n][m];
        /*for (i=0;i<n;i++)
        {
            cin >> minsal[i];
        }
        for (i=0;i<n;i++)
        {
            cin >> ofsal[i] >> maxjob[i];
        }*/
        
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cin >> qual[i][j];
            }
        }
        
        /*for (i=0;i<n;i++)
        {
            cout << minsal[i] << endl;
        }
        for (i=0;i<n;i++)
        {
            cout << ofsal[i] << " "<< maxjob[i] << endl;
        }
        cout << endl;*/
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cout << qual[i][j] << endl;
            }
            cout << endl;
        }
    }
    cin.get();
    cin.get();
    return 0;
}
