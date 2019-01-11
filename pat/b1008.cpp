#include <cstdio>

int main(void)
{
  unsigned int n,m,count=0;
  scanf("%d%d",&n,&m);
  m=m%n;                        // 长度为n的序列,循环右移n位之后和当前序列一样
  int a[110]={0};
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=n-m;i<=n-1;i++){
    printf("%d",a[i]);
    count++;
    if(count!=n)
      printf(" ");
    else
      ;
  }
  for(int i=0;i<=n-m-1;i++){
    printf("%d",a[i]);
    count++;
    if(count!=n)
      printf(" ");
    else
      ;
  }
  return 0;
}
