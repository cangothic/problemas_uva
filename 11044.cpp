#include<stdio.h>
using namespace std;
int main(){
    int tc,width,high;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d",&width,&high);
        printf("%d\n",(width/3)*(high/3));
    }
}
