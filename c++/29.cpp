#include<iostream>
using namespace std;
void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void Bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int BinarySearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;        
        }
    }
    return -1;
}
int main(){
         int arr[10]={45,12,78,23,56,9,34,89,17,65};
         int size=10;
         cout<<"Original Array: \n";
         displayArray(arr,size);
         Bubblesort(arr,size);
         cout<<"\nSorted Array\n";
         displayArray(arr,size);
         int key1=34;
         int result1=BinarySearch(arr,size,key1);
         if(result1 !=-1){
              cout<<"\nElement "<<key1<<"Found!"<<endl;
              cout<<"Index:  "<<result1<<endl;
              cout<<"position:  "<<result1+1<<endl;
         }else{
            cout<<"\nElement  "<<key1<<"Not Found!"<<endl;
         }
         int key2=100;
         int result2=BinarySearch(arr,size,key2);
         if(result2!=-1){
            cout<<"\nElement "<<key2<<"Found!"<<endl;
            cout<<"Index: "<<result2<<endl;
         }else{
            cout<<"\nElement  "<<key2<<"Not Found!"<<endl;
         }
     return 0;
}