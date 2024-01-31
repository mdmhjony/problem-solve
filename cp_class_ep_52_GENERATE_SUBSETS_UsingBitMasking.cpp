#include<bits/stdc++.h>
using namespace std;
// any uniqe set ar  subset hoi 2^n
//1<<n means 2^n size

//3
//2 4 5

vector<vector<int>> subsets(vector<int>& nums){
    int n=nums.size();

//     for(int i=0;i<n;i++){
//        cout<<nums[i]<<endl;
//    }

      //cout<<nums[2]<<endl;

    int subset_ct=(1<<n);
    //cout<<subset_ct<<endl;
    vector < vector<int> > subset;
    for(int mask=0; mask<subset_ct; mask++){
        vector<int> oneSubset;
        for(int i=0;i<n;i++){
            //cout<<nums[j]<<endl;
            if((mask & (1<<i)) !=0){
                oneSubset.push_back(nums[i]);
            }
        }

//      for(int i=0;i<oneSubset.size();i++){
//           cout<<oneSubset[i]<<endl;
//        }
     subset.push_back(oneSubset);

    }
    return subset;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<endl;
//    }

    auto allsubsets= subsets(v);
    for(auto all:allsubsets){
        for(int ele:all){
            cout<<ele<<" ";
        }
        cout<<endl;
    }


    //o(n*(2^n))
}
