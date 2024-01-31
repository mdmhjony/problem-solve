#include<bits/stdc++.h>
using namespace std;
/*
adjacency matrix 
vertex*vertex matrix create.
in graph question given vertices-N and edges-M
1  2
2  3

given a question 6 vertices 9 edges




adjacency list


*/

const int N=1e3+10;

// int graph1[N][N];
// int graph[N][N];

// vector<int> graph2[N];
vector< pair<int,int> >graph2[N];



int main()
{

	//matrix
    //space complexity N^2; probelem
    // N ar value 10^3 ar boro nite parbo nah graph a
    // i,j connected? i.j how much weight; given answer 0(1)


   // int n,m;
   // cin>>n>>m;
   // for(int i=0;i<m;i++){
   // 	int v1,v2;
   // 	cin>>v1>>v2;
   //  graph1[v1][v2]=1;//wt
   //  graph1[v2][v1]=1;//wt

   // }

//list space o(N+E) . 
  


   //  int n,m;
   //  cin>>n>>m;
   // for(int i=0;i<m;i++){
   // 	int v1,v2;
   // 	cin>>v1>>v2;
   //  graph2[v1].push_back(v2);
   //  graph2[v2].push_back(v1);

   // }


  
   // // find i,j connected? o(N) normal graph
   //  for(int child: graph2[i]){
   //  	if(child==j){

   //  	}
   //  }




	// if given weight

   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++){
   	int v1,v2,wt;
   	cin>>v1>>v2>>wt;
      graph2[v1].push_back(v2,wt);
      graph2[v2].push_back(v1,wt);

      // int v1, v2;
      // cin>> v1>> v2;
      // graph[v1][v2]=1;
      // graph[v2][v1]=1;


   }




   // int i,j;
   // cin>>i>>j;




    //weight graph

    // find i,j connected? o(N) 
    // for(pair<int,int> child: graph2[i]){
    // 	if(child.first==j){
    // 		cout<<child.second<<endl;

    // 	}
    // }



}





