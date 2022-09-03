#include<stdio.h>
int main(){
    int marks[2][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
          printf("Enter the marks of student %d in subject %d:\n",i+1,j+1);
          scanf("%d",&marks[i][j]);
    }   
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
          printf("Enter the marks of student %d in subject %d: %d\n",i+1,j+1,marks[i][j]);
    }   
    }
return 0;
}