#include<stdio.h>
struct point{
    point(int _x,int _y):x(_x),y(_y){}
    int x;
    int y;
};
void houselocation(point division,point house){
    if (house.x == division.x || house.y == division.y)printf("divisa\n");
    else if (house.x < division.x && house.y > division.y)printf("NO\n");
    else if (house.x > division.x && house.y > division.y)printf("NE\n");
    else if (house.x > division.x && house.y < division.y)printf("SE\n");
    else if (house.x < division.x && house.y < division.y)printf("SO\n");
}
int main(){
    int k;
    int x,y;
    while(scanf("%d",&k),k){
        scanf("%d%d",&x,&y);
        point division(x,y);
        while(k--){
            scanf("%d%d",&x,&y);
            point house(x,y);
            houselocation(division,house);
        }
    }
}
