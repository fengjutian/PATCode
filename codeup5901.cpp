#include <cstdio>
#include <cstring>

const int maxn = 256;

bool judge(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    // 枚举字符串的前一半
    if(str[i] != str[len - 1 - i]) { // 如果对称位置不同
      return false; // 不是“回文串”
    }
  }
  return true; // 是“回文串”
}

int main() {
  char str[maxn];
  while(gets(str)) {
    // 输入字符串
    bool flag = judge(str);
    if (flag == true) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}