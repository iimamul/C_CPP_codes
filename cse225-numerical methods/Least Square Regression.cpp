#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int i,n,j;
double sumxi,sumyi,xiyi,sumx2,avgx,avgy,Ao,A1,Y,X,St,Sr,e,Sy,Syx,r;
double xi[10],yi[10];

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

void leastSquare(void)
{
    sumxi=0;
    sumyi=0;
    xiyi=0;
    sumx2=0;
    Sr=0;
	St=0;

	for(i=0;i<n;i++)
    {
        sumxi=sumxi+xi[i];
        sumyi=sumyi+yi[i];
        xiyi=xiyi+xi[i]*yi[i];
        sumx2=sumx2+pow(xi[i],2);
    }

	avgx=sumxi/n;
    avgy=sumyi/n;
    cout<<"\nsumx2= "<<sumx2<<"\n\n"<<"sumxi="<<sumxi<<"\n\n"<<"sumyi="<<sumyi<<"\n\n"<<"xiyi="<<xiyi<<"\n\n"<<"avgx="<<avgx<<"\n\n"<<"avgy="<<avgy<<endl;
    A1 = ((n*xiyi)-(sumxi*sumyi))/((n*sumx2)-(pow(sumxi,2)));
    Ao = avgy - A1 * avgx;
	printf("\nY= %f + %f X\n\n",Ao,A1);


	for(i=0; i<n; i++)
	{
		e = yi[i] - Ao - A1 * xi[i];
		Sr = Sr + pow(e,2);
		St = St + pow(yi[i]-avgy,2);
	}

	Syx = sqrt(Sr/(n-2));
	Sy = sqrt(St/n-1);
	r=(St-Sr)/St;

	cout<<"\nSy/x= "<<Syx<<endl;
	cout<<"\nSy= "<<Sy<<endl;
	cout<<"\nSt= "<<St<<endl;
	cout<<"\nSr= "<<Sr<<endl;
	cout<<"\nr= "<<r<<endl;

	if(Syx < Sy) cout<<"\nThe regression line has improved.\n";
	else cout<<"No Improvement.\n";
	if(r==1) cout<<"Perfect fit.The line explain 100% of the variability of the data.\n";
	if(r==0) cout<<"No Improvement.\n";
}

int main()
{
    input();
    leastSquare();
    return 0;
}
