#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
double xl,xu,fx,d,x1,x2,xopt,fx1,fx2,Ea=100,n,cof[100],Es,R=0.618; int i,c=0;

double function(double x)
{
    double fx=0;
    for(i=0; i<n; i++)
    {
        fx = fx + cof[i] * pow(x,i);
    }
    return fx;
}

void GoldenSection(void)
{
    printf("c       x1              x2            fx1             fx2              Ea\n");
    while(1)
    {
        if(Ea<Es) break;
        d = ((sqrt(5)-1)/2)*(xu-xl);
        //cout<<d<<endl;
        x1=xl+d;
        //cout<<x1<<endl;
        x2=xu-d;
        fx1=function(x1);
        //cout<<fx1<<endl;
        fx2=function(x2);
        //cout<<fx2<<endl;
        if (fx1>fx2) xopt=x1;
        if (fx2>fx1) xopt=x2;

        Ea=(1-R)*((xu-xl)/xopt);
        //cout<<c<<" "<<x1<<" "<<x2<<" "<<fx1<<" "<<fx2<<" "<<Ea<<endl;
        printf("%d %10lf %15lf %15lf %15lf %15lf\n",c,x1,x2,fx1,fx2,Ea);
        if (fx1>fx2) xl=x2;
        if (fx2>fx1) xu=x1;
        c++;
    }
}

void input(void)
{
    cout<<"n: ";
    cin>>n;
    cout<<"COEFFICIENTS: ";
    for(i=0; i<n; i++)
    {
        cin>>cof[i];
    }
    cout<<"xl: ";
    cin>>xl;
    cout<<"xu: ";
    cin>>xu;
    cout<<"Es: ";
    cin>>Es;
}

int main()
{
    input();
    GoldenSection();
    return 0;
}
