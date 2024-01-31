#include<bits/stdc++.h>
//problem:https://leetcode.com/problems/generate-parentheses/

using namespace std;

//
//#define ff            first
//#define ss            second
//#define pii           pair<int,int>
////#define vi            vector<int>
//#define mp            make_pair
//#define for(i,n)      for(int i=0;i<n;i++)
//#define ll            long long
//#define ull           unsigned long long
////#define pb            push_back
//#define ps            push
//#define pf            push_front
//#define fast_in_out   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
vector<string> valid;
void generateParenthesis(string &s,int open,int close){
    //cout<<s<<endl;
    if(open==0 && close==0){
       valid.push_back(s);
       return;
    }
    if (open>0){
        s.push_back('(');
        generateParenthesis(s,open-1,close);
        s.pop_back();
    }
    if(close>0 && open< close){
        s.push_back(')');
        generateParenthesis(s,open,close-1);
        s.pop_back();
    }
    //cout<<s<<endl;
}

int32_t main(){
    int n;
    cin>>n;
    string s;
    generateParenthesis(s,n,n);
    for(auto str:valid){
        cout<<str<<endl;
    }



   return 0;
}

