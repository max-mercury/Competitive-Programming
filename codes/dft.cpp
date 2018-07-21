#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int N,L,i,k,n;
	printf("Enter No. of dft point:");
	scanf("%d", &N);
	printf("Enter No. of samples:");
	scanf("%d", &L);
	
	int x[L];
    float X1[N], X2[N];
	
	for (i=0;i<N;i++)
	{
		X1[i]=0;
		X2[i]=0;
	}
	printf("Enter input sequence:");
	for (i = 0;i<L;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Input sequence:");
	
	for (i = 0;i<L;i++)
	{
		printf("%d ",x[i]);
	}
	
	if (N >= L)
	{
		for (k =0;k<N;k++)
		{
			for (n=0;n<N;n++)
			{
				X1[k] = X1[k] + x[n] * cos((2*M_PI*k*(n-N))/N);
				X2[k] = X2[k] + x[n] * sin((2*M_PI*k*(n-N))/N);
			}
			X2[k] = X2[k]*(-1.0);
		}
	
	printf("\nOutput:");
	
	for (k = 0;k<N;k++)
	{
		printf("%.2f",X1[k]);
		if(X2[k] <= 0 )
		{
		  printf("%.2fj ",X2[k]);
        }
        else
        {
            printf("+%.2fj ",X2[k]);
        }
	}
	//printf("\nImaginary:");
	//for (k = 0;k<N;k++)
	//{
	//	printf("%.2f ",X2[k]);
	//}
	}
	else
	{
		printf("DFT not possible");
	}
	
	cin.get();
	cin.get();
	return 0;
}
