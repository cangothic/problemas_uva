#include<bits/stdc++.h>
using namespace std;
const double EPS = 1e-9;
struct vect{
    double x,y;
    vect(){x=y=0;}
    vect(double _x,double _y):x(_x),y(_y){}
    vect operator +(vect other){
        return vect(x+other.x,y+other.y);
    }
    vect operator *(double s){
        return vect(x*s,y*s);
    }
};
double mod(vect v){
    return hypot(v.x,v.y);
}
map<string,vect> card;

int main(){
    double cuart=sqrt(1.0/2.0);
    card["N"]=vect(0,1);card["NE"]=vect(cuart,cuart);card["E"]=vect(1,0);card["SE"]=vect(cuart,-cuart);
    card["S"]=vect(0,-1);card["SW"]=vect(-cuart,-cuart);card["W"]=vect(-1,0);card["NW"]=vect(-cuart,cuart);
    string l;
    int mapa=0;
    while(true){
        vect posicion=vect(0.0,0.0);
        getline(cin,l);
        if(l=="END")break;
        if(l[l.size()-1]!='.'){
            l.append(".");
        }
        int inicio=0;
        int fin=0;
        while(true){
            fin=l.find(',',inicio);
            string sub =l.substr(inicio,fin-inicio);
            int numero=0;
            int continua=0;
            if(sub.find('.')==-1){
                inicio=fin+1;
                for(int i=0;i<sub.size();i++){
                    if(sub[i]>='0' and sub[i]<='9'){
                        continua=i;
                        numero = numero*10;
                        numero += (sub[i]-'0');
                    }
                }
                continua++;
                sub=sub.substr(continua,sub.size()-continua);
                posicion=posicion+(card[sub]*numero);
            }
            else{
                sub=sub.substr(0,sub.size()-1);
                for(int i=0;i<sub.size();i++){
                    if(sub[i]>='0' and sub[i]<='9'){
                        continua=i;
                        numero = numero*10;
                        numero += (sub[i]-'0');
                    }
                }
                continua++;
                sub=sub.substr(continua,sub.size()-continua);
                posicion=posicion+(card[sub]*numero);
                break;
            }
        }
        mapa++;
        printf("Map #%i\n",mapa);
        printf("The treasure is located at (%.3f,%.3f).\n",posicion.x,posicion.y);
        printf("The distance to the treasure is %.3f.\n\n",mod(posicion));
    }
}
