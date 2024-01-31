#include<bits/stdc++.h>


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
     fast_in_out;
     int n;
     cin>>n;
     vi v(n);
     for(i,n){
        cin>>v[i];

     }

     // we can  use below all fuction in all datalist.

     //all operation below normally o(n). but count and find map,pair,set log(n)
     auto min_value= *min_element(v.begin(),v.end());
     cout<<min_value<<endl;
     auto max_value= *max_element(v.begin(),v.end());
     cout<<max_value<<endl;
     auto sum= accumulate(v.begin(),v.end(),0);// last value initial sum and return value.
     cout<<sum<<endl;
     auto ct= count(v.begin(),v.end(),2);// last which no we count
     cout<<ct<<endl;
     auto element= find(v.begin(),v.end(),2);// last which no find
     if(it !=v.endl())
     cout<<*element<<endl;
     else cout<<"element not found"<<endl;

     reverse(v.begin(),v.end());// here no copy references copy means all time string int vector array it can use



   return 0;
}
