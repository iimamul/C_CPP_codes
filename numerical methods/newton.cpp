
#include<math.h>
#include<iostream>
using namespace std;

double *coef;
int n;
double f(double x)
{
    double fx=0;int i;
    for(i=0;i<=n;i++)
    {
        fx+=coef[i]*pow(x,i);
    }
    return fx;
}

double f1(double x)
{
    double fx=0;int i;
    for(i=1;i<=n;i++)
    {
        fx+=coef[i]*pow(x,i-1)*i;
    }
    return fx;
}



int main()
{
    cout<<"\nEnter the highest order:";
    cin>>n;
    coef=new double[n+1];
    int i;
    double xi,xi2,es,ea=100;
    for(i=0;i<=n;i++)
    {
        cout<<"\nX^"<<i<<":";
        cin>>coef[i];
    }

    cout<<"\nEnter the initial value:";
    cin>>xi;
    cout<<"\nEnter the Stopping Criterion:";
    cin>>es;

    do{
        xi2=xi-f(xi)/f1(xi);
        ea=fabs((xi2-xi)/xi2)*100;
        cout<<"\nXi+1:"<<xi2<<"\tEa:"<<ea;
        xi=xi2;
        }while(ea>es);
cout<<"\nThe final rooet estimation within the stopping criterion:"<<xi2;
    return 0;
}
