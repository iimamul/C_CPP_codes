#include<iostream>
using namespace std;
main(){
    int value,i;
    cout<<"Higest Value:"<<endl;
    cin>>value;
    int temp=value;
    double a[value+1];
    for(i=0;i<=value;i++){
        cout<<"Input index"<<i+1<<":"<<endl;
        cin>>a[i];
    }
    cout<<"Equation Is:"<<endl;
    for(i=0;i<=value;i++){
        if(a[i]>0&&a[i]!=0){
            cout<<"+";
        }
        if(a[i]!=0){
            cout<<a[i]<<"x^"<<temp;
        }
        temp--;
    }
}
