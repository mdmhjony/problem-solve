#include<bits/stdc++.h>
//a^b calculating algorithms
// pow function can't use because of precision error double can't gave accurate value and pow function return double
using namespace std;
const int M = 1e9+7;

int binExpRecur(int a,int b){
//    if(b == 0)return 1;
//    long  res=binExpRecur(a,b/2);
//    if(b&1){
//        return a*res*res;
//    }else{
//
//        return res*res;
//
//    }

    // if modulo use so

    if(b == 0)return 1;
    int  res=binExpRecur(a,b/2);// here we can write long long so below can't need multiplt 1LL
    if(b&1){
        return (a*(res*1LL*res)%M)%M;
    }else{

        return (res*1LL*res)%M;

    }
}

int main(){
//    double d=1e24; // can't give accurate answer
//    //double d=1e18;
//    cout<<fixed<<setprecision(30)<<d<<endl;
//    //a^b%m
    //int a=2,b=13;
//    int ans=1;
//    for(int i=0;i<b;i++){
//          ans *=a;
//          ans %=M;
//
//    }
//
//    cout<<a<<endl;
//    // here time complexity log(n)
//

    // but here we can optimize by exponentiation divide and conqure

    /*
    even power
    2^16=2^8*2^8
    2^8=2^4*2^4
    2^4=2^2*2^2
    2^2=2^1*2^1
   // 2^1=2^1*2^0

   odd power

   convert it odd

   3^13

   3*3^12
   3^12=3^6*3*6
   3^6=3^3*3*3
   3^3=3*3*2
   3^2=3^1*3*1
   3^1=3*3*0


   recursion
   even b even
   f(a,b)
   f(a,b/2)*f(a,b/2)
   if odd
   f(a*f(a,b/2)*f(a,b/2))
   here we divide power 2  and then we combine them
   log(base2)  b =a^b

   here nor we find result only 4 step but normally we can find 16 step
   */



   int a=2,b=13;
   cout<<binExpRecur(a,b)<<endl;





}
