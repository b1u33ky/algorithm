#include <cstdio>

int main(void)
{
  long long A,DA,B,DB;
  scanf("%lld%lld%lld%lld",&A,&DA,&B,&DB);
  long long PA=0,PB=0;

  while(A!=0){
    if(A%10==DA)
      PA=PA*10+DA;
    A=A/10;
  }
  while(B!=0){
    if(B%10==DB)
      PB=PB*10+DB;
    B=B/10;
  }
  printf("%lld",PA+PB);

  return 0;
}
