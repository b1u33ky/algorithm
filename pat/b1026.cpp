#include <stdio.h>
#include <time.h>

int main(void)
{
  unsigned int C1,C2;
  unsigned int result;

  scanf("%d%d",&C1,&C2);
  result=C2-C1;
  if(result%100<50)
    result=result/100;
  else
    result=result/100+1;

  printf("%02d:%02d:%02d",(result/60)/60,((result/60)%60),result%60);

  return 0;
}
