#include <stdio.h>

void main(){
    float i = 1.23;
    printf("|%10f|\n", i);
    printf("|%010f|\n", i);
    printf("|%9f|\n", i);
    printf("|%.f|\n", i);
    printf("|%0.f|    ", i); printf("|%0.0f|\n", i);
    printf("|%1.f|    ", i); printf("|%1.0f|\n", i);
    printf("|%2.f|    ", i); printf("|%2.0f|\n", i);
    printf("|%.0f|\n", i);
    printf("|%.1f|\n", i);
    printf("|%.2f|\n", i);
    printf("|%.3f|\n", i);
    printf("|%3.2f|\n", i);
    printf("|%03.2f|\n", i);
    printf("|% 3.2f|\n", i);
}