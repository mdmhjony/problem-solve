#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

vector<vector<int> > adj(10000);

map<int,bool> vis;

map<int,int> pa;
int cnt=0;

map<int,int> color;
int n,m;

void dfs(int n,int p)
{

     cout<<n<<endl;

    vis[n]=true;


    for(int i=0; i<adj[n].size(); i++)
    {
        bool isinside=false;

        if(cnt==m+1)
        {
            isinside=true;
        }
        else if(color[adj[n][i]]==1)
        {
            cnt++;
        }
        else cnt=0;

        if(!vis[adj[n][i]]&&!isinside)
        {
            dfs(adj[n][i],n);
        }

    }


    pa[n]=p;





    cout<<"node-> "<<n<< "   parent-> "<<pa[n]<<endl;

}


int main()
{


    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        int cc;
        cin>>cc;
        color[cc]=true;
    }

    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);

    }



    dfs(1,-1);














































































































}

