#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
  int n;
  char number[7];
  scanf("%d",&n);
  while (n--) {
    scanf("%s",&number);
    if(strlen(number)==5){
      printf("3\n");
    }
    else if((number[0]=='o' && number[1]=='n')||
            (number[0]=='o' && number[1]=='e')||
            (number[1]=='n' && number[2]=='e')||
            (number[0]=='o' && number[2]=='e')||
            (number[0]=='o' && number[2]=='n')){
              printf("1\n");
    }
    else{printf("2\n");}
  }
  return 0;
}
