#include<stdio.h>
#include<string.h>
int main(){
    char word[20];
    int c=0;
    while(scanf("%s",&word),strcmp(word,"#")!=0){
        if (strcmp(word, "HOLA") == 0) {
            printf("Case %d: SPANISH\n", ++c);
        }
        else if (strcmp(word, "HELLO") == 0) {
            printf("Case %d: ENGLISH\n", ++c);
        }
        else if (strcmp(word, "HALLO") == 0) {
            printf("Case %d: GERMAN\n", ++c);
        }
        else if (strcmp(word, "BONJOUR") == 0) {
            printf("Case %d: FRENCH\n", ++c);
        }
        else if (strcmp(word, "CIAO") == 0) {
            printf("Case %d: ITALIAN\n", ++c);
        }
        else if (strcmp(word, "ZDRAVSTVUJTE") == 0) {
            printf("Case %d: RUSSIAN\n", ++c);
        }
        else {
            printf("Case %d: UNKNOWN\n", ++c);
        }
    }
}
