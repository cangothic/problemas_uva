#include <stdio.h>

int main() {
  int tc,event,c=0;
  while (scanf("%d",&tc),tc) {
    int sum=0;
    while (tc--) {
      scanf("%d",&event);
      if(event>0){
        sum++;
      }
      else sum--;
    }
    printf("Case %d: %d\n",++c,sum);
  }
  return 0;
}
