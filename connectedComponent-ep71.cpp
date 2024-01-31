#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> g[N];

bool vis[N];

// vector<vector<int> > cc;
// vector<int> current_cc;

// void dfs(int vertex,int par){
bool dfs(int vertex,int par){
	//take action on vertex after entering the vertex

    vis[vertex]=true;
    // current_cc.push_back(vertex);
    bool isLoopExists=false;
	for(int child:g[vertex]){
		//take action on child before entering the child node
		// cout<<"parent"<< vertex <<", Child" <<child<<endl;
		if((vis[child]) && child == par) continue;
        // if(vis[child]) continue;
        if(vis[child]) return true;
        isLoopExists |= dfs(child,vertex);
        // cout<<isLoopExists<<endl;
        // dfs(child,vartex);
		//take action on child after exiting child node
	}

	//take action on vertex before exiting the vertex
  // cout<<isLoopExists<<endl;
  return isLoopExists;
}


//o(V+E)
int main(){
	int n, m;
	cin>>n>>m;
	for(int i=0;i<9;i++){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
    // int ct=0;
    bool isLoopExists=false;
    for (int i = 1; i <=n ; ++i)
    {
    	if(vis[i])continue;
    	// current_cc.clear();
    	// dfs(i);
    	
        if(dfs(i,0)){
        	isLoopExists=true;
        	break;
            // ct++;
       
        }
        // cc.push_back(current_cc);
        // ct++;
    	
    }
   // cout<<ct<<endl;
    // cout<<cc.size()<<endl;
    // for(auto current_cc: cc){
    //     for(int vertex: current_cc){
    //     	cout<<vertex<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<isLoopExists<<endl;

   

}
