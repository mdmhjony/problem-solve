// problem-->https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/

#include<bits/stdc++.h>

using namespace std;


const int N=2e5+10;

//vector<bool> isPrime(N,1);//assume all no are prime
int hsh[N];
int multiple_ct[N];
int main (){
//    isPrime[0]=isPrime[1]=false;
//    for(int i=2;i<N;i++){
//        if(isPrime[i] == true){
//            for(int j=2*i;j<N;j+=i){
//                isPrime[j] = false;
//            }
//        }
//
//
//    }

//    for(int i=1;i<100;i++){
//        cout<<i<<"is prime: "<<isPrime[i]<<endl;
//    }
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hsh[x]++;
      }

      for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            multiple_ct[i] +=hsh[j];
        }
      }

      int q;
      cin>>q;
      while(q--){
        int p,q;
        cin>>p,q;
        long long lcm=(p*1LL*q)/__gcd(p,q);
        long ans=multiple_ct[p] + multiple_ct[q];
        if(lcm<N){
           ans -=multiple_ct[lcm];

        }
        cout<<ans<<endl;
      }





}
