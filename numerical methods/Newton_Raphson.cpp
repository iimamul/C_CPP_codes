#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;

double cof[100],D_cof[100],xi,res,fxi,fxi_1,D_fxi,Es,Ea=100,curr,prev=0;
int n,i,j,k,l,m,c=0;

//-----------Function for Polynomial equation-----------//
double func(double x)
{
    double  fx=0;
    for(i=0; i<n; i++)
    {
        fx = fx + cof[i] * pow(x,i);
    }
    return fx;
}
//----------Function for Differentiation the polynomial----------//
double D_func(double x)
{
    //After Differentiating the coeffecient will be D_cof[]
    for(i=0; i<n; i++)
    {
        D_cof[i]=cof[i]*i;
    }

    double  fx=0;
    for(i=1; i<n; i++)
    {
        fx = fx + D_cof[i] * pow(x,i-1);
    }
    return fx;
}

//-------NEWTIN RAPHSON MATHOD FUNCTION-----------//
//res = Xi+1,
//fxi = Function of Xi,
//D_func = A function for  Differentiation  the polynomial function,
//D_fxi = After differentiation the value of function of xi,

void Newton_Raphson(void)
{
    printf("Iteration no.        xi            f(xi)            Ea\n");
    while(1)
    {
        if(Ea<Es) break;
        else
        {
            fxi = func(xi);
            D_fxi = D_func(xi);
            curr = xi;
            res = xi - (fxi/D_fxi); //Newton Raphson Mathod's Equation.
            Ea = (abs(curr - prev)/curr)*100; //Equation of Approximation Error
            printf("%5d %20lf %15lf %15lf\n",c,xi,fxi,Ea);
            prev = curr;
            xi = res;
            c++;
        }
    }
}

//---------------INPUT FUNTION FOR A POLYNOMIAL---------------//
void input(void)
{
	cout<<"Degree: ";
    cin>>n;

    cout<<"Coefficients: ";
    for(i=0; i<n; i++)
    {
        cin>>cof[i];
    }
    cout<<"Xi: ";
    cin>>xi;
    cout<<"Es: ";
    cin>>Es;
}

int main()
{

	input();
    Newton_Raphson();

    return 0;
}
