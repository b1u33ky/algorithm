#include <cstdio>

typedef struct {
    int expo;
    int coef;
} Polynomial;

Polynomial term[100] = {0};

int main(void)
{
    unsigned int k;
    int expo[100] = {0};
    int coef[100] = {0};
    scanf("%d",&k);
    for (int i = 0; i < k; i++) {
        Polynomial term_1;
        scanf("%d%d",&term[i].expo,&term[i].coef);
    }
    for (int i = 0; i < k; i++) {

    }
    return 0;
}
