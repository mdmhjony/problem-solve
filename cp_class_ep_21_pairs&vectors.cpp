#include<bits/stdc++.h>

using namespace std;

#define pb push_back

void printVec(vector<int> &v){// here we pass copy only so time complexity is o(n)
    // so we pass reference like above
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){//v.size() time is o(1);
        cout<<v[i]<<" ";
    }
}

int main(){



    //pair



//    pair<int,string> p1;
//    //p1=make_pair(1,"jony");
//    p1={1,"jony"};
      //cin>>p1.first;
//    //pair<int,string>p2;
//    pair<int,string>&p2=p1;
////    p2=p1;
////    p2.first=3;
//    p2.first=3;
//    p2.second="hasan"
//
//    cout<<p1.first<<" --p1 value-- "<<p1.second<<endl;
//    cout<<p2.first<<"--p2 value-- "<<p2.second<<endl;


//     int a[]={1,2,3};
//     int b[]={5,6,7};
//     pair<int,int> pair_arr[3];// we cannot use normally use vector of pair;
//     pair_arr[0]={a[0],b[0]};
//     pair_arr[1]={a[1],b[1]};
//     pair_arr[2]={a[2],b[2]};
//     swap(pair_arr[0],pair_arr[2]);
//     for(int i=0;i<3;i++){
//            cout<<pair_arr[i].first<<" "<<pair_arr[i].second<<endl;
//
//     }

     // vectors
     // continues memory blocks;
    // vector size limitation same to array in local and global  actully this limit is continous memeory allocation.
     vector<int>v;//here size is zero
     //vector<int>v(10,3); // here 10 element size array and value all are 3
      //size dynamic size current zero and initialize value then size will be increase.
     //vector<int> v(5);// here size is 5 and value are 0 0 0 0 0 0; size we can increase and decrease
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    v.pb(5);
    //v.pop_back(5);
    printVec(v);
    vector<int> v2=v;//. time complexity is 0(n) like for loop we can only copy but we could not in array. in array we can pointer pass and address are same.
  //  vector<int> &v2=v; // for time saving we pass reference
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<" ";
//    }


   //vector<string> v;

}
