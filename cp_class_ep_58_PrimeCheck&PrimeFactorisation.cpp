#include<bits/stdc++.h>

/*

finding primes
sqrt(n) approach
prime factorization

any number lowest divisor always prime number without 1
*/

using namespace std;

int main(){
   //o(n) time complexity
//    int n;
//    cin>>n;
//    bool is_prime=true;
//    for(int i=2;i<n;i++){
//        if(n%i==0){
//            is_prime=false;
//            break;
//
//
//        }
//    }
//    cout<<is_prime<<endl;

//o(sqrt(n)
//
//    int n;
//    cin>>n;
//    if(n==1){
//        cout<<0<<endl;
//        return false;
//    }
//    bool is_prime=true;
//    for(int i=2;i*i<n;i++){
//        if(n%i==0){
//            is_prime=false;
//            break;
//
//
//        }
//    }
//    cout<<is_prime<<endl;
//

//prime factorization

//    int n;
//    cin>>n;
//    vector<int> prime_factors;
//    //bool is_prime=true;
//
//    //non prime no ar root n ar age akti at least prime no exist korbei
//    for(int i=2;i<=n;i++){
//        while(n%i==0){
//            prime_factors.push_back(i);
//            n /=i;
//        }
//    }
//    //cout<<is_prime<<endl;
//
//    for(auto &prime: prime_factors){
//        cout<<prime<<endl;
//
//        }



//sqrt(n) prime factors find

   int n;
    cin>>n;
    vector<int> prime_factors;
    //bool is_prime=true;

    //non prime no ar root n ar age akti at least prime no exist korbei
    for(int i=2;i*i<=n;i++){// example 24 a 3 would be n and i*i would be 9 so condition false
        while(n%i==0){
            prime_factors.push_back(i);
            n /=i;
        }
    }

    // so last no of prime jar kono power thakbe nah push
    if(n>1){
        prime_factors.push_back(n);
    }
    //cout<<is_prime<<endl;

    for(auto &prime: prime_factors){
        cout<<prime<<endl;

        }
}


