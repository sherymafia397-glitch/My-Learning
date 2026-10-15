#include<iostream>
using namespace std;

int main(){
     int a,b;
     cout<<"Enter the value of a:"<<"\n";
     cin>>a;
     cout<<"Enter the value of b:"<<"\n";
     cin>>b;
     char op;
     cout<<"Enter the operation you want to perform:"<<op<<"\n";
     cin>>op;
     switch(op){
        case '+':
        //{cout<<a+b<<"\n";}
        cout<<a+b<<"\n";
        break;
        case '-':
        cout<<a-b<<"\n";
         break;
        case '*':
        cout<<a*b<<"\n";
         break;
        case '/':
        cout<<a/b<<"\n";
         break;
        case '%':
        cout<<a%b<<"\n";
         break;
        default:
        cout<<"please enter a valid operation:\n";
     }
     return 0;
}