/* 
输入格式：
在第1行给出不超过10^5的正整数N,即参数人数。
随后N行，每行给出一位参赛者的信息与成绩，包括其所代表的学校的编号（从1开始连续编号）及其比赛成绩（百分制），
中间以空格分隔。
输出格式：
在一行中给出得分最高的学校的编号及其总分，中间以空格分隔。题目答案唯一，没有并列。
*/

#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main() {
    int n, schID, score;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &schID, &score); // 学校ID,分数
        school[schID] += score; // 学校schID的总分增加score
    }

    int k=1, MAX=-1; // 最高总分数的学校ID以及总分数
    for (int i = 1; i <= n; i++) {
        if(school[i] > MAX) {
            MAX = school[i];
            k = i;
        }
    }

    printf("%d %d\n",k, MAX); // 输出最高总分的学校ID及其总分
    return 0;
}