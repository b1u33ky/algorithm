#include <cstdio>
#include <algorithm>
using namespace std;

unsigned int dis[1000] = {0};
unsigned int sum = 0;

unsigned int eval_distance(unsigned int start_vertex, unsigned int end_vertex)
{
    unsigned int distance = 0;
    unsigned int dis_start = 0;
    unsigned int dis_end = 0;
    for (int i = 0; i < start_vertex; i++) {
        dis_start += dis[i];
    }
    for (int i = 0; i < end_vertex; i++) {
        dis_end += dis[i];
    }
    distance = dis_end - dis_start;
    return distance;
}

int main(void)
{
    unsigned int N;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        scanf("%d",&dis[i]);
        sum += dis[i];
    }
    unsigned int temp;
    unsigned int start_vertex,end_vertex;
    scanf("%d",&temp);
    unsigned int distance;
    for (int i = 1; i <= temp; i++) {
        scanf("%d%d",&start_vertex,&end_vertex);
        distance = eval_distance(start_vertex,end_vertex); // The distance between the ends of the clockwise direction
        printf("\n");
        if (distance <= sum - distance)
            printf("%d\n",distance);
        else
            printf("%d\n",sum-distance);
    }
    return 0;
}
