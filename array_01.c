#include<stdio.h>
int main(){
int num[10]={1,2,3,4,5,6,7,8,9,10};
int *ptr=&num[10];
int i;*
do{
    printf("The value is mark %d is %d \n",i,*(ptr+2));
    i++;
}
while(i<=10);
return 0;
}

