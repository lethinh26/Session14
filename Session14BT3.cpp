#include <stdio.h>
#include <string.h>
int main() {
    int size = 8;
    char array[size] = "abcdefg";
    for (int i = 0; i < size/2; i++) {
        int temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
    for (int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}