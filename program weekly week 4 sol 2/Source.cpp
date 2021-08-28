#include "stdio.h"
int main() {
    int num;
    scanf_s("%d", &num);
    if (num % 2 != 0) {
        for (int i = 1; i <= (num - 1) / 2; i++) {      
            for (int j = 1; j <= ((num + 1) / 2) ; j++) printf("* ");
            printf("\n");
            for (int j = 1; j <= ((num + 1) / 2) - 1; j++)printf(" *");
            printf("\n");
        }
        for (int i = 1; i <= ((num + 1) / 2); i++) printf("* ");     
    }
    else {
        for (int i = 1; i <= num / 2; i++) {   
            for (int j = 1; j <= ((num) / 2) - 1; j++) printf("* ");
            printf("*\n");
            for (int j = 1; j <= ((num) / 2) - 1; j++)printf(" *");
            printf(" *");
            if (i != num / 2)printf("\n");
        }
    }
    return 0;
}
