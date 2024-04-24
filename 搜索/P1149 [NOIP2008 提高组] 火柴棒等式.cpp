#include <iostream>
using namespace std;
int x[1001] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, b[4];
int n, res = 0; //n 火柴根数 
void dfs(int l)
{
    int i;
    for(i = 0; i <= 999; ++i)
    {
        if(n - x[i] >= 0)//还有火柴
        {
            b[l] = i;  //火柴棒数放入数组
            n = n - x[i];  //在总数中减去火柴棒
            if(l == 3) 
            {
                if(b[1] + b[2] == b[3] && n == 0) res++; //满足等式且火柴棒用完
            }
            else dfs(l + 1); //回溯
            n = n + x[i]; //保存之前状态
        }
    }
}
int main()
{
    int i;
    cin >> n;
    n = n - 4;
    for(i = 10; i <= 999; ++i)
     x[i] = x[i / 10] + x[i % 10];
    dfs(1);
    cout << res;
    return 0;
}
