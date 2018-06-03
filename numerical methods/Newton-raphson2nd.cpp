#include <iostream>
#include <cmath>
using namespace std;
double *coef;
int n;

void input(){
    cout<<"Input Degree:"<<endl;
    cin>>n;
    coef = new double[n+1];
    for(int i=0;i<=n;i++){
        cout<<"x^"<<i<<":";
        cin>>coef[i];
    }
}

double fx(double x){
    double ans=0;
    for(int i=0;i<=n;i++){
        ans+=coef[i]*pow(x,i);
    }
    return ans;
}

double error(double xr,double xl){
    double pError=0;
    pError=((xr-xl)/xr)*100;
    if(pError<0){
        return pError*(-1);
    } else {
        return pError;
    }

}
//THIS FUNCTION HELP FOR DIFFERENCIATION:
int difHelper(int power,int order){
    if(power==0) {
        return 0;
    } else {
        return power*(power-(order-1));
    }

}
//MAIN FUNCTION FOR DIFFERENCIATION:
 double dfx(double xi){
     int order=1;
    double ans=0;
    int i;
    for(i=order;i<=n;i++){
        int value=i-order;
        ans+=coef[i]*(difHelper(i,order))*pow(xi,value);
    }
    return ans;
 }


main() {
	double xi,xim1;
	int i=1;
	double aerror=0;
	input();
	cout<<"Please input xi:";
	cin>>xi;
	cout<<"please input xi-1:";
	cin>>xim1;
	do{
		 aerror=0;
			double oldxi=0;
			oldxi=xi;
			xi=xi-((fx(xi)*(xim1-xi))/(fx(xim1)-fx(xi)));
			aerror=error(xi,oldxi);
			xim1=oldxi;
		cout<<i++<<" order: approximate person relative error:"<<aerror<<endl;
	}while(aerror>10);
}
