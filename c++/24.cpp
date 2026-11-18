#include<iostream>
using namespace std;
void printArray(int* A,int n){
         for(int i=0;i<n;i++){
            cout<<"  "<<A[i]<<endl;
         }
}
void BubbleSort(int* A,int n){
    int temp;
      for(int i=0;i<n-1;i++) // For number of pass
      {
        for(int j=0;j<n-1-i;j++) // For comparison in each pass
        {
             // For sorted array
           if(A[j]>A[j+1]){
             temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
           }
        }
      }
}
int main(){
     int A[]={12,54,65,7,23,9};
     int n=6;
     printArray(A, n); //before sorting
     BubbleSort(A, n);  //Function to sort the array
     printArray(A, n);  //After sorting
     return 0;
}