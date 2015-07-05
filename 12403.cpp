#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  char operation[10];
  int tc,donate;
  long long total=0;
  scanf("%d",&tc);
  while (tc--) {
    scanf("%s",&operation);
    if (strcmp(operation,"donate")==0) {
      scanf("%d",&donate);
      total+=donate;
    }
    else printf("%d\n",total);
  }
  return 0;
}
