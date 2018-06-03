#include <stdio.h>

#define gs 3333
#define MAX(a, b) ((a > b) ? (a) : (b))

int n;
long dist[gs][gs];
long d[gs];
int infinity=33333;

void printD()
{
    int i;
    for (i = 1; i <= n; ++i)
        printf("%d: Cost %d\n", i, d[i]);
}

void dijkst(int s)
{
    int i, k, min;
    int visited[gs];

    for (i = 1; i <= n; ++i)
    {
        d[i] = infinity;
        visited[i] = 0;
    }

    d[s] = 0;

    for (k = 1; k <= n; ++k)
    {
        min = -1;
        for (i = 1; i <= n; ++i)
            if (!visited[i] && ((min == -1) || (d[i] < d[min])))
                min = i;

        visited[min] = 1;

        for (i = 1; i <= n; ++i)
            if (dist[min][i])
                if (d[min] + dist[min][i] < d[i])
                    d[i] = d[min] + dist[min][i];
    }
}

int main()
{
    int i, j,e;
    int u, v, w;
    printf("enter edge number:\n");
    scanf("%d", &e);
    for (i = 0; i < e; ++i)
        for (j = 0; j < e; ++j)
            dist[i][j] = 0;
    n = -1;
    for (i = 0; i < e; ++i)
    {
        scanf("%d%d%d", &u, &v, &w);
        dist[u][v] = w;
        n = MAX(u, MAX(v, n));
    }


    int s = 1;
    dijkst(s);

    printD();

    return 0;
}

