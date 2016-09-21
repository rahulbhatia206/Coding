#include<stdio.h>
int main(){
int T = 0;
int n = 0;
int m = 0;
int i = 1;
int r[100];

scanf("%d", &T);
for(i=1;i<=T;i++){
    scanf("%d %d", &n, &m);
    r[i] = n % m;
}

for(i=1;i<=T;i++){

    printf("%d\n", r[i]);
}
}
