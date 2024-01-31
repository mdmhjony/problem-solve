#include<bits/stdc++.h>
// 3 function all_of,any_of,none_of return true or false
// this use all datalist

 using namespace std;

 int main(){
     vector<int> v={1,2,3};

     // we can use many perametter
//     auto sum= [](int x){return x+2;};
//     cout<<sum(3);

      cout<< all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
      cout<< any_of(v.begin(),v.end(),[](int x){return x<=0;})<<endl;
      cout<< none_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
 }
