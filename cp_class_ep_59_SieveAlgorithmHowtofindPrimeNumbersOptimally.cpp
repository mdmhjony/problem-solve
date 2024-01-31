#include<bits/stdc++.h>
// at first we assume all no are prime
// then first 1 prime nah then 2 and 2 ar all multiple cross  kore dibo then ar poer jeita unmark oita prime no.
using namespace std;
// Q query and N <10^7

const int N=1e7+10;
vector<bool> isPrime(N,1);//assume all no are prime
int main (){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i] == true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j] = false;
            }
        }


    }

   // here inner loop log log(n) here because of only prime no ar jonno inner loop cholbe outer loop o(n) total O(n* log (log(n)))
//
//    for(int i=1;i<100;i++){
//        cout<<i<<"is prime: "<<isPrime[i]<<endl;
//    }

      int q;
      cin>>q;
      while(q--){
        int x;
        cin>>x;
        if(isPrime[x]){
            cout<<"prime"<<endl;

        }else cout<<"not prime"<<endl;
      }




}
