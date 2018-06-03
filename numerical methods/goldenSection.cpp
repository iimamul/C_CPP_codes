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
    int i,op;
    double xl,xu,xopt,d,R=0.618,ea=100,x1,x2,diff,es;
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
    cout<<"\nFor Maximum Press 1, For Minimum Press 2";
    cin>>op;
    if(op==1)
    {
        do{
        diff=xu-xl;
        d=R*diff;
        x1=xl+d;
        x2=xu-d;
        if(f(x1)>f(x2))
        {
            xopt=x1;xl=x2;
        }
        else if(f(x2)>f(x1))
        {
            xopt=x2;xu=x1;
        }
        ea=(1-R)*fabs(diff/xopt)*100;
        cout<<"\nXopt:"<<xopt<<"\tEa:"<<ea;
        }while(ea>es);
    }
    else if(op==2)
    {
        do{
        diff=xu-xl;
        d=R*diff;
        x1=xl+d;
        x2=xu-d;
        if(f(x1)<f(x2))
        {
            xopt=x1;xl=x2;
        }
        else if(f(x2)<f(x1))
        {
            xopt=x2;xu=x1;
        }
        ea=(1-R)*fabs(diff/xopt)*100;
        cout<<"\nXopt:"<<xopt<<"\tEa:"<<ea;
        }while(ea>es);
    }
cout<<"\nThe final optimum value within the stopping criterion:"<<xopt;
    return 0;
}
