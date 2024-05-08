/*#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

int arr[N];
int topindex=-1;


// stack implementing using array

void push(int x){
	arr[++topindex]=x;

}
int pop(){
   int temp=arr[topindex];
   topindex--;
   return temp;

}

int top(){
	return arr[topindex];

}

bool isEmpty(){
	return (topindex<0);
	

}


int main(){
	push(10);
	push(19);
	push(2);
	for(int i=0;i<=topindex;i++){
		cout<<arr[i]<< "  ";
	}
	cout<<endl;
	cout<<top()<<endl;
	cout<<pop()<<endl;
	cout<<isEmpty()<<endl;
	for(int i=0;i<=topindex;i++){
		cout<<arr[i]<< "  ";
	}



}*/




// queue implementing using array

/*
#include<bits/stdc++.h>
using namespace std;

const int N=5;

int arr[N];
int cnt=0;
int front=0;
int rare=0;

void push(int x){
  if(cnt == N) return;
  arr[rare%N]=x;
  rare++;
  cnt++;

}

int pop(){

	if(cnt==0) return -1;
	int deleteElement=arr[front];
	arr[front%N]=-1;
	front++;
	cnt--;
	return deleteElement;
   
}

int top(){
	if(rare==front) return -1;
    return arr[front%N];

}

int main(){
	push(10);
	push(3);
	push(7);
	push(9);
	push(10);
	for(int i=front;i<=rare-1;i++){
		cout<<arr[i%N]<<" ";
	}
	cout<<endl;
    cout<<top()<<endl;
    cout<<pop()<<endl;
    for(int i=front;i<=rare-1;i++){
		cout<<arr[i%N]<<" ";
	}



}*/








// stack implementing using queue 


// double queque using

// #include<bits/stdc++.h>

// using namespace std;

// queue<int> q1;
// queue<int> q2;



// void push(int x){

//    q2.push(x);
//    while(!q1.empty()){
//     	q2.push(q1.front());
//     	q1.pop();
//    }
//    swap(q1,q2);

// }

// int top(){
// 	return q1.front();
// }

// void pop(){
//     q1.pop();
// }







// int main(){
// 	push(10);
// 	push(5);

// 	push(8);

// 	push(2);
// 	cout<<top()<<endl;
// 	pop();




// }

/*
// using single queue



#include<bits/stdc++.h>

using namespace std;

queue<int> q1;




void push(int x){
  q1.push(x);
  for(int i=0;i<q1.size()-1;i++){
  	q1.push(q1.front());
  	q1.pop();
  }
}

int top(){
	return q1.front();
}

void pop(){
	 q1.pop();
}







int main(){
	push(10);
	push(5);

	push(8);

	push(2);
	cout<<top()<<endl;
	pop();
	cout<<top()<<endl;




}

*/



// time complexity N and space comeplexity N but double stack is 2N 



// queue implementing using stack


// all the case is N complexity and 2N space stack

// algo 

// s1 to s2
// x push in s1
// s2 all elemennt push s1
/*
#include<bits/stdc++.h>

using namespace std;

stack<int> s1;
stack<int> s2;


void push(int x){
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	s1.push(x);
	while(!s2.empty()){
		s1.push(s2.top());
		s2.pop();
	}



}

void pop(){
	s1.pop();

}

int top(){

	return s1.top();

}


int main(){

	push(5);

	push(8);

	push(2);
	cout<<top()<<endl;
	pop();
	cout<<top()<<endl;
   

}
*/



// using input  output stack time complexity reduce push  1 and pop almost every time 1 sometimes O(N) 
/*

#include<bits/stdc++.h>

using namespace std;

stack<int> input;
stack<int> output;


void push(int x){
   input.push(x);
}

void pop(){
    if(!output.empty()) output.pop();
    else{
    	while(!input.empty()){
		output.push(input.top());
		input.pop();
	    }
	    output.pop();
    }

}

int top(){

	 if(!output.empty()) return output.top();
     else{
    	while(!input.empty()){
		output.push(input.top());
		input.pop();
	    }
	    return output.top();
    }

}


int main(){

	push(5);

	push(8);

	push(2);
	cout<<top()<<endl;
	pop();
	cout<<top()<<endl;
   

}
*/



