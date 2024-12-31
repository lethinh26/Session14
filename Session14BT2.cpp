#include <stdio.h>
#include <string.h>
int main() {
    char array[100];
    printf("Nhap chuoi bat ki: ");
    fgets(array, 100, stdin);
    for (int i = 0; i < strlen(array); i++) {
        printf("%c ", array[i]);
    }
    return 0;
}