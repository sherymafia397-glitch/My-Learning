#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i] == x){
              return i;
        }
    }
    return -1;
}
int main(){
     int arr[]={50,10,40,20,30};
     int size=5;
     int x=20;
     int result=linearsearch(arr,size,x);
     if(result!=-1){
             cout<<"Element found at index: \n"<<result<<"\n";
     }
     else{
        cout<<"element not found\n";
     }
     return 0;
}