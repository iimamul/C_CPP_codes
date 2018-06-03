#include<iostream>
#include<math.h>
using namespace std;

int n;
double *coef;

int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
        f*=i;

    return f;
}

double f(double x)
{
    int i; double fx=0;
    for(i=0;i<=n;i++)
    {
        fx+=coef[i]*pow(x,i);
    }
    return fx;
}

double fn(double x,int a)
{
    int i; double fx=0;

    for(i=a;i<=n;i++)
    {
       fx+=coef[i]*pow(x,i-a)*fact(i);
    }

    return fx;
}


int main()
{
    double xi,xi2,fxi,Exact,T;
    int i;
    cout<<"\nEnter Highest Order:";
    cin>>n;
    coef=new double[n+1];
    for(i=0;i<=n;i++)
    {
        cout<<"\nX^"<<i<<":";
        cin>>coef[i];
    }
    cout<<"\nEnter Xi value:";
    cin>>xi;
    cout<<"\nEnter Xi+1 value:";
    cin>>xi2;
    fxi=f(xi);
    Exact=f(xi2);
    double E=0,h;
    h=xi2-xi;
    cout<<"\nExact value:"<<Exact;
    for(i=0;i<=n;i++)
    {
        if(i==0)
            E=fxi;
        else
        {
            E+=(fn(xi,i)*pow(h,i))/fact(i);
        }
    cout<<"\n"<<i<<"th Order Approximation:";
    cout<<"\nF(xi+1)="<<E;
    T=Exact-E;
    cout<<"\nTruncation Error:"<<T;
    }






    return 0;
}
