#include<iostream>
using namespace std;

#define row 3
#define col 4

int main()
{
    double coef[row][col],t,s,x[row];
    int i,j,k;
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {cout<<"\ncoef["<<i<<"]["<<j<<"]:";
        cin>>coef[i][j];
        }
    }
    for(i=0;i<row-1;i++)
    {
    for(j=i+1;j<row;j++)
    {
        t=coef[j][i]/coef[i][i];
        for(k=i;k<col;k++)
        {
            s=(coef[i][k]*t);
            coef[j][k]=coef[j][k]-s;
        //cout<<"\tcoef["<<j<<"]["<<k<<"]"<<s;
        }
    }
    }

 cout<<"\nAfter Forward Elimination:\n";
 for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {cout<<"\tcoef["<<i<<"]["<<j<<"]:";
        cout<<coef[i][j];
        }
        cout<<"\n";
    }
    x[row-1]=coef[row-1][col-1]/coef[row-1][col-2];

    cout<<"\nBackward Substitution:";
    for(i=row-2;i>=0;i--)
    {
        s=0;
        for(j=col-2;j>i;j--)
    {
        s+=x[j]*coef[i][j];
        cout<<"\n"<<j;

    }
    x[i]=(coef[i][col-1]-s)/coef[i][i];
    }
cout<<"\nThe result:";
for(i=0;i<row;i++)
    cout<<"X["<<i<<"]:"<<x[i]<<"\t";


    return 0;
}
