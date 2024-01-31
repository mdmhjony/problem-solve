#include<bits/stdc++.h>
// problem---> https://www.spoj.com/problems/EKO/
using namespace std;
typedef long long ll;
int n;
vector<ll> v;// size would be declare first if we use can input index of array
ll m;


bool isWoodSufficient(ll h){
     ll wood=0;
     for(int i=0;i<n;i++){
        if(v[i]>=h){
            wood +=v[i]-h;
        }
     }
     return wood>=m;

}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll low=0,high=10e9,mid;
    //T T T T T F F F F F F
    while(high-low>1){
        mid=(high+low)/2;
        if(isWoodSufficient(mid)){
            low=mid;
        }else{
            high=mid-1;

        }
    }
    if(isWoodSufficient(high))cout<<high<<endl;
    else cout<<low<<endl;


}
