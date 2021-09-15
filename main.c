#include <stdio.h>


void sayHi(char name[]) {
    printf("Hello %s", name);
}

int max(int num1, int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main() {
    // printf("%d\n", max(5, 8, 1));
    // sayHi("TerrificTable55");
    int index = 1;

    while(index < 6) {
        printf("%d\n", index);
        index ++;
    }

    return 0;
}
