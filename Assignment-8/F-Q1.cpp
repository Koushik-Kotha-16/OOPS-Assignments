#include<iostream>
using namespace std;

template <class T>
void swap(T* a,T* b){
  T temp=*a;
  *a=*b;
  *b=temp;
}
int main() {
    int a,b;
    cout<<"Enter the 2 numnbers"<<endl;
    cin>>a>>b;
    swap(&a,&b)
    cout<<"Two Numbers after Swapping are a="<<a<<" and b="<<b<<endl;
    return 0;
}
