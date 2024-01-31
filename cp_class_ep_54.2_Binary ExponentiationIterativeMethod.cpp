#include<bits/stdc++.h>
// iteration is fast then recursive code
/*
here a=3,b=13, so calculate 3^13=3^1101 this proceses 3^1*3^4*3^8
*/
using namespace std;

const int M=1e9+7;

int binExIter(int a,int b){
//    int ans=1;
//    while(b){
//        if(b&1)
//        {
//            ans *=a;
//
//        }
//        b >>=1;
//        a *=a;
//
//    }
//    return ans;


// modulo


    int ans=1;
    while(b){
        if(b&1)
        {
            ans =(ans*1LL*a)%M;

        }
        b >>=1;
        a =(a*1LL*a)%M;

    }
    return ans;





}
int main(){
    int a=2,b=13;

    cout<<binExIter(a,b)<<endl;
}
