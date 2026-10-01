#include<iostream>
using namespace std;

int main(){
     int arr[100];
     int size=100;
     for(int i=size-1;i>=0;i--){
        cin>>arr[i];
        cout<<"Total element:\n"<<arr[i]<<endl;
     }
     cout<<"1:\n";
     return 0;
}