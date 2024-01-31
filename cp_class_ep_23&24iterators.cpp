#include<bits/stdc++.h>
using namespace std;

int main(){
//    vector<int> v={5,3,3,5};
//    vector<int>::iterator it=v.begin();
////    cout<< (*(it+3))<<endl;
////    cout<<*(it)+10<<endl;
//    for(it=v.begin();it<v.end();it++){
//        cout<<*it<<" ";
//    }
//    vector<pair<int,int>> p1={{1,2},{3,4}};
//    vector<pair<int,int>>::iterator it;
//     for(it=p1.begin();it<p1.end();it++){
//        cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
//     for(it=p1.begin();it<p1.end();it++){
//        cout<<it->first<<" "<<it->second<<endl; // same as * if pair we can use this.
//    }

    //it->first==(*it).first


    // short declaration iterator
    // vector<pair<int,int>> p1={{1,2},{3,4}};
//       // range base loop.
//     for(pair<int,int> &value :p1){ // only value copy and &value is references
//        cout<<value.first<<" ";
//     }
       for(auto &value :p1){ // only value copy and &value is references
        cout<<value.first<<" ";
    }


//     
//
//     for(auto it=p1.begin();it<p1.end();it++){
//        cout<<it->first<<" "<<it->second<<endl; // same as * if pair we can use this.
//    }

//        auto a=1;// automatically determine datatype
//        cout<<a<<endl;
//


}
