#include<bits/stdc++.h>
// problem link
//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        multiset<long long> m;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            m.insert(x);
        }
        long long consume=0;
        for(int i=0;i<k;i++){
            auto last_it=(--m.end()); //m.end() next line last_it-- // here last_it ar maje age -- hobe then assign hobe value
            long long candy_ct=*last_it;
            m.erase(*last_it);
            consume +=candy_ct;
            m.insert(candy_ct/2);
        }
        cout<<consume<<endl;

    }
}
