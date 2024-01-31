#include<bits/stdc++.h>

using namespace std;
unordered_map<char,int> symbol={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s){
      stack<char>st;

      for(char bracket: s){
           if(symbol[bracket]<0){
             st.push(bracket);
           }
           else{
                if(st.empty()) return "NO";
                if(symbol[st.top()]+symbol[bracket]==0){
                    st.pop();
                }
                else return "NO";
           }
      }
      if(st.empty())return "YES";


      // main code
//      stack<char>st;
//
//      for(char bracket: s){
//           if(symbol[bracket]<0){
//             st.push(bracket);
//           }
//           else{
//                if(st.empty()) return "NO";
//                char top=st.top();
//                st.pop();
//                if(symbol[top]+symbol[bracket] !=0){
//                    return "NO";
//                }
//           }
//      }
//      if(st.empty()) return "YES";
//      return "NO";


}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }

}

