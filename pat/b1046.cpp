#include <stdio.h>

int main(void)
{
  unsigned int A_in,A_out,B_in,B_out;
  int n;
  int A_count=0,B_count=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d%d%d%d",&A_in,&A_out,&B_in,&B_out);
    if(A_out==A_in+B_in && B_out==A_in+B_in)
      ; // if equal do nothing
    if(A_out!=A_in+B_in && B_out!=A_in+B_in)
      ; // if both not equal do nothing
    if(A_out==A_in+B_in && B_out!=A_in+B_in)
      B_count++; // if a win b++
    if(A_out!=A_in+B_in && B_out==A_in+B_in)
      A_count++; // if b win a++
  }
  printf("%d %d",A_count,B_count);
  return 0;
}
