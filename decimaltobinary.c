//decimal to binary

#include <stdio.h>
void dtob( int n){
    int binary[50];
    int i = 0;
    while( n>0){
        binary[i] = n %2 ;
        n = n/2;
        i++;
    }
    printf("In binary : ");
    for (int a = i-1 ; i>=0 ;i--){
        printf("%d\n",binary[i]);
    }
}
int main ()
{
    int a ;
    printf("Enter the decimal value : ");
    scanf("%d",&a);
    dtob(a);

    return 0;

}
