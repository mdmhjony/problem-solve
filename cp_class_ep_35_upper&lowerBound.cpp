#include<bits/stdc++.h>

// in array it return pointer and vector return iterator upper and lower bound use binary search
// in map it find in key,
// list must be sorting so time complexity would be log(n), else would be o(n);
//it take perameter start and last position end
// but set map pair upper bound and lower bound use tree traversal internally


using namespace std;


#define ff            first
#define ss            second
#define pii           pair<int,int>
#define vi            vector<int>
#define mp            make_pair
#define for(i,n)      for(int i=0;i<n;i++)
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
#define ps            push
#define pf            push_front
#define fast_in_out   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int32_t main(){
//    int n;
//    cin>>n;
//    vi v(n);
//    for(i,n){
//        cin>>v[i];
//    }
//    sort(v.begin(),v.end());
//    auto it =lower_bound(v.begin(),v.end(),6);// always return if found this iterator or its big value iterator
//    auto it1 =upper_bound(v.begin(),v.end(),6);// always return found+1 iterator
//    if(it!=v.end()){
//        cout<<"lower bound found:"<<*it<<endl;
//    }else cout<<"lower bound not found"<<endl;
//     if(it1!=v.end()){
//        cout<<"upper bound found:"<<*it1<<endl;
//    }else cout<<"upper bound not found"<<endl;

      // here less code run when define for code  is comment out
      //if use general form of for lop
      set<int>s;
      int n=100000;
      for(i,n){// for(int i=0; i<(int)1e6; i++)
        s.insert(rand());
 }
      for(i,n){
      //auto it= upper_bound(s.begin(),s.end(),rand());// its time is o(n) same as map
      // so we can use set or map
      auto it= s.lower_bound(rand());// same as use map so time log(n)
      }


   return 0;
}
