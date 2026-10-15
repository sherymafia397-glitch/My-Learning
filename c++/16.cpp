#include<iostream>
using namespace std;

int main(){
     int num=2;
     char ch='a';
     cout<<endl;
     switch (num)
     {
     case 'a':
        cout<<"in 1st case : a\n";
        break;
     case 2:
        switch(ch){
            case 'a':
            cout<<"The value of ch is a:\n";
        }
        break;
     default:
        cout<<"default\n";
        break;
     }
     return 0;
}