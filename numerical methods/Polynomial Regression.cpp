#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int i,j,k,n,p,s,c=0;
double sumxi,sumyi,xiyi,xi2yi,sumx2,sumx3,sumx4,avgx,avgy,Ao,A1,A2,Y,X,St,Sr,e,Sy,Syx,r;
double xi[10],yi[10];
double A[10][10],x[10],z[10],temp;

void input(void)
{
	cout<<"N: ";
    cin>>n;
	cout<<"\nX:\n";
    for(i=0;i<n;i++)
    {
        cin>>xi[i];
    }
	cout<<"\nY:\n";
    for(i=0;i<n;i++)
    {
        cin>>yi[i];
    }
}

void print(void)
{
    cout<<endl;
    cout<<"#### Resulting Matrix = "<<++c<<" ####\n\n";
    for(int l=0; l<3; l++)
    {
        for(int m=0; m<3+1; m++)
        {
            printf("%6.2lf  ",A[l][m]);
        }
        cout<<endl;
    }
    cout<<endl;
}

void Gauss_Elimination(void)
{
    double temp=0;

    for(i=0; i<3-1; i++)
    {
        for(j=i+1; j<3; j++)
        {

            temp=A[j][i]/A[i][i];
            for(k=i; k<=3; k++)
            {
                A[j][k] = A[j][k] - A[i][k] * temp;
            }
            print();
        }
    }
    x[3-1] = A[3-1][3] / A[3-1][3-1] ;
    for(i = 3 - 2 ; i >= 0 ; i--)
    {
        s = 0 ;
        for(j = i + 1 ; j < 3 ; j++)
        {
            s += (A[i][j] * x[j]) ;
            x[i] = (A[i][3] - s) / A[i][i] ;
        }
    }
    Ao=x[0];
    A1=x[1];
    A2=x[2];
    /*printf("\nThe result is :\n") ;
    for(i = 0 ; i < 3 ; i++)
        printf("\nA[%d] = %.2f", i, x[i]);*/
}

void CalC(void)
{
    sumxi=0;
    sumyi=0;
    sumx2=0;
    sumx3=0;
    sumx4=0;
    xiyi=0;
    xi2yi=0;


	for(i=0;i<n;i++)
    {
        sumxi=sumxi+xi[i];
        sumyi=sumyi+yi[i];

        sumx2=sumx2+pow(xi[i],2);
        sumx3=sumx3+pow(xi[i],3);
        sumx4=sumx4+pow(xi[i],4);

        xiyi=xiyi+xi[i]*yi[i];
        xi2yi=xi2yi+pow(xi[i],2)*yi[i];
    }

	avgx=sumxi/n;
    avgy=sumyi/n;

    A[0][0]=n;
    A[0][1]=sumxi;
    A[0][2]=sumx2;
    A[0][3]=sumyi;
    A[1][0]=sumxi;
    A[1][1]=sumx2;
    A[1][2]=sumx3;
    A[1][3]=xiyi;
    A[2][0]=sumx2;
    A[2][1]=sumx3;
    A[2][2]=sumx4;
    A[2][3]=xi2yi;
}

void error1(void)
{
    Sr=0;
	St=0;
    for(i=0; i<n; i++)
	{
		e = yi[i] - Ao - A1 * xi[i];
		Sr = Sr + pow(e,2);
		St = St + pow(yi[i]-avgy,2);
	}

	Syx = sqrt(Sr/(n-2));
	Sy = sqrt(St/n-1);
	r=(St-Sr)/St;

	cout<<"\nSy/x = "<<Syx<<endl;
	cout<<"Sy = "<<Sy<<endl;
	cout<<"St = "<<St<<endl;
	cout<<"Sr = "<<Sr<<endl;
	cout<<"r = "<<r<<endl;
	cout<<"e = "<<e<<endl;

	if(Syx<Sy) cout<<"\nThe regression line has improved.\n";
	else cout<<"\nNo improvement.\n";
	if(r==1) cout<<"Perfect fit. The line explain 100% of the variability of the data.\n";
	if(r==0) cout<<"No improvement.\n";
}
void error2(void)
{
    Sr=0;
	St=0;
    for(i=0; i<n; i++)
	{
		e = yi[i] - Ao - A1 * xi[i] - A2 * pow(xi[i],2);
		Sr = Sr + pow(e,2);
		St = St + pow(yi[i]-avgy,2);
	}

	Syx = sqrt(Sr/(n-3));
	Sy = sqrt(St/n-2);
	r=(St-Sr)/St;

	cout<<"\nSy/x = "<<Syx<<endl;
	cout<<"Sy = "<<Sy<<endl;
	cout<<"St = "<<St<<endl;
	cout<<"Sr = "<<Sr<<endl;
	cout<<"r = "<<r<<endl;
	cout<<"e= "<<e<<endl;

	if(Syx<Sy) cout<<"\nThe regression line has improved.\n";
	else cout<<"\nNo improvement.\n";
	if(r==1) cout<<"\nPerfect fit. The line explain 100% of the variability of the data.\n";
	if(r==0) cout<<"\nNo improvement.\n";
}
void First_Order_Regression(void)
{
    CalC();
    A1 = ((n*xiyi)-(sumxi*sumyi))/((n*sumx2)-(pow(sumxi,2)));
    Ao = avgy - A1 * avgx;
	printf("\n\nAo: %lf\nA1: %lf\n\nY =%lf + %lf X\n\n",Ao,A1,Ao,A1);
	error1();

}

void Second_Order_Regression(void)
{
    CalC();

    cout<<"\nsumxi="<<sumxi<<endl;
    cout<<"sumyi="<<sumyi<<endl;
    cout<<"sumx2="<<sumx2<<endl;
    cout<<"sumx3="<<sumx3<<endl;
    cout<<"sumx4="<<sumx4<<endl;
    cout<<"xiyi="<<xiyi<<endl;
    cout<<"xi2yi="<<xi2yi<<endl;

    print();
    Gauss_Elimination();
    printf("\n\nAo: %lf\nA1: %lf\nA2: %lf\n\ny =%lf + %lf x + %lf x^2 + e\n\n",Ao,A1,A2,Ao,A1,A2);
    error2();
}

int main()
{
    input();
    cout<<"\nFor 1st Order Regression Press: 1\nFor 2nd Order Regression Press: 2\n";
    int a;
    cin>>a;
    switch(a)
    {
        case 1: First_Order_Regression(); break;
        case 2: Second_Order_Regression(); break;
    }

    return 0;
}
