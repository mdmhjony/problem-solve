#include<bits/stdc++.h>
using namespace std;

int my_lower_bound(vector<int> &v, int element){
    int low=0;
    int high=v.size()-1;
    int mid;
    while(high-low>1){
        mid=(high+low)/2;
        if(v[mid]<element){
            low=mid+1;
        }else{
            high=mid;
        }
    }

        if(v[low]>=element){
            return low;
        }
        if(v[high]>=element){// here we can use if and else if because of we return one time
            return high;
        }

        return -1;

}


int my_upper_bound(vector<int> &v, int element){
    int low=0;
    int high=v.size()-1;
    int mid;
    while(high-low>1){
        mid=(high+low)/2;
        if(v[mid]<=element){
            low=mid+1;
        }else{
            high=mid;
        }
    }

        if(v[low]>element){
            return low;
        }
        else if(v[high]>element){
            return high;
        }

        return -1;

}






int main(){
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int element;
     cin>>element;

     int lb=my_lower_bound(v,element);
     cout<<lb<<"lower bound: "<<(lb !=-1 ? v[lb]:-1)<<endl;
     int ub=my_upper_bound(v,element);
     cout<<ub<<"upper bound : "<<(ub !=-1 ? v[ub]:-1)<<endl;

}
