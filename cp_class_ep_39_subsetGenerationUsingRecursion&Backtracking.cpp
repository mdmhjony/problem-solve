#include<bits/stdc++.h>


using namespace std;


//#define ff            first
//#define ss            second
//#define pii           pair<int,int>
//#define vi            vector<int>
//#define mp            make_pair
//#define for(i,n)      for(int i=0;i<n;i++)
//#define ll            long long
//#define ull           unsigned long long
//#define pb            push_back
//#define ps            push
//#define pf            push_front
//#define fast_in_out   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<vector<int>> subsets;

void generate(vector<int> &subset,int i,vector<int> &nums){
    if(i==nums.size()){
        subsets.push_back(subset);
        return;
    }
    generate(subset,i+1,nums);
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();


}

int32_t main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>em;
    generate(em,0,v);


    for(auto subset:subsets){
        for(auto ele:subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }



   return 0;
}

