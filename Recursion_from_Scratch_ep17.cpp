#include<bits/stdc++.h>

using namespace std;
void func(int n){//recursion internally implementation by stack;
   if(n==0) return;
   func(n-1); // int recurstion allways need address previous call
   cout<<n<<endl;

}
int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main(){
    func(5);

}

//number of fuction calls
//what is complexity of each function
