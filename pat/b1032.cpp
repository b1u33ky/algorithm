#include <cstdio>

const int maxn=100010;          // there is an error(segment fault)
                                // when maxn=10010,it's very odd.
int school[maxn]={0};

int main(void)
{
  int n,schID,score;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d%d",&schID,&score);
    school[schID]+=score;
  }
  int k=1;
  int max=-1;
  for(int i=1;i<=n;i++){        //schID from 1
    if(max<school[i]){
      max=school[i];
      k=i;
    }
  }
  printf("%d %d",k,max);        //there is a space between two integers
  return 0;
}
