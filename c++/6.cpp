#include<iostream>
using namespace std;

int main(){
     int arr[5]={11,22,33,44,55};
     int size=5;
     int target=44;
     int foundindex = -1;
     for (int i=0;i<size;i++){
        if(arr[i]==target){
            foundindex=i;
            break;
        }
     }
     if(foundindex !=-1){
        cout<<"target\n"<<target<<"\nindex number are found:\n"<<foundindex<<endl;
     }else{
        cout<<"target\n"<<target<<"\nindex number are not found:\n"<<foundindex<<endl;
     }
     return 0;
}