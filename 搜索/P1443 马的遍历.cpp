#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
int dx[8]={2,-2,2,-2,-1,1,-1,1};
int dy[8]={1,1,-1,-1,2,2,-2,-2};

int ans[401][401];
int check(int a,int b)
//����Ƿ�Խ�� 
{
    if(a<1||a>n||b<1||b>m)
        return 0;
    return 1;
}
void dfs(int a,int b,int sum)//a��b�ǵ�ǰ�ѵ������꣬sumΪ���� 
{
    int nx,ny;
    ans[a][b]=sum;//���𰸱�� 
    for(int i=0;i<8;i++)//�����˸����� 
	{
        nx=a+dx[i];
        ny=b+dy[i];//��չ�µ� 
        if(check(nx,ny)&&(sum+1<ans[nx][ny]||ans[nx][ny]==-1))//������ԭ���ѵ���С��û�ѵ��� 
            dfs(nx,ny,sum+1);//������һ�� 
    }
}
int main()
{
    cin>>n>>m;
    cin>>x>>y;
    memset(ans,-1,sizeof(ans));//��ʼ�� 
    dfs(x,y,0);//���� 
    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=m;j++)
            printf("%-5d",ans[i][j]);
        cout<<endl;
    }
    return 0;
}
