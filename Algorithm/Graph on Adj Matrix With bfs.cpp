#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<list>
#include<queue>

using namespace std;



int matrix[101][101];

void BFS(int s, int v);

int main()
{
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

    for(i=1; i<=v; i++)
    {
        for(j=1; j<=v; j++)
        {
            printf("%d  ",matrix[i][j]);
        }

        printf("\n");
    }

    int source;
    printf("Enter source vertecs: ");
    scanf("%d",&source);
    BFS(source,v);

    return 0;
}

void BFS(int s,int v)
{
    queue<int> Q;
    int i,j,u,num;
    int clr[101],dis[101],p[101];

    for(i=0; i<=v; i++)
    {
        clr[i]=0;
        dis[i]=200000000;
        p[i]=-1;
    }

    clr[s]=1;
    dis[s]=0;

    Q.push(s);

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();

        for(i=1; i<=v; i++)
        {
            if(matrix[u][i] == 1 && clr[i]== 0)
            {
                clr[i]= 1;
                dis[i]= dis[u]+1;
                p[i]= u;

                Q.push(i);
            }
        }
        clr[u]=2;
    }

    for(i=1; i<=v; i++)
    {
        if(dis[i]%2 !=0)
            cout<<"Odd distance node from source "<<i<<endl;
        else
            cout<<"Even distance node from source  "<<i<<endl;
    }
}


