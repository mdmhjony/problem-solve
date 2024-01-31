#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
const int n=1e5;
#define pb push_back

// intro sort, first quick sort use if depth is high so it use heap sort if size or small so use insertion sort.

int main(){
    vector<int> v; // if use index so use must given size. but we can update
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     //sort(v.begin()+2,v.end());// start and end+1 two perametter
     sort(v.begin(),v.end());// start and end+1 two perametter defult accending sort. but we can change this.

    for(int &value: v){
        cout<<value<<" ";
    }


}
