#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
const int N=1e5;
#define pb push_back

// intro sort, first quick sort use if depth is high so it use heap sort if size or small so use insertion sort.

//bool should_i_swap(int a,int b){
//    if(a > b) return true ;
//    return false;
//}



//bool should_i_pair_swap(pair<int,int> a, pair<int,int> b){
//    if(a.first !=b.first){
//        if(a.first> b.first) return true;// true inbuilt not swaping
//        return false;// inbuilt swaping
//    }else{
//        if(a.second>b.second) return false;
//        return true;
//
//
//    }
//    if(a > b) return true;
//    return false;
//}

//bool cmp(int a, int b){
//    return a>b;// decending order
//}


bool cmp(pair<string,int> a,pair<string,int> b){
     if(a.second !=b.second){
        return a.second>b.second;// when false it swap descending
    }else{
        return a.first<b.first; // means a.first choto hole korar dorkar nai swap return true.
    }

}

bool should_i_pair_swap(pair<int,int> a, pair<int,int> b){
    if(a.first !=b.first){
        return a.first<b.first;
    }else{
        return a.second>b.second;
    }
}
int main(){
//    vector<int> v; // if use index so use must given size. but we can update
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        int x;
//        cin>>x;
//        v.push_back(x);
//    }
//
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//           if(should_i_swap(v[i],v[j])){
//             swap(v[i],v[j]);
//           }
//        }
//    }
//
//




     //sort(v.begin()+2,v.end());// start and end+1 two perametter
    // sort(v.begin(),v.end());// start and end+1 two perametter

//
//    int n;
//    cin>>n;
//    vector<pair<int,int>> v(n);
//    for(int i=0;i<n;i++){
//        int x;
//        cin>>v[i].first>>v[i].second;
//    }


//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//           if(should_i_pair_swap(v[i],v[j])){
//             swap(v[i],v[j]);
//           }
//        }
//    }

    //sort(v.begin(),v.end(),should_i_pair_swap);
//    sort(v.begin(),v.end(),should_i_pair_swap);// sort opposite because of inbuilt comparator fuction
//    // if true is not swaping if swap return false.
//
//    for(int i=0;i<n;i++){
//        cout<<v[i].first<<" "<<v[i].second<<endl;
//    }
//    cout<<endl;
//

//
//    for(auto &value: v){
//        cout<<value.first<<" "<<value.second<<" "<<endl;





//    }



// problem: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

    int n;
    cin>>n;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;

    }

    sort(v.begin(),v.end(),cmp);
    //sort(v.begin(),v.end(),greater<pair<int,int>>); //decreasing

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }






}
