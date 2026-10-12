#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int x){
    if(r>=l){
        int mid=(r+l)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[mid]>x)
        return binarysearch(arr,mid-l,l,x);
        return binarysearch(arr,mid+1,r,x);
    }
    return -1;
}
int main(){
     int arr[]={10,20,30,40,50};
     int result=binarysearch(arr,0,4,30);
     cout<<"index=  "<<result;
     return 0;
}