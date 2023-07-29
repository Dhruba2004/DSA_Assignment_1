#include<stdio.h>
int main (){
    int N,i,term;
    int sum=0;
    printf("\nEnter the value of N:");
    scanf("%d",&N);
    for (i=1;i<N+1;i++){
        term=i*i;
        sum+=term;
     }
     printf("Summation up to the %dth term: %d\n", N, sum);
}