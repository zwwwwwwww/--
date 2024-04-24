#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
int dx[8]={2,-2,2,-2,-1,1,-1,1};
int dy[8]={1,1,-1,-1,2,2,-2,-2};

int ans[401][401];
int check(int a,int b)
//检查是否越界 
{
    if(a<1||a>n||b<1||b>m)
        return 0;
    return 1;
}
void dfs(int a,int b,int sum)//a和b是当前搜到的坐标，sum为步数 
{
    int nx,ny;
    ans[a][b]=sum;//将答案标记 
    for(int i=0;i<8;i++)//搜索八个方向 
	{
        nx=a+dx[i];
        ny=b+dy[i];//扩展新点 
        if(check(nx,ny)&&(sum+1<ans[nx][ny]||ans[nx][ny]==-1))//步数比原先搜到的小或没搜到过 
            dfs(nx,ny,sum+1);//搜索下一个 
    }
}
int main()
{
    cin>>n>>m;
    cin>>x>>y;
    memset(ans,-1,sizeof(ans));//初始化 
    dfs(x,y,0);//搜索 
    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=m;j++)
            printf("%-5d",ans[i][j]);
        cout<<endl;
    }
    return 0;
}
