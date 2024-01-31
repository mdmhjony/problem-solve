#include<bits/stdc++.h>
 using namespace std;
 //gcd
// 4 12
//4--2^2*3^0
//12--2^2*3*1
// here minimum power extract 2^2*3*0

//lcm
// 4 12
//4--2^2*3^0
//12--2^2*3*1
// here maximum power extract 2^2*3*1

// (a*b)/gcd=lcm



// long division rule or euclid algorithms
// we we divided until we find reminder zero if not find reminder zero
//we riminder and divisor swap then again divide and find reminder zero
//this process going on until we find reminder zero.
// minimum fraction find
// 12,16 minnimum fraction 12/gcd(a,b) /  b/gcd(a,b)

int gcd(int a,int b){
    //if(a%b==0)return b;
    // here divisor and dividend handle
    if(b==0)return a;
    return gcd(b,a%b);

}


 int main(){

     cout<<gcd(12,4)<<endl;

     cout<<__gcd(12,18)<<endl;


// time long(n)
 }

