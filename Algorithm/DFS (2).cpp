#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int matrix[101][101];
int clr[101],dis[101],p[101],fin[101];
int time=0;

void DFS_Visit(int v, int u){
    int i;
    clr[u]=1;
    time=time+1;
    dis[u]=time;

    for(i=1;i<=v;i++){
			if(clr[i]== 0){
                p[i]=u;
                DFS_Visit(v, i);
			}
    }
    clr[u]=2;
    time=time+1;
    fin[u]=time;
}

void DFS(int v){
	int i;

	for(i=0;i<=v;i++){
        clr[i]=0;
        dis[i]=200000000;
        fin[i]=200000000;
        p[i]=-1;
    }

    for(i=1;i<=v;i++){
        if(clr[i]==0){
            DFS_Visit(v, i);
        }
    }

    printf("Starting------Finshing");
    for(i=1; i<=v;i++){
        printf("  %d  ------  %d  ", dis[i], fin[i]);
        printf("\n");
}
}

int main(){
	int v,e,i,j,mx,mxv,mn,mnv,k,s;

	memset(matrix,0,sizeof(matrix));

	printf("Input Number of Vertex: ");
	scanf("%d",&v);

	k=1;

	while(1){
        printf("Edge %d: ",k);
		int a,b;

		scanf("%d%d",&a,&b);

		if(a==0 || b==0){
            break;
        }
        if(a < 1 || a > v || b < 1 || b > v){
            printf("Invalid Input");
        }
        else{
            matrix[a][b]++;
            k++;
        }
	}

	for(i=1;i<=v;i++){
        for(j=1;j<=v;j++){
            printf("%d  ",matrix[i][j]);
        }

        printf("\n");
    }

    DFS(v);

	return 0;
}

