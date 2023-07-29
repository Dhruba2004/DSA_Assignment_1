#include <stdio.h>
#include <limits.h>
int main ()
{
    int arr[6] = {1,2,3,4,5,6};
    int max = INT_MIN;
    int smax =INT_MIN;

    for(int i=0;i<=5;i++){
        if(max<arr[i]){
        smax=max;//smax is previous max
        max = arr[i];// max is  now a new max
    }
    else if(smax<arr[i] && max!=arr[i]){
        smax=arr[i];

    }
   }
    printf("%d is the second largest element",smax);
    return 0;
    
}