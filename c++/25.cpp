#include<iostream>
using namespace std;
void printArray(int* A,int n){
         for(int i=0;i<n;i++){
            cout<<"  "<<A[i];
         }
}
void BubbleSort(int* A,int n){
    int temp;
    int isSorted=0;
      for(int i=0;i<n-1;i++) // For number of pass
      {
        cout<<"\nWorking on pass number%d    :"<<i+1<<"\n";
        isSorted=1;
        for(int j=0;j<n-1-i;j++) // For comparison in each pass
        {
             // For sorted array
           if(A[j]>A[j+1]){
             temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
             isSorted=0;
           }
        }
        if(isSorted){
            return;
        }
      }
}
int main(){
     //int A[]={12,54,65,7,23,9};
     int A[]={12,1,687,56,90,54,65,7,23,10,9};
    //  int A[]={7,9,12,23,54,65};
     int n=11;
     printArray(A, n); //before sorting
     BubbleSort(A, n);  //Function to sort the array
     printArray(A, n);  //After sorting
     return 0;
}