// five sorting algorithms
/* 

//selction
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
	for(int i=0;i<v.size()-1;i++){
		int minindex=i;
		for(int j=i+1;j<v.size();j++){
			if(v[minindex]>v[j]) minindex=j;
		}
		if(minindex !=i)swap(v[i],v[minindex]);

	}
}

int main(){
	vector<int> v(5);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	selectionSort(v);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
*/


// buble sort
/*
#include<bits/stdc++.h>
using namespace std;

void bubleSort(vector<int> &v){

	int didswap=0;
	for(int i=0;i<v.size()-1;i++){
		for(int j=0;j<v.size()-i;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				didswap=1;

			} 
		}
		if(didswap==0) break;
	}

}

// worst and averge N^2 but if already sorted so it would be N 


int main(){
	vector<int> v(10);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	bubleSort(v);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}


*/

/*
// insertion sort

#include<bits/stdc++.h> 

using namespace std;


void insertionSort(vector<int> &v){
	for(int i=1;i<v.size();i++){
		for(int j=i;j>0;j--){
			if(v[j]<v[j-1]) swap(v[j],v[j-1]);
			else break;
	     }
	}

}

int main(){
	vector<int> v(10);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	insertionSort(v);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

}


*/





// quick sort
/*
#include<bits/stdc++.h> 

using namespace std;

int partition(vector<int> &v,int low, int high){
	int pivot=v[low];
	int i=low+1;
	int j=high;
	while(i<j){
		while(v[i]<=pivot&& i<=high) i++;
		while(v[j]>pivot&& j>=low) j--;
		if(i<j)swap(v[i],v[j]);
	}
	swap(v[low],v[j]);
	return j;
}


void quickSort(vector<int> &v,int low, int high){
	if(low<high){
		int parIndex=partition(v,low,high);
		quickSort(v,low,parIndex-1);
		quickSort(v,parIndex+1,high);
	}
}

int main(){
	vector<int> v(10);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	quickSort(v,0,v.size() - 1);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;

}

if sorted time complexity O(n2) other wise nlogn

*/

// marge sort
/*#include<bits/stdc++.h>
using namespace std;

void marge(vector<int> &v,int low,int mid, int high){
	vector<int> temp;
	int left=low;
	int right=mid+1;
	while(left<=mid && right<=high){
		if(v[left]<=v[right]){
			temp.push_back(v[left]);
			left++;
		}
		else{
			temp.push_back(v[right]);
			right++;
		}
	}
	
	while(left<=mid){
			temp.push_back(v[left]);
			left++;
		}

	
	
	while(right<=high){
			temp.push_back(v[right]);
			right++;
		}
		
	for(int i=low;i<=high;i++){
		v[i]=temp[i-low];

	}

}


void margeSort(vector<int> &v,int low,int high){
	if(low<high) {
	int mid=low+(high-low)/2;
	margeSort(v,low,mid);
	margeSort(v,mid+1,high);
	marge(v,low,mid,high);
   }
}

int main(){
	vector<int> v(10);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	margeSort(v,0,v.size() - 1);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;

}

*/
// all type linked list  linklist is linear datastrcuter
// arr no change in run time but linked list and vector need new storage when update size then copy the value.


//singly

// linked list is a collection of node
//node is data and next node address /pointer of node type


// #include<bits/stdc++.h>

// using namespace std;
// class Node{
//  public:
//      int data;
//      Node* next;
//      Node(int data){
//      	this->data=data;
//      	this->next=NULL;
//      }
//      ~Node(){
//      	int value =this->data;
//      	if(this->next !=NULL){
//      		delete next;
//      		this->next=NULL;

//      	}
//      	cout<<"memory is free for node with data"<<value<<endl;
//      }
// };

// void InsetAtHead(Node* &head,int d){
// 	Node* temp=new Node(d);
// 	temp->next=head;
// 	head=temp;

// }
// void InsetAtTail(Node* &tail,int d){
// 	Node* temp=new Node(d);
// 	tail->next=temp;
// 	tail=temp;

