#include<bits/stdc++.h>
using namespace std;

int main(){
 // bits address normally hexadecimal. 0*1dc type


 int x=4;

 int *p;
 p=&x;
// cout<<&x<<endl;// here we address of  x is would be many bits but x store first bits address.
// cout<<&x+1<<endl;// add datatype size bits, means next blocks first bit address
// cout<<*p<<endl;
// cout<<*p+1<<endl;
// cout<<*p<<endl;

 // array address alocate continuous bits  if int so became 10,14,16


// array int a[10] , a in myself pointer
// int a[10];
// a[0]=99;a
// a[1]=29;
// a[2]=9;
// cout<<a<<endl;// print address first bits a==&a[0]
// cout<<a+1<<endl;
// cout<<*a<<endl;
// cout<< *(a+1)<<endl;

// double pointer
 cout<<&x<<endl;
 int **pp=&p;
 cout<<&p<<endl;
 cout<<pp<<endl;
 cout<<*pp<<endl;


}
