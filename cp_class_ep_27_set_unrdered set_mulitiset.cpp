#include<bits/stdc++.h>
using namespace std;
void print(auto &m){
    for(auto value: m){
        cout<<value<<endl;
    }
//    for(auto it=m.begin();it!=m.end(); it++){
//        cout<<(*it)<<endl;
//    }
}

// set implemetation internally same as map red black trees algorithims
int main(){
//     set<string> m; // collection of key same as map without value.
//     m.insert("abc");// store sorting order.
//     m.insert("cde");
//     m.insert("mnp");// insert and access log(n)
//     auto it = m.find("abc");// return itretor log(n)
//     if(it!=m.end()){
//        //cout<<*it<<endl;
//        m.erase(*it); // or m.erase("value");
//     }else
//     cout<<"not found"<<endl;
//    print(m);
//

    // unordered set
    // all same as unorderd maps


    unordered_set<string> m; //only basic datatype we can use not complex supposse cannot use pair,set because of no hash function define
    // bost library we will use but cannot use cp
     m.insert("abc");//o(1)
     m.insert("cde");
     m.insert("mnp");//
     auto it = m.find("abc");// return itretor o(1)
     if(it!=m.end()){
        cout<<*it<<endl;
        //m.erase(*it); // or m.erase("value");
     }else
     cout<<"not found"<<endl;
    print(m);

     //multiset

     multiset<string> multi; // its can take multiple key same as map all function time log(n)
     // we can use multiset alternetaive priority queue.

     multi.insert("abc");//o(1)
     multi.insert("cde");
     multi.insert("mnp");//
     auto it = multi.find("abc");// return itretor o(1) here duplicate first value itretor point
     if(it!=multi.end()){
        //cout<<*it<<endl;
        multi.erase(*it); // only duplicate value delete or m.erase("value"); here all duplicate delete
     }else
     cout<<"not found"<<endl;
    print(multi);
    multi.erase("abc");//here both duplicate erase.


}
