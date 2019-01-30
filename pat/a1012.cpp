#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct Student {
    int id;
    int grade[4];
}stu[2010];

char course[4] = {'A','C','M','E'}; // 按优先级顺序,方便输出
int Rank[10000000][4] = {0};        // Rank[id][0]~Rank[id][4]为4门课对应的排名

int now;                        // cmp函数中使用

bool cmp(Student a, Student b)
{ // stu数组按now号分数递减排序
    return a.grade[now] > b.grade[now];
}

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &stu[i].id, &stu[i].grade[1],
              &stu[i].grade[2], &stu[i].grade[3]);
        stu[i].grade[0] = round((stu[i].grade[1] + stu[i].grade[2] +
                                 stu[i].grade[3]) / 3.0) + 0.5;
    }
    for (now = 0; now < 4; now++) {
        sort(stu, stu + n, cmp);
        Rank[stu[0].id][now] = 1;
        for (int i = 1; i < n; i++) {
            if (stu[i].grade[now] == stu[i - 1].grade[now]) {
                Rand[stu][i]
            } else {
                for
            }
        }
    }
}
