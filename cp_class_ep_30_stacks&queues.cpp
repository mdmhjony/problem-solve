#include<bits/stdc++.h>

using namespace std;
// stack lifo
// push,pop,top,size
//queue fifo
//push, pop,front.
int main(){
//    stack<int>s;
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//            int x;
//            cin>>x;
//            s.push(x);
//
//    }
//    while(!s.empty())//return boolean
//    {
//       cout<<s.top()<<endl;
//       s.pop();
//    }


    queue<int>s ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.push(x);

    }
    while(!s.empty())//return boolean
    {
       cout<<s.front()<<endl;
       s.pop();
    }
}
