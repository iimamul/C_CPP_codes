#include<iostream>
using namespace std;

int main()
{
    double *x,*y,p,s=0,X;
    int i,n,j;
    cout<<"\nNumber of sample points";
    cin>>n;
    x=new double[n];
    y=new double[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nX:";cin>>x[i];
        cout<<"\nY:";cin>>y[i];
    }
    cout<<"\nThe required X value:"; cin>>X;

    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p*=(X-x[j])/(x[i]-x[j]);
            }
        }
        s+=y[i]*p;
    }
    cout<<"\nThe estimated Function value at point X:"<<s;
    return 0;
}
