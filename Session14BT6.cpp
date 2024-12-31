#include <stdio.h>
#include <string.h>
char array[] = "hello cac ban";

int countCharacter();
int main() {
    printf("Co %d ki tu la chu cai trong chuoi", countCharacter());
    return 0;
}

int countCharacter() {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] == ' ') {
            continue;
        }
        count++;
    }
    return count;
}