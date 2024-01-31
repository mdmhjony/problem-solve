#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
#define pb push_back

vector <int> NGE (vector<int> v){
    vector<int> nge(v.size()); // when use index so size should given
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty()&& v[st.top()] < v[i]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }

    return nge;


}


int main(){
    int n;
    cin>>n;
    vector<int> v;
    //vector<int> v(n); need size when cin>>v[i];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//    }
//    cout<<endl;


    vector<int> nge= NGE(v);

    for(int i=0;i<n;i++){
        cout <<v[i]<<" "<< ( nge[i] == -1 ? -1 : v[nge[i]] )<<endl;
    }
}
