#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter number 1 :";
    cin>>a;
    cout<<"Enter number 2 :";
    cin>>b;
    int choice;
    cout<<"Enter your choice = ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        c=a+b;
        cout<<"The sum is = "<<c;
        break;
    case 2:
        c=a-b;
        cout<<"The subtraction is = "<<c;
        break;
    case 3:
        c=a*b;
        cout<<"The multiplication is = "<<c;
        break;
    case 4:
        c=a/b;
        cout<<"The division is = "<<c;
        break;
    
    default:
        cout<<"Wrong input";
        break;
    }

    return 0;
}