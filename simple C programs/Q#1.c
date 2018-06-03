#include<stdio.h>

int main()
{
    int mat1[2][2],mat2[2][2],mat3[2][2],i,j,k,l,m,n;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the value of first matrix ");
            scanf("%d",&mat1[i][j]);
        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("enter the value of 2nd matrix  ");
            scanf("%d",&mat2[k][l]);
        }
    }
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            mat3[m][n]=mat1[m][n]+mat2[m][n];
            printf(" %d ",mat3[m][n]);
        }
        printf("\n");
    }
    return 0;
}
