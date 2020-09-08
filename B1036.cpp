/*
在一行给出正方形边长N(3<=N<=20)和组成正方形的某种字符C,间隔一个空格。
输入：
10 a
输出：
aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa
*/

#include <cstdio>
int main() {
  int row, col; // 行，列
  char c;
  scanf("%d %c", &col, &c); // 输入列数和使用的字符
  if(col % 2 == 1) {
    row = col/2 + 1; // col为奇数，向上取整
  } else {
    row = col/2; // col为偶数
  }

  // 第一行
  for(int i = 0; i < col; i++) {
    printf("%c", c); // col个字符
  }

  printf("\n");

  // 中间的部分
  for(int i = 2; i < row; i++) {
    printf("%c", c); // 每行的第一个a
    for(int j = 0; i < col-2;j++) {
      printf(" "); // 空格
    }

    printf("%c\n", c); // 每行的最后一个a
  }

  // 第row行
  for(int i = 0; i < col; i++) {
    printf("%c", c); // col个字符
  }
  return 0;
}
