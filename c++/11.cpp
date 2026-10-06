#include<iostream>
using namespace std;
void demonstrateMemory(){
    int stackNum=25;
    int* Heapptr= new int;
    *Heapptr=76;
    cout<<"---STACK MEMORY---"<<endl;
    cout<<"Stack Variable Value   :"<<stackNum<<endl;
    cout<<"Stack Memory address   :"<<&stackNum<<endl;
    cout<<"\n---Heap Memory---"<<endl;
    cout<<"Heap Variable Value    :"<<*Heapptr<<endl;
    cout<<"pointer Address (Stack):"<<&Heapptr<<endl;
    cout<<"Target Address (Heap)  :"<<Heapptr<<endl;
    delete Heapptr;
    Heapptr=nullptr;
    cout<<"\n[success] Heap memory freed manually."<<endl;
}
int main(){
     cout<<"===Memory Management program started==="<<endl;
     demonstrateMemory();
     cout<<"===program Finished==="<<endl;
     return 0;
}