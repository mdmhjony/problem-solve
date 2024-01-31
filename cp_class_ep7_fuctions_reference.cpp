#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;// constraint give so we take big size of constraints means we use this +10.
int c[N][N];
void printHello(){
    cout<<"hello"<<endl;

}
// competetive pograming we always array globaly decleare
int sum(int a,int b){
    int result =a+b;
    return result;
}

int increment(int n){
    n++;
    return n;
}
void increment1(int n){
    n++;
}
void increment2(int &n, int n1){// &n pass by reference not exists in c this refrences
    n++;
    n1++;
}

void fun(int a[10]){//  array datatype always pass by reference
   a[5]++;
}
void myfun(){//  array datatype always pass by reference
   c[5][20]++;
}
void fun2(int a[][20]){ // always after first index in array all index  size must be define
                        // but we cannot not local under size in main function size in function so we should use gloablly declare a size of array .
   a[5][20]++;
}



int main(){
//   printHello();
//   cout<<sum(2,3);
//
//   return 0; // code finished hear



   // refrerence use in alternative pointer.

//    int a=3;
//    int b=5;
//   cout<<a<<endl;
//   //cout<< increment(a)<<endl;
//   increment1(a);// pass by value
//   cout<< a<<endl;int a=3;
//   cout<<a<<endl;
//   //cout<< increment(a)<<endl;
//   increment2(a,b);// pass by refrence and value
//   cout<< a<<" "<<b<<endl;
//   increment2(a,b);// pass by refrence and value
//   cout<< a<<" "<<b<<endl;

 // such a inbuild function max,min,swap in c++
 // but array always pass by refrence in c++

//   int a[10][];
//   a[5]=7;
//   cout<<a[5]<<endl;
//   fun(a);
//   cout<<a[5]<<endl;
//

//   int a[10][20];
//   a[5][20]=7;
//   cout<<a[5][20]<<endl;
//   fun2(a);
//   cout<<a[5][20]<<endl;


//   c[5][20]=7;
//   cout<<c[5][20]<<endl;
//   myfun();
//   cout<<c[5][20]<<endl;



}
