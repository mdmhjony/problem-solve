#include<bits/stdc++.h>

using namespace std;

int main(){
//    //map<pair<string,string> ,int>m;// here all complex we can use
//    map<pair<string,string> , vector<int> > m;// here all complex we can use
////    map<set<string> ,int>s;
////    map<set<int>s;
////    s1={2,3,4};// first by first compare
////    s1={1,3,4};
////    pair<string,string> p1,p2;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//        string fn,ln;
//        int allmarks;
//        cin>>fn>>ln>>allmarks;
//        for(int j=0;j<allmarks;j++){
//            int x;
//            cin>>x;
//            m[{fn,ln}].push_back(x);
//
//        }
//
//     }
//     cout<<"size: "<<m.size()<<endl;
//
////     for(auto &value: m){
////        cout<<value.first.first<<value.first.second<<endl;
////        for(int i=0;i<value.second.size();i++){
////            cout<<value.second[i]<<" ";
////        }
////
////
////
////     }
//
//
//        for(auto &value: m){
//        auto &full_name=value.first;
//        auto &vecList=value.second;
//
//        cout<<full_name.first<<full_name.second<<endl;
//        for(auto &element: vecList){
//            cout<<element<<" ";
//        }
//
//
//
//     }


  // practice problem link
  //https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

     int n;
     cin>>n;
     map <int,multiset<string> >m;
     for(int i=0;i<n;i++){
            string s;
            int n;
            cin>>s>>n;
            m[n].insert(s);
        }

        // we can insert by negative value as result we can travarse start to end


//     for(auto it = --m.end(); it !=m.begin(); it--){
//
//             auto &setno= (*it).second;
//             for(auto &value: setno){
//             cout<<value<<" "<<(*it).first<<endl;
//           }
//
//         }

        auto cur_it = --m.end();


        while(true){
            auto &students=(*cur_it).second;
            int marks= (*cur_it).first;
            for(auto &student: students){
                cout<< student<<" "<<marks<<endl;
            }if(cur_it == m.begin())break;
            cur_it--;

        }


}
