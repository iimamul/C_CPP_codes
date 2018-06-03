#include<stdio.h>

int graph[20][20];

int main()
{
    int vrtx,v1,v2,i,cnt1,ver[20],min,max;   // v1 = column of matrix , v2=row of materix , ver=total num of vrtx...
    printf("\n Enter vertex numer : ");
    scanf("%d",&vrtx);

    // Enter graph and show in matrix ...
    i=0;
    do
    {
        printf("\n Enter %d edge that connects two vertex : ",++i);
        scanf("%d %d",&v1,&v2);

        if(v1==0||v2==0)
            break;

        if(v1<1||v1>vrtx||v2<1||v2>vrtx)
        {
            printf("\n Invalid Input !!!  ");
            printf("\n Enter %d edge that connects two vertex : ",i);
            scanf("%d %d",&v1,&v2);
        }
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    while(v1!=0 || v2!=0);

    printf("\n\tMatrix of graph : \n");

    for(i=1; i<=vrtx; i++){
        printf("\n");
        for(v1=1; v1<=vrtx; v1++){
            printf("%d ", graph[i][v1]);
        }
    }
//Total indegree ...
int Iv;
printf("\n Enter the umber of Vertex of which idegree u wanna know : ");
scanf("%d",&Iv);
for(i=1; i<=vrtx; i++){
        cnt1=0;
        for(v1=1; v1<=vrtx; v1++){
            if(graph[i][v1]==1){
                cnt1++;
            }
        }
        if (i==Iv)
            printf("\n %d vertex has %d indegree ", i,cnt1);
    }
//Maximun & Minimum indegree ...
    for(i=1; i<=vrtx; i++){
        cnt1=0;
        for(v1=1; v1<=vrtx; v1++){
            if(graph[i][v1]==1){
                cnt1++;
            }
        }
        ver[i]=cnt1;
    }
    //maximum
    printf("\n");
    max=ver[1];
    for(i=2; i<=vrtx; i++){
        if(max<ver[i]){
            max=ver[i];
        }
    }

    for(i=1; i<=vrtx; i++){
        if(max==ver[i]){
            printf("\n %d vertix has maximum indegree: %d", i, ver[i]);
        }
    }
  //minimum
  printf("\n");
    min=ver[1];
    for(i=2; i<=vrtx; i++){
        if(min>ver[i]){
            min=ver[i];
        }
    }

    for(i=1; i<=vrtx; i++){
        if(min==ver[i]){
            printf("\n %d vertix has minimum indegree: %d", i, ver[i]);
        }
    }
    printf("\n");
    //total indegree of graph...
    int totald=0;
    for(i=1; i<=vrtx; i++){
        cnt1=0;
        for(v1=1; v1<=vrtx; v1++){
            if(graph[i][v1]==1){
                cnt1++;
            }
        }
        printf("\n %d vertex has %d indegree ", i,cnt1);
        totald=totald+cnt1;
    }
    printf("\n The graph has total %d indegrees \n",totald);

   return 0;
}
