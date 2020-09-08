/**
输入一个数n(1<=n<=200),然后输入n个数值各不相同的数，
再输入一个值x,输出这个值在这个数组的下标。(从0开始，若不在数组中则输出-1)

例子：
4
1 2 3 4 
3
输出：
2
*/

#include <cstdio>
const int maxn = 210;
int a[maxn];  // 存放n个数
int main() {
  int n, x;
  while(scanf("%d", &n) != EOF) {
    for(int i = 0; i < n; i++) {
      scanf("%d", &a[i]); // 输入n个数
    }

    scanf("%d", &x); // 输入需要查询的值
    int k;
    for(k = 0; k < n; k++) {
      if(a[k] == x) { // 如果查询到x
        printf("%d\n", k); // 输出对应的下标
        break;
      }
    }

    if (k == n) { // 没有查询到
      printf("-1\n");
    }
  }
  return 0;
}
