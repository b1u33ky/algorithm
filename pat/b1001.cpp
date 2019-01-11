#include <cstdio>
int main()
{
  unsigned int num=0;
  int count=0;
  scanf("%d",&num);
  while(num!=1){
    if(num%2 == 0){
      num=num/2;
      count++;
    }else{
      num=(3*num+1)/2;
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
