#include<stdio.h>
using namespace std;
int main(){
    int tc,n,temp;
    scanf("%d",&tc);
    while(tc--){
        int minimum=100,maximum=-100;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&temp);
            if(temp>maximum){
                maximum=temp;
            }
            if(temp<minimum){
                minimum=temp;
            }
        }
        printf("%d\n",2*(maximum-minimum));
    }
}

