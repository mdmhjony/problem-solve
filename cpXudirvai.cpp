#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>lavel;
int parent[1000000];

void make(int v){
   parent[v] = v;
}

int findParent(int v){
     if(parent[v]==v)return v;
     return parent[v] = findParent(parent[v]);
}

void team(int x,int y){

    int px = findParent(x);
    //cout<<"Parent of "<<x<<" "<<px<<endl;

    int py = findParent(y);
     //cout<<"Parent of "<<y<<" "<<py<<endl;

    if(lavel[px]>lavel[py]){
         parent[py] = px;
         //cout<<"Parent of "<<py<<" "<<px<<endl;
    }else if(lavel[px]<lavel[py]){
         parent[px] = py;
    }else{
        if(px>py){
            parent[py] = px;
        }else if(px<py){
            parent[px] = py;
        }
    }

}

void rankUpdate(int px,int py){
    if(lavel[px]<lavel[py]){
         parent[px] = py;
         //cout<<"Parent of "<<py<<" "<<px<<endl;
    }else if(lavel[px]==lavel[py]){
        // parent[px] = py;

        if(px>py){
            parent[py] = px;
        }else if(px<py){
            parent[px] = py;
        }
    }
}

void task1(int x,int y){
    team(x,y);
}

void task2(int id){
    lavel[id] +=1;
    //if(lavel[findParent(id)]<lavel[id])
    rankUpdate(findParent(id),id);
}

void task3(int id)
{
    cout<<findParent(id)<<endl;
}
int main(){
   int n,q;
   cin>>n>>q;

   int num;
   for(int i=0;i<n;i++){
      cin>>num;
      lavel[num] = n-i;
      make(num);
   }

   while(q--){
       int op;
       cin>>op;
       if(op==1){
            int x,y;
            cin>>x>>y;

            task1(x,y);

       }else if(op==2){
           int id;
           cin>>id;
           task2(id);

       }else{
          int id;
          cin>>id;
          task3(id);

       }

   }

}

