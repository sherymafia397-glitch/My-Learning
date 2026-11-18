#include<iostream>
using namespace std;
void update(int arr[],int n){
   cout<<"inside the function\n";
   //updating the array
    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<"  "<<endl;
     }
     cout<<endl;


   cout<<"going back to the function\n";
}
int main(){
     int arr[3]={1,2,3};
     update(arr,3);
     for(int i=0;i<3;i++){
        cout<<arr[i]<<"  "<<endl;
     }
     cout<<endl;
     return 0;
}