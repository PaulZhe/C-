#include <iostream>
#include <cstring>
using namespace std;
int max(int x, int y)
{
    return x>y?x:y;
}
int main()
{
    int v,n;
    cin >> v >> n;
    int a[n];
    int dp[v+1];
    memset(dp, 0, sizeof(dp));
    /*
     分析：背包型动态规划，相当于背包容量和背包中物品价值二者相等的一般背包问题。（貌似也称为伪背包问题）
     对于每一个物品i，都存在放入箱子和不放入箱子两种情况。当前箱子容量剩余j时，若i放入，则为dp[j-a[i]]+a[i])；
     若i不放入，则为dp[i]；因此，状态转移方程为：dp[j] = max(dp[j], dp[j-a[i]]+a[i])。*/
    for(int i=0; i<n; i++)//n个物品循环
    {
        cin>>a[i];
        for(int j=v; j>=a[i]; j--)//剩余容量
        {
            dp[j] = max(dp[j], dp[j-a[i]]+a[i]) ;
        }
    }
    cout << v-dp[v];
}
