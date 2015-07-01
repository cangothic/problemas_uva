#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x,t;
    scanf("%d",&t);
    vector<int> cost;
    for(int i=1;i<=t;i++){
        cost.clear();
        for(int j=0;j<3;j++){
            scanf("%d",&x);
            cost.push_back(x);
        }
        sort(cost.begin(),cost.end());
        printf("Case %d: %d\n",i,cost[1]);
    }
}
