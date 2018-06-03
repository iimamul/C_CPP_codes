#include<iostream>
using namespace std;

#define row 3
#define col 4

int main()
{
    double coef[row][col],t,s,x[row],w;
    int i,j,k;
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {cout<<"\ncoef["<<i<<"]["<<j<<"]:";
        cin>>coef[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        w=coef[i][i];
        for(k=i;k<col;k++)
        {
            coef[i][k]=coef[i][k]/w;
        }

    for(j=0;j<row;j++)
    {
        if(i!=j)
        {
        t=coef[j][i];
        for(k=i;k<col;k++)
        {
            s=(coef[i][k]*t);
            coef[j][k]=coef[j][k]-s;
        }
        }

    }
    }

 cout<<"\nThe Identity Matrix:\n";
 for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {cout<<"\tcoef["<<i<<"]["<<j<<"]:";
        cout<<coef[i][j];
        }
        cout<<"\n";
    }


    return 0;
}
