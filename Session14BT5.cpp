#include <stdio.h>
#include <string.h>
char array[] = "hello cac ban";

int countWord();
int main() {
    printf("Co %d tu trong chuoi", countWord());
    return 0;
}

int countWord() {
    int count = 1;
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] == ' ') {
            count++;
        }
    }
    return count;
}