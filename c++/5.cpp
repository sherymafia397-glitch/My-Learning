#include<iostream>
using namespace std;

int main(){
     int arr[6]={11,22,33,44,55,66};
     for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            cout<<" \n Even numbers:   \n"<<arr[i]<<endl;
        }
        else{
            cout<<" odd:\n"<<arr[i];
        }
     }
     return 0;
}