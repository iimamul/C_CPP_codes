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

int main()
{
    cout<<"\nEnter the highest order:";
    cin>>n;
    coef=new double[n+1];
    int i;
    double xl,xu,xrN,xrO=0,es,ea=100;
    for(i=0;i<=n;i++)
    {
        cout<<"\nX^"<<i<<":";
        cin>>coef[i];
    }

    cout<<"\nEnter the Upper limit:";
    cin>>xu;
    cout<<"\nEnter the Lower limit:";
    cin>>xl;
    cout<<"\nEnter the Stopping Criterion:";
    cin>>es;

    do{
        xrN=(xl+xu)/2;
        ea=fabs((xrN-xrO)/xrN)*100;
        cout<<"\nXr:"<<xrN<<"\tEa:"<<ea;
        xrO=xrN;
        if(f(xl)*f(xrN)>0)
            xl=xrN;
        else if(f(xl)*f(xrN)<0)
            xu=xrN;
        else
            break;
    }while(ea>es);
cout<<"\nThe final root estimation within the stopping criterion:"<<xrN;
    return 0;
}
