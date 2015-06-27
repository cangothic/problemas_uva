#include<bits/stdc++.h>
using namespace std;
const double EPS = 1e-9;
struct point{
    double x,y,z;
    point(){x=y=z=0;}
    point(double _x,double _y,double _z):x(_x),y(_y),z(_z){}
    bool operator < (point other)const{
        if (fabs(x - other.x) > EPS){
            return x < other.x;
        }
        else if(fabs(y - other.y) > EPS){
            return y < other.y;
        }
        return z<other.z;
    }
};
double euclidiandist(point a,point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2));
}
int main(){
    vector<point> points;
    double distancia;
    double minima;
    int x,y,z;
    int histogram[10]={0};
    while(scanf("%d%d%d",&x,&y,&z),(x || y || z)){
        points.push_back(point(x,y,z));
    }
    sort(points.begin(),points.end());
    int i=0;
    for(;i<points.size();i++){
        minima=10;
        point &revisar=points[i];
        point vecino;
        for(int j=i+1;j<points.size();j++){
            vecino=points[j];
            if(abs(revisar.x-vecino.x)>=10)break;
            distancia=euclidiandist(revisar,vecino);
            minima=min(distancia,minima);
        }
        for(int j=i-1;j>=0;j--){
            vecino=points[j];
            if(abs(revisar.x-vecino.x)>=10)break;
            distancia=euclidiandist(revisar,vecino);
            minima=min(distancia,minima);
        }
        int dismin=minima;
        if(dismin<10){
            histogram[dismin]++;
        }
    }
    for(int k=0;k<10;k++){
        printf("%4d",histogram[k]);
    }
    printf("\n");
}
