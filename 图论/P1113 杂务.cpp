#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >edge(10000);
long long ans[10000];
int main(){
	int n;
	long long max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int v,w,u;
		cin>>v>>w>>u;
		edge[v].push_back(u);
		ans[v]=w;
		while(u!=0){
			
			cin>>u;
			if(u!=0) edge[v].push_back(u);
		}
		
	}
	
	
	for(int i=1;i<=n;i++){
		
		max=0;
		for(int j=0;j<edge[i].size();j++){
			if(ans[edge[i][j]]>max) {
				max=ans[edge[i][j]];
			
			}
		}
		ans[i]+=max;
	
		
	}
	max=0;
	for(int i=1;i<=n;i++)
		if(ans[i]>max) max=ans[i];
	cout<<max;
	return 0;
} 
