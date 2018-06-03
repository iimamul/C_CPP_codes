#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a,b;
    double *x,*y,*s,I=0,h;
    cout<<"\nNumber of sample points:"; cin>>n;
    x=new double[n];
    y=new double[n];
    s=new double[n-1];
    for(i=0;i<n;i++)
    {
     cout<<"\nX:";   cin>>x[i];
     cout<<"\nY:";   cin>>y[i];
    }
    for(i=0;i<(n-1);i++)
    {
        s[i]=x[i+1]-x[i];
    }
    i=0;
    do{
    a=i;
    j=0;
    if(n==2)
    {
         j++;i++;
    }
    else
    {
        if(s[i+1]==s[i])
        {
            i++;j++;
        }
    }

    b=i;
    if(j==1)
    {
        I+=((x[b]-x[a])/2)*(y[b]+y[a]);
    }
    else if(j==2)
    {
        h=(x[b]-x[a])/2;
        I+=(h/3)*(y[a]+4*y[a+1]+y[b]);
    }

    }while(i<(n-1));

cout<<"\nThe result:"<<I;

}
