#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter first number : ";
    cin>>n;
    cout<<"Enter second number";
    cin>>m;
    int a=n,b=m,c;
    cout<<a<<" "<<b<<endl;
    //Here we swap the numbers !!
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b<<" ";

    return 0;
}