#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> adj[100];
	list<int>::iterator it;

	int v,e,i,j,mx,mxv,mn,mnv,k;

	printf("Input Number of Vertex: ");
	scanf("%d",&v);

	k=1;

	while(1)
	{
		int a,b;

		printf("Edge %d: ",k);

		scanf("%d%d",&a,&b);

		if(a==0 || b==0)
            break;

        if(a < 1 || a > v || b < 1 || b > v)
        {
            printf("Invalid Input\n");
        }
        else
        {
            adj[a].push_back(b);
		    adj[b].push_back(a);
            k++;
        }
	}

	for(i=1;i<=v;i++)
    {
        printf("adj[%d]",i);

        for(it=adj[i].begin();it!=adj[i].end();it++)
        {
            printf(" ->%d",*it);
        }

        printf("\n");
    }

	return 0;
}
