#include<iostream>
using namespace std;

int main(){
     int arr[5]={10,20,30,40,50};
     int size=5;
     cout<<"Reverse Traversal:\n";
     for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<"  ";
     }
     return 0;
}