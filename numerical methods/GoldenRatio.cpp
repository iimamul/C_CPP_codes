#include<math.h>
#include<iostream>
using namespace std;

double *coef;
int n;
double f(double x)
{
    double fx=0;
    int i;
    for(i=0; i<=n; i++)
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
    double xl,xu,d,xrO=0,es,ea=100,fx1,fx2,x1,x2,xopt;
    for(i=0; i<=n; i++)
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

    int choice;
    cout<<"Enter 1 for minimum and 2 for maximum problem: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    {
        do
        {
            d=0.618*(xu-xl);
            x1=xl+d;
            x2=xu-d;
            fx1=f(x1);
            fx2=f(x2);
            double t=xu-xl;

            if(f(x2)<f(x1))
            {
                xu=x1;
                xopt=x2;
            }

            else if(f(xl)<f(x2))
            {
                xl=x2;
                xopt=x1;
            }
            else
                break;

            ea=((1-0.618)*((t)/xopt))*100;
            cout<<"f(x1): "<<fx1<<"\nf(x2): "<<fx2<<"\nXopt:"<<xopt<<"\tEa:"<<ea;
        }
        while(ea>es);
        cout<<"\nFinal error:"<<ea;
        break;
    }
    case 2:
    {
        do
        {
            d=0.618*(xu-xl);
            x1=xl+d;
            x2=xu-d;
            fx1=f(x1);
            fx2=f(x2);
            double t=xu-xl;

            if(f(x2)>f(x1))
            {
                xu=x1;
                xopt=x2;
            }

            else if(f(xl)>f(x2))
            {
                xl=x2;
                xopt=x1;
            }
            else
                break;

            ea=((1-0.618)*((t)/xopt))*100;
            cout<<"f(x1): "<<fx1<<"\nf(x2): "<<fx2<<"\nXopt:"<<xopt<<"\tEa:"<<ea;
        }
        while(ea>es);
        cout<<"\nFinal error:"<<ea;
        break;
    }


    }


    return 0;
}
