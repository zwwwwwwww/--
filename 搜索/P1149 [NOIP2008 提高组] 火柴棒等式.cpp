#include <iostream>
using namespace std;
int x[1001] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, b[4];
int n, res = 0; //n ������ 
void dfs(int l)
{
    int i;
    for(i = 0; i <= 999; ++i)
    {
        if(n - x[i] >= 0)//���л��
        {
            b[l] = i;  //��������������
            n = n - x[i];  //�������м�ȥ����
            if(l == 3) 
            {
                if(b[1] + b[2] == b[3] && n == 0) res++; //�����ʽ�һ�������
            }
            else dfs(l + 1); //����
            n = n + x[i]; //����֮ǰ״̬
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
