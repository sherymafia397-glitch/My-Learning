#include<iostream>
using namespace std;
void Selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}
int main(){
     int arr[]={29,10,14,37,13};
     int n= sizeof(arr)/sizeof(arr[0]);
     cout<<"Original array\n";
     PrintArray(arr,n);
     Selectionsort(arr,n);
     cout<<"Selection Sorted Array\n";
     PrintArray(arr,n);
     return 0;
}