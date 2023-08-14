#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    float a, w, s, d, p; 
    printf("Enter your fish size: \n");
    scanf("%f", &a);
    a = a + 14; p = a / 10; d = 4.72 / a; 
     for (s = floor(p); s >= -ceil(p); s--){
        for (w = 0; w <= 4; w = w + d){
            if((s<p/2 && s>p/4 && w<1 && w>0.8)|| (s == 0 && w<0.6) || (pow (s/p,2)
            >= pow(sin(w),2))){
            printf(" ");
        }
        else{
            printf("*");
        }
        }
        printf("\n");
     }
     return 0;
}