#include <cstdio>

// 平年和闰年的每个月的天数
int month[13][2] = { 
  {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30},
  {31, 31},{31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}
}

bool isLeap(int year) { // 判断是不是闰年
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int maain() {
  int time1, y1, m1, d1;
  int time2, y2, m2, d2;

  
}