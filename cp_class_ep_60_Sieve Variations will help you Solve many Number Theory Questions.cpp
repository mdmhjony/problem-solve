#include<bits/stdc++.h>

using namespace std;
//const int N=1e7+10;
const int N=1e5+10;
//vector<bool> isPrime(N,1);//assume all no are prime

//vector<int> lp(N,0),hp(N,0);

vector<int>divisor[N];

// we know any no ar highest lowest always choto ar equal hobe
int main (){
//
//    isPrime[0]=isPrime[1]=false;
//    for(int i=2;i<N;i++){
//        if(isPrime[i] == true){
//            lp[i]=i;
//            hp[i]=i;
//            for(int j=2*i;j<N;j+=i){
//                isPrime[j] = false;
//                hp[j]=i;
//                if(lp[j] == 0){
//                    lp[j]=i;
//                }
//            }
//        }
//
//
//    }

//    for(int i=0;i<100;i++){
//        cout<<i<<" "<<lp[i]<<" "<<hp[i]<<endl;
//    }


//prime factorization.

//log(n)
//   int num;
//   cin>>num;
//   vector<int>prime_factors;
//   while(num>1){
//        int prime_factor=hp[num];
//        while(num%prime_factor == 0){
//            num /=prime_factor;
//            prime_factors.push_back(prime_factor);
//        }
//
//   }
//
//
//   for(int &p:prime_factors){
//     cout<<p<<" ";
//   }


//
//    int num;
//   cin>>num;
//   unordered_map<int,int>prime_factors;
//   while(num>1){
//        int prime_factor=hp[num];
//        while(num%prime_factor == 0){
//            num /=prime_factor;
//            prime_factors[prime_factor]++;
//        }
//
//   }
//
//
//   for(auto p:prime_factors){
//     cout<<p.first<<" "<<p.second<<endl;
//   }



   // divisor kahini


    for(int i=2;i<N;i++){
            for(int j=i;j<N;j+=i){
                   divisor[j].push_back(i);
            }
       }

       for(int i=0;i<10;i++){
        for(int div:divisor[i]){
            cout<<div<<" ";
        }
        cout<<endl;
       }


}
