#Include <cstdio>

int main(void)
{
  unsigned int n;
  int count[5]={0};
  int ans[5]={0};
  int temp=0;
  double average_of_3=0.0;
  int max_of_4=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&temp);
    if(temp%5==0){
      if(temp%2==0){
        count[0]++;
        ans[0]+=temp;
      }
      else
        ;                       // else do nothing
    }else if(temp%5==1){
      count[1]++;
      if(count[1]%2==1){
        ans[1]+=temp;
      }else{
        ans[1]-=temp;
      }
    }else if(temp%5==2){
      count[2]++;
      ans[2]++;
    }else if(temp%5==3){
      count[3]++;
      ans[3]+=temp;
    }else{
      count[4]++;
      if(max_of_4<temp)
        max_of_4=temp;
    }
  }
  average_of_3=(double)ans[3]/(double)count[3];
  if(count[0]==0) printf("N ");
  else printf("%d ",ans[0]);
  if(count[1]==0) printf("N ");
  else printf("%d ",ans[1]);
  if(count[2]==0) printf("N ");
  else printf("%d ",ans[2]);
  if(count[3]==0) printf("N ");
  else printf("%.1f ",(double)ans[3]/count[3]);
  if(count[4]==0) printf("N");
  else printf("%d",max_of_4);

  return 0;
}
