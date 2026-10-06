#include<iostream>
using namespace std;
int* createHeapmemory(){
    int* p= new int;
    *p=500;
    cout<<"inside createHeapmemory: Heap value set to"<<*p<<endl;
    return p;
}
int main(){
     int *mainptr = createHeapmemory();
     cout<<"Inside main: Accessing heap value = "<<*mainptr<<endl;
     delete mainptr;
     mainptr=nullptr;
     cout<<"Heap memory cleared manually."<<endl;
     return 0;
}