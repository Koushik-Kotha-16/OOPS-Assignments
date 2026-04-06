#include<iostream>
using namespace std;

void swap(int* a,int* b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main() {
    int a,b;
    cout<<"Enter the 2 numnbers"<<endl;
    cin>>a>>b;
    swap(&a,&b)
    cout<<"Two Numbers after Swapping are"<<a<<" "<<b<<endl;
    return 0;
}
