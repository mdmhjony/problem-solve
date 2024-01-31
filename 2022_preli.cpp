#include<bits/stdc++.h>

using namespace std;

int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//    int x;
//    cin>>x;
//    if(x<=34)cout<<"Student "<<i<<": "<<"F"<<endl;
//    else if(x<=39)cout<<"Student "<<i<<": "<<"D"<<endl;
//    else if(x<=49)cout<<"Student "<<i<<": "<<"C"<<endl;
//    else if(x<=59)cout<<"Student "<<i<<": "<<"B-"<<endl;
//    else if(x<=69)cout<<"Student "<<i<<": "<<"B+"<<endl;
//    else if(x<=79)cout<<"Student "<<i<<": "<<"A-"<<endl;
//    else if(x<=89)cout<<"Student "<<i<<": "<<"A"<<endl;
//    else if(x>=90)cout<<"Student "<<i<<": "<<"A+"<<endl;
//   }

    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        string s;
        getline(cin ,s);
    for(int j=0;j<s.size();j++) {
      if(s[j]>=97 && s[j]<=122) {
         s[j]=s[j]-32;
      }


//        int cx,cy,px,py,r;
//        cin>>cx>>cy>>r>>px>>py;
//        int d=sqrt(pow(cx-px,2)+pow(cy-py,2));
//        if(d<r)cout<<"Case "<<i<<": yes"<<endl;
//        else cout<<"Case "<<i<<": no"<<endl;

    }
    cout<<"Case "<<i<<": "<<s<<endl;



 }
}
