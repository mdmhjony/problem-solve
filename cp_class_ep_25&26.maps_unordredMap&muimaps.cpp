#include<bits/stdc++.h>

// Red black trees implementation in map. here key accending order and check exist or not.
// and string is lexagrahically and exist or not.and map iterator use it++. because of not continous.

using namespace std;
void print(auto &m){//log(n)
   // cout<<m.size()<<endl;
    for(auto &value: m){//o(n)
        cout<<value.first<<" "<<value.second<<endl;
    }

}

int main(){
//    map<int ,string>m;
//    m[1]="jony";// insert and access o(log(n)) time complexity
//    m[2]="hasan";
//    m[7]="mehedi";
//    m[9];//o(log(n)) // value will be empty string and and if value is int so it will be zero
//    m.insert({4,"name"});//o(log(n))
//    if(m.find(1)!=m.end())
//        auto it=m.find(1);//o(log(n))// return itretor & carefull about exist because of segmentation fault
//    m.erase(2);//o(log(n))
//    m.clear();//o(log(n))
//    map<int,string>:: iterator it;
//    for(it=m.begin();it!=m.end();it++){
//        cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
//     for(it=m.begin();it!=m.end();it++){
//        cout<<it->first<<" "<<it->second<<endl;
//    }
//    m.insert({10,"xudir vai"});
//    print(m);
//
//    map<string ,string>m;
//    m.insert({"abc","jony"});// timeis s.size()*log(n) because of key


/*
practice problem

given N strings, print unique strings
in lexiographical order with their frequency // which is count same string.
N<=10^5
|s| <=100

 */

//   int n;
//   cin>>n;
//   map<string,int>m;
//   for(int i=0;i<n;i++){
//    string s;
//    cin>> s;
//    m[s]++; // in map insert without value here if int is datatype value zero initialize
//
//   }// here time complexity long(n)*100*10^5
//   print(m);


     // unorderd maps
     // 1. inbuilt implementation cannot use (pair<int,int> not define hash function), use only basic datatype string,int,long long ,float,double
     //2.time complexity.
     //3. valid keys datatype.
//     unordered_map<int,string> m;// in bulilt hash table use this
//     m[1]="jony";// insert and access o(1) average time complexity if not collision
//     m[2]="hasan";
//     m[7]="mehedi";
//     m[9];//o(1)
//     m.insert({4,"name"});
//     print(m);
////     m.find()// same o(1)
////     m.erase();//same o(1)
////

/*
practice problem

given N strings, and q query
in each query you are given a string
print the frequency of that string
N<=10^5
|s| <=100
q<=10^6;

 */
// unordered_map<string,int>m;
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     string s;
//     cin>>s;
//     m[s]++;
// }
//
//  int q;
//  cin>>q;
//  while(q--){
//     string s;
//     cin>>s;
//     cout<<m[s]<<endl;
//  }


  // multimaps
  // here is same key would be duplicate insert. not unique key

  //multimap<int,vector<string>>m;// suppose here we can take one int ki jonno multiple string in vector

}
