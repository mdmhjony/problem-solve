#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
const int INF=1e9+10;


vector<pair<int, int> g[N];
set<pair<int,int> st;
vector<int>vis(N,0);
vector<int>dist(N,INF);

void dijkstra(int source){
	st.insert({0,source});
	dis[source]=0;
	while(st.size()>0){
		auto node=*st.begin();
		int v=node.second;
		int v_dist=node.first;
		st.erase(st.begin());
		if(vis[v]) continue;
		vis[v]=1;
		for(int child:g[v]){
			int child_v=child.first
			int wt=child.second;
			if(dis[v]+wt<dist[child_v]){
				 dist[child_v]=dis[v]+wt;
				 st.insert({dist[child_v],child_v});
			}


		}

	}

   

}

int main(){
	int n;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		g[x].push_back({y,w});
	}

}