#include <stdio.h>
#include <string.h>
char array[] = "aabbccdabef";

int countArray(char find);

int main() { 
    char find;
    printf("Nhap ki tu muon dem: ");
    scanf("%c", &find);
    printf("Co %d ky tu %c", countArray(find), find);
    return 0;
}
int countArray(char find) {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] == find) {
            count++;
        }
    }
    return count;
}