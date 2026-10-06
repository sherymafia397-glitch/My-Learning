#include<iostream>
using namespace std;
void myfunction(){
     int stackVar = 10;
     cout<<"Inside my function: stackVar = "<<stackVar<<endl;
}
int main(){
     cout<<"Calling  myfunction:   "<<endl;
     myfunction();
     cout<<"Back in main.  Function memory is cleaned automatically."<<endl;
     return 0;
}