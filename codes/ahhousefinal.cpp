#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,k,p,n,m,i,j,ans,ans2=0,ansn;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int pf[n][m],pt[n][m],s[n][m],s1[n][m];
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cin >> pf[i][j];
            }
        }
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cin >> pt[i][j];
            }
        }
        
        s[0][0] = pf[0][0];
		// fill the first row
		for (i = 1; i < n; i++) {
			s[0][i] = pf[0][i] + s[0][i - 1];
		}

		// fill the first column
		for (i = 1; i < m; i++) {
			s[i][0] = pf[i][0] + s[i - 1][0];
		}

		// path will be either from top or left, choose which ever is minimum
		for (i = 1; i < n; i++) {
			for (j = 1; j < m; j++) {
				s[i][j] = pf[i][j] + min(s[i - 1][j], s[i][j - 1]);
			}
		}
		
		s1[0][0] = pt[0][0];
		// fill the first row
		for (i = 1; i < n; i++) {
			s1[0][i] = pt[0][i] + s1[0][i - 1];
		}

		// fill the first column
		for (i = 1; i < m; i++) {
			s1[i][0] = pt[i][0] + s1[i - 1][0];
		}

		// path will be either from top or left, choose which ever is minimum
		for (i = 1; i < n; i++) {
			for (j = 1; j < m; j++) {
				s1[i][j] = pt[i][j] + min(s1[i - 1][j], s1[i][j - 1]);
			}
		}
		
		ansn = s1[n - 1][m - 1];
		ans2 = pt[0][0] + pt[n-1][m-1];
        for(i=0;i<n-1;i++)
        {
            for (j=0;j<m-1;j++)
            {
                if (s[i][j+1] < s[i+1][j])
                {
                    ans2 = ans2 + pt[i][j+1]; 
                }
                else if (s[i][j+1] == s[i+1][j])
                {
                    ans2 = ansn;
                }
                else
                {
                    ans2 = ans2 + pt[i+1][j];
                }
            }
        }
        
        ans = s[n - 1][m - 1];
        cout << ans << " " << ans2 << endl;
    } 
    cin.get();
    cin.get();
    return 0;
}
