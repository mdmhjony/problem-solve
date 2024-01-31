#include<bits/stdc++.h>

using namespace std;

const int M=1e9+7;

// problem--> https://www.hackereartah.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/



int binExp(int a,int b,int m){
    int ans=1;
    while(b>0){
        if(b&1)
        {
            ans =(ans*1LL*a)%M;

        }
        b >>=1;
        a =(a*1LL*a)%M;

    }
    return ans;





}


/*

alphabet --> k symbols, N size password , K >N
KCN---N!*KCN
a,b,c-->3*2*1--->n!



*/


const int N=1e5+10;
int fact[N];

int main(){

    //cout<<binExp(2,M-2,M)<<endl;


    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*1LL*i)%M;
    }

    int q;
     cin>>q;
     while(q--){
        int n,k;
        cin>>n>>k;
        int ans=fact[n];
        ans=(ans*1LL*fact[k])%M;
        int den=((fact[k-n])*1LL*(fact[n]))%M;
        ans=(ans*1LL*binExp(den,M-2,M))%M;
        cout<<ans<<endl;
     }
}
