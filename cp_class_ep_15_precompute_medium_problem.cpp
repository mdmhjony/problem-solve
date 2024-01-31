#include<bits/stdc++.h>

using namespace std;

typedef long long int  ll;
typedef unsigned long long ull;
#define pb push_back
const int N=1e7+10;
ll ar[N];
ll pr[N];

int main(){
    ll  n,m;
    cin>>n>>m;
    while(m--){
        ll a,b,k;
        cin>>a>>b>>k;
        ar[a] +=k;
        ar[b+1] -=k;

//        for(int i=a;i<=b;i++){
//            ar[i] +=k;
//        }
    }

    ll mx=-1;

    for(int i=1;i<=n;i++){
        //if(ar[i]>mx) mx=ar[i];
        ar[i] +=ar[i-1];
    }

    for(int i=1;i<=n;i++){
        if(ar[i]>mx) mx=ar[i];
    }
    cout<<mx<<endl;

}

