#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;
vector <int> g[N];
vector<int> vis(N);
vector<int> level(N);

void bfs(int source){
     queue<int>q;
     q.push(source);
     vis[source]=1;
     while(!q.empty()){
     	int cur_var=q.front();
     	 q.pop();
     	 cout<<cur_var<<" ";
     	 for(int child : g[cur_var]){
     	 	if(!vis[child]){
     	        q.push(child);
     	 		vis[child]=1;
     	 		level[child]=level[cur_var]+1;
     	 	}

         }

     }
     cout<<endl;
    


}


int main(){

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
       int x, y;
       cin>>x>>y;
       g[x].push_back(y);
       g[y].push_back(x);
	}

	bfs(1);

	for(int i=1;i<=n;i++){
      cout<<"level of"<< i <<":"<<level[i]<<endl;
	}
}