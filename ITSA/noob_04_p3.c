#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    
    for(int i = 0; i < 6; i++) {
        int num = 0;
        scanf("%d", &num);
        sum += (num * num);
    }
    printf("%d\n", sum);
}