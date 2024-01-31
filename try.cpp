#include<bits/stdc++.h>

using namespace std;
const int N=10;

int main(){
    int n;
    cin>>n;
    vector<int > v;
    for(int i=0;i<n;i++){
        int x;
        //cin>>v[i];
        cin>>x;
        v.push_back(x);

    }
    cout<<v.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    }


}
