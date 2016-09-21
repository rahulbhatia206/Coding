#include <stdio.h>
int main(){
int a,b;
printf("enter no. a and b sequentially : \n");
 scanf("%d %d", &a , &b);

switch(a/b){

case 0:
    printf("%d", b);
    break;
default :
    printf("%d", a);
    break;

}

}
