#include<cstdio>
#include<cstdlib>
#include<ctime>
int main(){
    srand(time(0));
    int n = 2000;
    int m = 2000;
    printf("%d %d\n",n,m);
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            printf("%d ",rand()%1001);
        }printf("\n");
    }
    int q = 15000;
    printf("%d\n",q);
    for(int i=1;i<=q;++i){
        int x = rand()%(n/3) + 1;
        int y = rand()%(m/3) + 1;
        int a = rand()%(n/2) + n/2;
        int b = rand()%(m/2) + m/2;
        a = (a > n - x + 1) ? (n - x + 1) : a; 
        b = (b > m - y + 1) ? (m - y + 1) : b;
        printf("%d %d %d %d\n",x,y,a,b);
    }
    return 0;
}