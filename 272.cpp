#include <stdio.h>
int main(){
    bool a=true;
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='"'){
            if(a){
                printf("``");
            }
            else{
                printf("''");
            }
            a=!a;
        }
        else{
            printf("%c",ch);
        }
    }
}
