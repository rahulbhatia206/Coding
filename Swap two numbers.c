#include<stdio.h>
int main(){

int T = 0;
int a[30];
int b[30];
int i = 1;

scanf("%d", &T);

for(i=1;i<=T;i++){
    scanf("%d %d", &a[i], &b[i]);
    a[i] = a[i] + b[i];
    b[i] = a[i] - b[i];
    a[i] = a[i] - b[i];
}
for(i=1;i<=T;i++){
printf("%d %d \n", a[i], b[i]);

}

}
