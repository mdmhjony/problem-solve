#include<bits/stdc++.h>


using namespace std;

const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
const int K=1e7+10;
int hsh[K]; // we cannot take 1e7 up value because of 1 second highest is 1e7;


//int main(){
//    fact[0]=fact[1]=1;
//
//    for(int i=2;i<N;i++){
//        fact[i]=fact[i-1]*i;
//    }
//    int t;
//    cin>>t;
//
//    //long long fact=1;
//    while(t--){
//            int n;
//
//            cin>>n;
////       for(int i=2;i<=n;i++){
////        fact= (fact*i)%M;
////       }
//       cout<<fact[n]<<endl;
//    }
//
//}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      hsh[a[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;

        //int ct=0;
//        for(int i=0;i<n;i++){
//           if(x==a[i])ct++;
//
//        }
//        cout<<ct<<endl;
    }



}