// }
// void InsetAtPosition(Node* &head,Node* &tail,int postion,int d){

// 	if(postion==1){
// 	InsetAtHead(head,d);
// 	return;
//     }
// 	Node* temp=head;
// 	int cnt=1;
// 	while(cnt<postion-1){
// 		temp=temp->next;
// 		cnt++;
// 	}
// 	if(temp->next==NULL){
// 		InsetAtTail(tail,d);
// 		return;

// 	} 
// 	Node* nodeToinsert=new Node(d);
// 	nodeToinsert->next=temp->next;
// 	temp->next=nodeToinsert;
// }


// void deleteNode( int position, Node* &head,Node* &tail){
// 	if(position==1){
// 		Node* temp=head;
// 		head=temp->next;
// 		temp->next=NULL;
// 		delete temp;

// 	}
// 	Node* curr=head;
// 	Node* prev=NULL
// 	int cnt=1;
// 	while(cnt<postion){
// 		prev=curr;
// 		curr=curr->next;
// 		cnt++;
// 	}
// 	if(curr->next==NULL) tail=prev;
// 	prev->next=curr->next;
// 	curr->next=NULL;
// 	delete curr;
// }


// void print(Node* &head){ 
// 	Node* temp=head;
// 	while(temp!=NULL){
// 		cout<<temp->data<<" ";
// 		temp=temp->next;
// 	}

//    cout<<endl;
// }

// int main(){
// 	Node* node1=new Node(10);
// 	Node* head=node1;
// 	Node* tail=node1;


// 	// cout<<node1 -> data<<endl;

// 	// cout<<node1->next<<endl;
// 	InsetAtHead(head,22);
// 	InsetAtHead(head,32);
// 	InsetAtTail(tail,11);
// 	InsetAtPosition(head,tail,3,11);
// 	InsetAtPosition(head,tail,1,5);

	

// 	print(head);

//   return 0;
// }


//doubly

// #include<bits/stdc++.h>

// using namespace std;
// class Node{
//  public:
//      int data;
//      Node* prev;
//      Node* next;
//      Node(int data){
//      	this->data=data;
//      	this->prev=NULL;
//      	this->next=NULL:
//      }
//      ~Node(){
//      	int value =this->data;
//      	if(next !=NULL){
//      		delete next;
//      		next=NULL;

//      	}
//      	cout<<"memory is free for node with data"<<value<<endl;
//      }
// };

// void InsetAtHead(Node* &head,Node* &tail,int d){
// 	if(head==NULL){
// 		Node* temp=new Node(d);
// 		head=temp;
// 		tail=temp;

// 	}else{
// 	Node* temp=new Node(d);
// 	temp->next=head;
// 	head-prev=temp;
// 	head=temp;
// 	tail=temp
//   }

// }
// void InsetAtTail(Node* &head,Node* &tail,int d){
// 	if(tail==NULL){
// 		Node* temp=new Node(d);
// 		head=temp;
// 		tail=temp;


// 	}else{
// 	Node* temp=new Node(d);
// 	tail->next=temp;
// 	temp->prev=tail;
// 	tail=temp;
//    }

// }
// void InsetAtPosition(Node* &head,Node* &tail,int postion,int d){

// 	if(postion==1){
// 	InsetAtHead(head,d);
// 	return;
//     }
// 	Node* temp=head;
// 	int cnt=1;
// 	while(cnt<postion-1){
// 		temp=temp->next;
// 		cnt++;
// 	}
// 	if(temp->next==NULL){
// 		InsetAtTail(tail,d);
// 		return;

// 	} 
// 	Node* nodeToinsert=new Node(d);
// 	nodeToinsert->next=temp->next;
// 	temp->next->prev=nodeToinsert;
// 	temp->next=nodeToinsert;
// 	nodeToinsert->prev=temp;
// }


// void deleteNode( int position, Node* &head,Node* &tail){
// 	if(position==1){
// 		Node* temp=head;
// 		temp->next->prev=NULL;
// 		head=temp->next;
// 		temp->next=NULL;
// 		delete temp;

