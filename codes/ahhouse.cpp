#include <iostream>
#include <algorithm> 

using namespace std;

int find(int **A,int n,int m)
{
    int s[n][m];
    s[0][0] = A[0][0];
		// fill the first row
		for (int i = 1; i < n; i++) {
			s[0][i] = A[0][i] + s[0][i - 1];
		}

		// fill the first column
		for (int i = 1; i < m; i++) {
			s[i][0] = A[i][0] + s[i - 1][0];
		}

		// path will be either from top or left, choose which ever is minimum
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m; j++) {
				s[i][j] = A[i][j]+ min(s[i - 1][j], s[i][j - 1]);
			}
		}
return s[n - 1][m - 1];
}
