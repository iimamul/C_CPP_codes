#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int matrix[101][101];
	int v,e,i,j,mx,mxv,mn,mnv,k;

	memset(matrix,0,sizeof(matrix));

	printf("Input Number of Vertex: ");
	scanf("%d",&v);

	k=1;

	while(1)
	{
        printf("Edge %d: ",k);
		int a,b;

		scanf("%d%d",&a,&b);

		if(a==0 || b==0)
        {
            break;
        }
        if(a < 1 || a > v || b < 1 || b > v)
        {
            printf("Invalid Input");
        }
        else
        {
            matrix[a][b]++;
            matrix[b][a]++;
            k++;
        }

	}

	for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            printf("%d  ",matrix[i][j]);
        }

        printf("\n");
    }

	return 0;
}
