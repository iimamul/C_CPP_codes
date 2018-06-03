#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string.h>

using namespace std;

double A[100][100],temp,a1,a2,a3,Ea1,Ea2,Ea3,curr1,curr2,curr3,prev1,prev2,prev3;
int i,j,p,k,n,c=0;

void print(void)
{
        cout<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
        cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}

void Gauss_Seidel(void)
{
    prev1=a1;
    prev2=a2;
    prev3=a3;

    //print();
    cout<<"Iteration no.     a1   |Ea1|          a2   |Ea2|           a3  |Ea3|\n";
    cout<<"----------------------|-----|-------------|-----|-------------|-----|\n";
    while(1)
    {
        if(c>10) break;
        curr1 = a1 = (A[0][3] - A[0][1]*a2 - A[0][2]*a3)/A[0][0];
        curr2 = a2 = (A[1][3] - A[1][0]*a1 - A[1][2]*a3)/A[1][1];
        curr3 = a3 = (A[2][3] - A[2][0]*a1 - A[2][1]*a2)/A[2][2];

        Ea1 =   abs( (curr1-prev1) / curr1 ) * 100;
        Ea2 =   abs( (curr2-prev2) / curr2 ) * 100;
        Ea3 =   abs( (curr3-prev3) / curr3 ) * 100;

        printf("%5d %15.2lf %6.2lf %12.2lf %6.2lf %13.2lf %6.2lf\n",c,a1,Ea1,a2,Ea2,a3,Ea3);

        prev1 = curr1;
        prev2 = curr2;
        prev3 = curr3;
        c++;
    }
}

void Dominent_check(void)
{
    float a=0,f;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           a=a+A[i][j];
        }
        if(A[i][i]<a-A[i][i]){f=0; break;}
        else{a=0;f=1;}
    }

    if(f==1)
        cout<<"\nThe Matrix is diagonally dominant.\n\n";
    else
        cout<<"\nThe Matrix is not diagonally dominant.\n\n";
}

void Input(void)
{
    cout<<"Equation No:\n";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"\nEquation "<<i+1<< ":\n";
        for(j=0; j<=n; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\nInitial Guesses:\n";
    cout<<"a1: ";
    cin>>a1;
    cout<<"a2: ";
    cin>>a2;
    cout<<"a3: ";
    cin>>a3;
}
int main()
{
    Input();
    Dominent_check();
    Gauss_Seidel();

    return 0;
}
