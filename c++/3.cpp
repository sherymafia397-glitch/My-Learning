#include<iostream>
using namespace std;

int main(){
     int arr[5]={20,25,30,35,40};
     int sum=0;
     for(int i=0;i<=5;i++){
     sum = sum + arr[i];
     }
     cout<<"The total sum of array element:\n"<<sum<<endl;
     return 0;
}