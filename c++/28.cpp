#include<iostream>
using namespace std;
void Insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int Key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>Key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=Key;
    }
}
void PrintArray(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<"   ";
     }
     cout<<endl;
}
int main(){
     int arr[]={12,11,13,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"Original Array\n";
     PrintArray(arr,n);
     Insertionsort(arr,n);
     cout<<"Sorted Array\n";
     PrintArray(arr,n);
     return 0;
}