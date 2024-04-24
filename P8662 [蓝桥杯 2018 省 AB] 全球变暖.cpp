#include<iostream>
#include<queue>
using namespace std;
int n;
int ans=0;
bool flag=false;
char data[1002][1002];
int visted[1002][1002];
typedef struct poin{
	int x,y;
}Point;
void dfs(Point p){
	queue<Point> myqueue;
	myqueue.push(p);
	while(myqueue.size()){
		Point nextp=myqueue.front();
		int x=nextp.x;
		int y=nextp.y;
		visted[x][y]=1;
		if(data[x-1][y]=='#' && data[x+1][y]=='#' && data[x][y-1]=='#' && data[x][y+1]=='#'){
			flag=true;
		}
		if(x-1>=0 && data[x-1][y]=='#' && visted[x-1][y]==0){
			Point upp={x-1,y};
			myqueue.push(upp);
		}
		if(x+1<n && data[x+1][y]=='#' && visted[x+1][y]==0){
			Point downp={x+1,y};
			myqueue.push(downp);
		}
		if(y-1>=0 && data[x][y-1]=='#' && visted[x][y-1]==0){
			Point leftp={x,y-1};
			myqueue.push(leftp);
		}
		if(y+1<n && data[x][y+1]=='#' && visted[x][y+1]==0){
			Point rightp={x,y+1};
			myqueue.push(rightp);
		}
		myqueue.pop();
		
	}
}
int main(){
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>data[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			
			if(data[i][j]=='#' && visted[i][j]==0){
				Point p;
				p.x=i;
				p.y=j; 
				flag=false;
				dfs(p);
				
				if(!flag) ans++;
				
			}
		}
	}
	
	cout<<ans<<endl;
 	return 0;
}
