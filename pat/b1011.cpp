#include <cstdio>

typedef struct{
  long long a;
  long long b;
  long long c;
}Gabc;

const int maxn=100010;

Gabc array[maxn];

int main(void)
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%lld%lld%lld",&array[i].a,&array[i].b,&array[i].c);
  }
  for(int i=1;i<=n;i++){
    if(array[i].a+array[i].b>array[i].c)
      printf("Case #%d: true",i);
    else
      printf("Case #%d: false",i);
    printf("\n");
  }
  return 0;
}

