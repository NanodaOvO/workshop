#include <stdio.h>
#include <stdlib.h>

int cmp(const void *lhs, const void *rhs){
    return *(int*)lhs - *(int*)rhs ;
}

int main(){
    int a,b,c,n;
    scanf("%d%d%d", &a, &b, &c);
    int values[] = {a, b, c};
    qsort(values, 3, sizeof(int), cmp);
    for(n = 0 ; n < 3; n++){
        printf("%d ", values[n]);
    }
    return 0;
}