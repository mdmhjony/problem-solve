#include<bits/stdc++.h>
// monotonic always increasing or decreasing

//

double eps =1e-6;// 5 decimal place we need take accuracy 0.000001
using namespace std;


double multiply(double mid,int n){
    double res=1;
    for(int i=0;i<n;i++){
       res *=mid;

    }
    return res;
}


int main(){
   double x,n;
   cin>>x>>n;
   double low=1,high=x,mid;
   while(high-low > eps){
      mid=(high+low)/2;
      if(multiply(mid,n)<x){
        low=mid;
      }else{
          high=mid;
      }
   }
   //cout<< low<<endl;
   cout<<setprecision(5)<<low<<endl<<high<<endl;
   cout<<pow(x,1.0/n)<<endl;

   return 0;
}


//  search space is x*10^d (d decimal accuracy)
// n is nth root of number x
// so time complexity is n*log(x*10^d);

