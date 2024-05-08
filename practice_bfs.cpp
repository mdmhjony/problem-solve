#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
vector<int> g[N];
queue<int> q;
int vis[N];
int level[N];

void bfs(int source){
	 q.push(source);
	 vis[source]=1;
	 while(!q.empty()){
	 	int cur_var=q.front();
	 	q.pop();
	    cout<<cur_var<<" ";
	 	for(int child: g[cur_var]){
	 	 		if(!vis[child]){
	 			q.push(child);
	 			vis[child]=1;
	 			level[child]=level[cur_var]+1;
	 		}
	 	}
	 }


}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
	}


	bfs(1);
	for(int i=1;i<=n;i++){
		cout<<i<<"level: "<<level[i]<<endl;
	}
}