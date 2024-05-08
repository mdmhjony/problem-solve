// delete duplicate


// #include<bits/stdc++.h>

// using namespace std;
// const int N=1e5+7;
// vector<int> vec(N);


// int main(){
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	cin>>vec[i];
	// }
	
	// sort(vec.begin(),vec.begin()+n);
	
	// int i=0,j=0,k=0;
	// while(j<vec.size()){
	// 	if(vec[i]==vec[j])j++;
	// 	else{
	// 		k++;
	// 		vec[k]=vec[j];
	// 		i=j;
	// 	}
	// }

	// cout<<endl;

	// for(int i=0;i<k;i++){
	// 	cout<<vec[i]<<" ";
	// }

	// /*for(int i=0;i<n;i++){
	// 	cout<<vec[i]<<" ";
	// }*/


// }


// zero mover code
/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
vector<int> vec(N);

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int countZero=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]==0) countZero++;
	}
	int k=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i] !=0){
			vec[k]=vec[i];
			k++;
		}
	}
	while(countZero>0){
		vec[k]=0;
		k++;
		countZero--;
	}
	
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}


}

*/

//Find the second-highest element in a given array.

/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
vector<int> vec(N);

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.begin()+n);
	int i=n-1;
	
	while(i>0){
		if((vec[n-1] )!=vec[i]) {
            
			cout<<vec[i];
			break;

		  }
		  i--;
		
	}*/

	/*for(int i=n-1;i>0;i--){
		if(vec[n-1] != vec[i]) {
			cout<< vec[i];
			break;
		}

	}*/
	/*for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}

*/
// }



/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
vector<int> vec(N);

int main(){
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b;
	
}
*/






/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
unordered_map<int, int > mp;

int main(){
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
    	int key,value;
    	cin>>key>>value;
    	mp.insert({key,value});
    }

	// unordered_map<int, int >:: iterator it;
	for(auto it=mp.begin();it !=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;

	}
	
}
*/


/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
set<int> st;

int main(){
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
    	int value;
    	cin>>value;
    	st.insert(value);
    }

	set<int>:: iterator it;
	for(it=st.begin();it !=st.end();it++){
		cout<<*it<<endl;

	}
	
}

*/

// two sum
/*
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
vector<int > v(N);

int main(){
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	
    }
    int target;
    cin>>target;
    int more;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        more = target-v[i];
        if(mp.find(more) !=mp.end()){
        	cout<< i <<" "<<mp[more]<<endl;
        	break;
        }
        else{
        	mp[v[i]]=i;
        }
    }

	
	//  for(int i=0;i<n;i++){
    // 	cout<<v[i]<<" ";
    	
    // }
	
}

*/
/*#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;

	// cin >>s;
	// cout<<s.length();
	getline(cin,s);
	// cout<<s.length()<<endl;
	int j=0;
	for(int i=0;i<s.length();i++){
		if(s[i] !=' '){
			s[j]=s[i];
			j++;
		}

	}
	int check=1;
    for(int i=0;i<j/2;i++){
    	if(s[i] !=s[j-i-1]) {
    		cout<< "Not"<<endl;
            check=0;
    		break;
    	}

    }
    if(check)cout<<"yes"<<endl;

}

*/

// transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
// transform(s2.begin(), s2.end(), s2.begin(), ::tolower);


// 

/*

#include<bits/stdc++.h>

using namespace std;
const int N=1e5+7;
vector<int>v(N);

void binarySearch(vector<int> &v, int n,int element){
	int low=0;
	int high=n-1;
	while(high-low>1){
		int mid=(high+low)/2;
		if(v[mid]>element){
          high=mid-1;
		}
		else{
			low=mid;


		}
		


	}
	if(v[high]==element)cout<<v[high]<<endl;
	if(v[low]==element)cout<<v[low]<<endl;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
    
    sort(v.begin(),v.begin()+n);

    binarySearch(v,n,4);

    for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}

}

*/
// void binarySearch(vector<int> &v, int n, int element) {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high) { // Corrected condition
//         int mid = low + (high - low) / 2;
//         if (v[mid] == element) {
//             cout << "Element found at index " << mid << endl;
//             return;
//         } else if (v[mid] < element) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     cout << "Element not found" << endl; // Element not found in the array
// }