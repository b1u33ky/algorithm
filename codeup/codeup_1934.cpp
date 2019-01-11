#include <cstdio>

const int maxn = 210;
int a[maxn] = {0};                    // storage n integer

int main(void)
{
    unsigned int n;
    scanf("%d",&n);
    for (int i =0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    unsigned int the_number;
    scanf("%d",&the_number);
    unsigned int footprint = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == the_number)
            footprint = i;
    }
    printf("%d",footprint);
    return 0;
}
