 #include<bits/stdc++.h>
using namespace std;

//void printVec(vector<pair<int,int>> &v){
//    cout<<"size:"<<v.size()<<endl;
//    for(int i=0;i<v.size();i++){
//        cout<<v[i].first<<" "<<v[i].second<<endl;;
//    }
//}
void printVec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


int main(){
//    vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
//    printVec(v);
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        int x,y;
//        cin>>x>>y;
//        v.push_back({x,y});
//    }
//    printVec(v);


     // array of vector king of 2d array
//     int N;
//     cin>>N;
//     vector<int> v[N];// 0 size ar 10 ta vector
//     for(int i=0;i<N;i++){
//        int n;
//        cin>>n;
//        for(int j=0;j<n;j++){
//            int x;
//            cin>>x;
//            v[i].push_back(x);
//        }
//
//
//     }
//     for(int i=0;i<N;i++){
//        printVec(v[i]);
//     }

       //cout<<v[0][0];
//



     // vector of vector



     int N;
     cin>>N;
     vector<vector<int>> v;
     for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;// or we can use same v.push_back(vector<int> ());
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);// here v[i].push_back(x);
        }

          v.push_back(temp);
     }

     //v[0].push_back(10);
     for(int i=0;i<v.size();i++){
        printVec(v[i]);
     }

}


