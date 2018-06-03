#include<stdio.h>

int graph[20][20];

int main()
{
    int maximum, vertex, i, j, k, cnt1, cnt2, temp[20];

    printf("Enter the number of vertex: ");
    scanf("%d", &vertex);

    i=0;
    do
    {
        printf("Edge %d: ", ++i);
        scanf("%d %d", &j, &k);

        if(j<0 || k<0 || j>vertex || k>vertex)
        {
            printf("Invalid input\n");
            printf("Edge %d: ", i);
            scanf("%d %d", &j, &k);

        }
        if(j==0||k==0)
            break;

        graph[j][k]=1;
        graph[k][j]=1;
    }
    while(j!=0 || k!=0);

    printf("\t\tMatrix of graph is\n");
    for(i=1; i<=vertex; i++)
    {
        printf("\n");
        for(j=1; j<=vertex; j++)
        {
            printf("%d ", graph[i][j]);
        }
    }

    for(i=1; i<=vertex; i++)
    {
        cnt1=0;
        for(j=1; j<=vertex; j++)
        {
            if(graph[i][j]==1)
            {
                cnt1++;
            }
        }
        temp[i]=cnt1;
    }

    maximum=temp[1];
    for(i=2; i<=vertex; i++)
    {
        if(maximum>temp[i])
        {
            maximum=temp[i];
        }
    }

    for(i=1; i<=vertex; i++)
    {
        if(maximum==temp[i])
        {
            printf("\n%d vertex is maximum indegree: %d", i, temp[i]);
        }
    }


    cnt1=cnt2=0;
    for(i=1; i<=vertex; i++)
    {
        if(temp[i]%2==0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    printf("\nEven indegree: %d", cnt1);
    printf("\nOdd indegree: %d", cnt2);

    return 0;
}
