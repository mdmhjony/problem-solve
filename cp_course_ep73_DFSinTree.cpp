#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> g[N];
int height[N];
int depth[N];



void dfs(int vertex ,int par){
	//take action on vertex after entering the vertex

	for(int child:g[vertex]){
		//take action on child before entering the child node
		// cout<<"parent"<< vertex <<", Child" <<child<<endl;
        if(child == par) continue;
        depth[child]=depth[vertex]+1;
        dfs(child, vertex);
        height[vertex]=max(height[vertex] , height[child]+1);
		//take action on child after exiting child node
	}

	//take action on vertex before exiting the vertex
  

  //return isLoopExists;
}


//o(V+E)
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}

	dfs(1,0);

	for(int i=1;i<=n;i++){
		cout<<depth[i]<< " " <<height[i]<<endl;
	}

}