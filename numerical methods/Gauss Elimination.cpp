#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string.h>

using namespace std;

double A[10][10],x[10],z[10],temp;
int i,j,k,n,p,s,c=0;

void print(void)
{
    cout<<endl;
    cout<<"\nResulting Matrix:"<<++c<<"\n\n";
    for(int l=0; l<n; l++)
    {
        for(int m=0; m<n+1; m++)
        {
            printf("%6.2lf  ",A[l][m]);
        }
        cout<<endl;
    }
    cout<<endl;
}

void Pivoting(void)
{
//generation of scalar matrix
       for(i=0;i<n;i++)
       {
            temp = A[i][i];
//initialization of p
            p = i;
//find largest no of the columns and row no. of largest no.
            for(k = i+1; k < n; k++)
            if(fabs(temp) < fabs(A[k][i]))
            {
               temp = A[k][i] ;
               p = k;
            }
//swaping the elements of diagonal row and row containing largest no
            for(j = 0; j <= n; j++)
            {
                swap(A[p][j],A[i][j]);
            }
        }
        printf("After Pivoting: \n\n");

        for(int l=0; l<n; l++)
        {
            for(int m=0; m<n+1; m++)
            {
                printf("%6.2lf  ",A[l][m]);
            }
            cout<<endl;
        }
        cout<<endl;

}
void Gauss_Elimination(void)
{
    double temp=0;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {

            temp=A[j][i]/A[i][i];
            for(k=i; k<=n; k++)
            {
                A[j][k] = A[j][k] - A[i][k] * temp;
            }
            print();
        }
    }
    x[n-1] = A[n-1][n] / A[n-1][n-1] ;
    for(i = n - 2 ; i >= 0 ; i--)
    {
        s = 0 ;
        for(j = i + 1 ; j < n ; j++)
        {
            s += (A[i][j] * x[j]) ;
            x[i] = (A[i][n] - s) / A[i][i] ;
        }
    }
    printf("\nThe result is:\n") ;
    for(i = 0 ; i < n ; i++)
        printf("\nx[%d] = %.4f", i + 1, x[i]);
}

void Input(void)
{
    cout<<"Equation No: ";
    cin>>n;
    cout<<"\nCoefficients of the Equation: \n";
    for(i=0; i<n; i++)
    {
        cout<<"\nEquation "<<i+1<< ":\n";

        for(j=0; j<=n; j++)
        {
            cin>>A[i][j];
        }
    }
}
int main()
{
    Input();
    Pivoting();
    Gauss_Elimination();

    return 0;
}

