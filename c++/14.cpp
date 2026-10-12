#include<iostream>
using namespace std;
int binarysearchIterative(int arr[],int size,int x){
    int l=0;
    int r=size-1;
    while(l<=r){
        int mid=l+(r-1)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[mid]<x)
        l=mid+1;
        else
        r=mid-l;
    }
    return-1;
}
int main(){
     int arr[]={10,20,30,40,50};
     int size=5;
     int x=40;
     int result=binarysearchIterative(arr,size,x);
     cout<<"element found at index\n"<<result<<"\n";
     return 0;
}