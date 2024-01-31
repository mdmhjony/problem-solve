#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define push_back pb
const int M=1e9+10;
/*
finding divisor-Brute Force
sqrt(N) approach
count and sum of divisors
optimise formula for count and sum

*/
int main(){

    //brute force solution
    // time o(n)
//     int n;
//     cin>>n;
//     int ct=0,sum=0;
//     for(int i=1;i<=n;i++){
//        if(n%i ==0){
//            cout<<i<<endl;
//            ct++;
//            sum +=i;
//
//        }
//     }
//     cout<<"count:"<<ct<<" "<<"sum:"<<sum<<endl;


   // time o(sqrt(n))

// geometric progression rules and
//(1+p1^n1+p1^n1+p1^n1......+p1^n1)
//(1+p2^n2+p2^n2+p2^n2......+p2^n2)
//(1+p3^n3+p3^n3+p3^n3......+p3^n3)
//p1^(n1+1) -1 /(p2-1) (p2^(n2+1) -1 / (p2-1))(p3^(n3+1) -1 /(p3-1))
// no of divisor (n1+1)(n2+1)(n3+1) n is no of prime factor power this all multiply equal to acutal no x of any no

     int n;
     cin>>n;
     int ct=0,sum=0;
     //for(int i=1;i<=sqrt(n);i++)
     for(int i=1;i*i<=n;i++)
        {
        if(n%i ==0){
            cout<<i<<" "<<n/i<<endl;
            ct +=1;
            sum +=i;
            if((n/i) !=i){
            ct +=1;
            sum +=n/i;
            }

        }
     }
     cout<<"count:"<<ct<<" "<<"sum:"<<sum<<endl;


}
