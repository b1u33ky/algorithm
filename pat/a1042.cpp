#include <cstdio>

const int N=54;
int start[N+1],end[N+1],next[N+1];

int main(void)
{
    int k;
    scanf("%d",&k);
    for(int i=1;i<=N;i++){
        start[i]=i;  // 初始化牌的编号
    }
    for(int i=1;i<=N;i++){
        scanf("%d",&next[i]);   // 输入每个位置上的牌在操作后的位置
    }
    for(int step=0;step<k;step++){
        for(int i=1;i<=N;i++){
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++){
            start[i]=end[i];
        }
    }
    for(int i=1;i<=N;i++){
        int temp;
        temp=(start[i]-1)/13;
        if(temp==0)
            printf("S");
        else if(temp==1)
            printf("H");
        else if(temp==2)
            printf("C");
        else if(temp==3)
            printf("D");
        else
            printf("J");
        if(i==N)
            printf("%d",(start[i]-1)%13+1);
        else
            printf("%d ",(start[i]-1)%13+1);
    }

    return 0;
}
