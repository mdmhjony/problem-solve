#include<bits/stdc++.h>
// at first we assume all no are prime
// then first 1 prime nah then 2 and 2 ar all multiple cross  kore dibo then ar poer jeita unmark oita prime no.
using namespace std;
// Q query and N <10^7

//const int N=1e7+10;
//vector<bool> isPrime(N,1);
int main (){
   int t;
   cin>>t;
   while(t--){
       int x;
       cin>>x;
       vector<int> a(x);
       vector<int> b(x);

       for(int i=0;i<x;i++){
          cin>>a[i];
       }
       for(int i=0;i<x;i++){
         cin>>b[i];
       }
       //cout<<a[1];
       //cout<<a.size()<<endl;
       int ct=0;
       for(int i=0;i<x;i++){
            if(a[i] !=b[i]){
             ct++;
             break;
            }
       }

       if(ct == 0){
        cout<<0<<endl;
       }
       else if(x==1){
        cout<<1<<endl;
       }
       else{
            int azero=0,aone=0,bzero=0,bone=0;
             for(int i=0;i<x;i++){
                 if(a[i]==0)azero++;
                 if(a[i]==1)aone++;
                 if(b[i]==0)bzero++;
                 if(b[i]==1)bone++;
             }
       if(azero==bzero && aone==bone){
        cout<<1<<endl;
       }
       else{
           int ct1=0;
            for(int i=0;i<x;i++){
                 if(a[i] !=b[i]){
                     ct1++;
               }
             }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int ct2=0;
            for(int i=0;i<x;i++){
                 if(a[i] !=b[i]){
                     ct2++;
               }
             }
            if(ct1<=ct2)cout<<ct1<<endl;
            else cout<<ct2+1<<endl;

       }


      }


    }





}