// 	}
// 	Node* curr=head;
// 	Node* prev=NULL
// 	int cnt=1;
// 	while(cnt<postion){
// 		prev=curr;
// 		curr=curr->next;
// 		cnt++;
// 	}
// 	if(curr->next==NULL) tail=prev;
// 	curr->prev=NULL;
// 	prev->next=curr->next;
// 	curr->next=NULL;
// 	delete curr;
// }


// void print(Node* &head){ 
// 	Node* temp=head;
// 	while(temp!=NULL){
// 		cout<<temp->data<<" ";
// 		temp=temp->next;
// 	}

//    cout<<endl;
// }

// int getLength(Node* &head){ 
// 	Node* temp=head;
//     int len=0;
// 	while(temp!=NULL){
// 		len++;
// 		temp=temp->next;
		
// 	}

//    return len;
// }

// int main(){
// 	Node* head=NULL;
// 	Node* tail=NULL;


// 	// cout<<node1 -> data<<endl;

// 	// cout<<node1->next<<endl;
// 	InsetAtHead(head,22);
// 	InsetAtHead(head,32);
// 	InsetAtTail(tail,11);
// 	InsetAtPosition(head,tail,3,11);
// 	InsetAtPosition(head,tail,1,5);

	

// 	print(head);

//   return 0;
// }





//circular
//no need head pointer . by the tail pointer we can access head node
/*
#include<bits/stdc++.h>

using namespace std;
class Node{
 public:
     int data;
     Node* next;
     Node(int data){
     	this->data=data;
     	this->next=NULL;
     }
     ~Node(){
     	int value =this->data;
     	if(this->next !=NULL){
     		delete next;
     		this->next=NULL;

     	}
     	cout<<"memory is free for node with data"<<value<<endl;
     }
};

void InsetAtNode(Node* &tail,int element,int d){
	//assuming that the element is present in the list
	if(tail==NULL){
		Node* temp=new Node(d);
		tail=temp;
		temp->next=temp;
	}
	else{
		//non empty list
		 Node* curr=tail;
		 while(curr->data !=element){
		 	curr=curr->next;
		 }
	 	
  
	 	Node* temp=new Node(d);
	 	temp->next=curr->next;
	 	curr->next=temp;

	}

}

void deleteNode(Node* &tail, int value){
	if(tail==NULL){
		cout<<"list is empty"<<endl;
		return;
	}
	else{
	  Node* prev=tail;
	  Node* curr=prev->next;
	  while(curr->data !=value){
	  	prev=curr;
	  	curr=curr->next;
	  }

	  prev->next=curr->next;
	  if(curr== prev){
	  	tail=NULL;
	  }
	  if(tail==curr){
	  	tail=prev;
	  }
	  curr_>next=NULL;
	  delete curr;
	}
	
}


void print(Node* tail){ 
	Node* temp=tail;
	// for single node use do while
	if(tail==NULL){
		cout<<"list is empty"<<endl;
		return;
	}
	do{
       cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail->next!=temp)
   cout<<" ";
}

int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;


	// cout<<node1 -> data<<endl;

	// cout<<node1->next<<endl;
	InsetAtHead(head,22);
	InsetAtHead(head,32);
	InsetAtTail(tail,11);
	InsetAtPosition(head,tail,3,11);
	InsetAtPosition(head,tail,1,5);

	

	print(head);

  return 0;
}

*/

// circular doubly






// Binary search tree




 
// Tree Travarsal

// preorder


/*
#include<iostream>
using namespace std;
 
struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Function to visit nodes in Preorder
void Preorder(struct Node *root) {
	// base condition for recursion
	// if tree/sub-tree is empty, return and exit
	if(root == NULL) return;

	printf("%c ",root->data); // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%c ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%c ",root->data); // Print data
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
 
int main() {
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
/*	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Preorder. 
	cout<<"Preorder: ";
	Preorder(root);
	cout<<"\n";
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
	//Print Nodes in Postorder
	cout<<"Postorder: ";
	Postorder(root);
	cout<<"\n";
}
*/

// time complexity o(n);

// space complexity o(h), worst o(n), best and average O(logn) because of divide log2 base



// binary search






// Two pointer approach



// Graph



// basic recursion





// dynamic programming