#include<stdio.h>
int main(){

int T = 0;
int n = 0;
int i = 1;
char *D[30];

scanf("%d", &T);
for(i=1;i<=T;i++){
scanf("%d", &n);

if( n%2 == 0)
    D[i-1] = "even";
else
   D[i-1] = "odd";
}
for(i=1;i<=T;i++)
    printf("%s\n", D[i-1]);
}
