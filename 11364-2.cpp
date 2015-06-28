#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int tc,n,temp;
    scanf("%d",&tc);
    while(tc--){
        int minimum=100,maximum=-100;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&temp);
            minimum=min(minimum,temp);
            maximum=max(maximum,temp);
        }
        printf("%d\n",2*(maximum-minimum));
    }
}

