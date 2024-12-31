#include <stdio.h>
#include <string.h>
int main() {
    char array[100];
    printf("Nhap chuoi bat ki: ");
    fgets(array, 100, stdin);
    printf("Chuoi vua nhap: %s", array);
    printf("Do dai chuoi: %d", strlen(array)-1);
    return 0;
}