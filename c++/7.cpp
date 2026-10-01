#include<iostream>
using namespace std;

int main(){
     int arr[6]={10,20,30,40,50,60};
     int size=6;
     int delindex=2;
     cout<<"original Array:";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" \n";
     }
     cout<<endl;
     if (delindex < 0 || delindex>=size){
        cout<<"invaild index! Deletion not possible."<<endl;
     }else{
        for (int i = delindex; i<size-1; i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"Array after deletion: \n";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"  \n";
        }
     }
     return 0;
}