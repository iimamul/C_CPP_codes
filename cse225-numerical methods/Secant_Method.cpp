#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;

double cof[100],D_cof[100],xi,xi_1,res,fxi,fxi1,fxi_1,D_fxi,Es,Ea=100,curr,prev=0;
int n,i,j,k,l,m,c=0;

//#### Function for Polynomial equation ####//
double func(double x)
{
    double  fx=0;
    for(i=0; i<n; i++)
    {
        fx = fx + cof[i] * pow(x,i);
    }
    return fx;
}

//####### SECANT MATHOD FUNCTION ########//
//xi_1 = Xi-1
//Xi = xi
//res = Xi+1,
//fxi = Function of Xi,
//fxi-1 = Function of xi_1,
//fxi1 = Function of res
void Secant_Method(void)
{
    printf("Iteration No.    Xi-1        Xi         Xi+1      f(Xi+1)      Ea\n");
    while(1)
    {
        if(Ea<Es) break;
        else
        {
            fxi = func(xi);
            fxi_1 = func(xi_1);

            curr = xi;

            res = xi - (fxi * (xi_1 - xi)) / (fxi_1 - fxi); // Equeation Of secant Method

            fxi1= func(res);

            Ea = (abs(curr - prev)/curr)*100; // Equation of Approximation error

            printf("%5d %17lf %10lf %10lf %10lf %10lf\n",c,xi_1,xi,res,fxi1,Ea);

            prev = curr;
            xi_1 = xi;
            xi = res;
            c++;
        }
    }

}

//###########Input for a Plynomial############//
void input(void)
{
	cout<<"Degree: ";
    cin>>n;
    cout<<"Coefficients: ";
    for(i=0; i<n; i++)
    {
        cin>>cof[i];
    }
    cout<<"Xi-1: ";
    cin>>xi_1;
    cout<<"Xi: ";
    cin>>xi;
    cout<<"Es: ";
    cin>>Es;
}

int main()
{

	input();

    Secant_Method();

    return 0;
}
