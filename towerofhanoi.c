//tower of hanoi
//hanoi

#include<stdio.h>
void transfer(int i , char from ,char to ,char a);
  int main(){
    int i ;
    printf("enter the number of disk  :");
    scanf("%d",&i);
    transfer(i,'L','R','C');
}
void transfer(int i , char from ,char to ,char a)
{
    if (i>0){
        transfer(i-1,from ,a,to);
        printf("Move disk %d from %c to %c \n",i,from , to );
        transfer(i-1 ,a ,to ,from);
    }
    
}