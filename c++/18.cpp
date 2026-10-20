#include<iostream>
using namespace std;
void printArray(int arr[],int size){
     cout<<"printing the array\n";
     for (int i = 0; i < size; i++)
     {
        cout<<"The array"<<arr[i]<<endl;
     }
     cout<<"printing the array are DONE\n";
}
int main(){
     int number[15];
     cout<<"value at index "<<number[14]<<"\n";
     cout<<endl<<"Eveeryuthing is fine\n";
     int second[3]={6,9,5};
     cout<<"value at index: 2:\n"<<second[2]<<endl;
     int third[15]={7,9};
     int n=15;
     printArray(third,15);
     int thirdsize=sizeof(third)/sizeof(int);
      cout<<"size of third is\n"<<thirdsize<<endl;
    //  cout<<"printing the array\n";
    //  for (int i = 0; i < n; i++)
    //  {
    //     cout<<"The array"<<third[i]<<endl;
    //  }
     int fourth[10]={1};
     n=10;
      //printArray(fourth,10);
     int fifth[10]={1,1,1,1,1,1,1,1,1,1};
     n=10;
      //printArray(fifth,10);
      int fifthsize=sizeof(fifth)/sizeof(int);
      cout<<"size of fifth is\n"<<fifthsize<<endl;
      char ch[5]={'a','c','f','j','r'};
    //   cout<<"index value of ch"<<ch[3]<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"print the array ch:\n"<<ch[i]<<endl;
    }
    cout<<"print the array are done\n";
     return 0;
}