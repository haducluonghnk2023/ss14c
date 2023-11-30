#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tinh_tong_so_nguyen(char *chuoi) {
    int sum = 0;
    char *token = strtok(chuoi, " "); 

    while (token != NULL) {
        int integer = atoi(token);
        sum += integer;
        token = strtok(NULL, " ");
    }

    return sum;
}

int main() {
    char chuoi_input[100];

    printf("Nhap vao mot chuoi chua cac so nguyen: ");
    fgets(chuoi_input, sizeof(chuoi_input), stdin);

    if (chuoi_input[strlen(chuoi_input) - 1] == '\n') {
        chuoi_input[strlen(chuoi_input) - 1] = '\0';
    }


    int sum = tinh_tong_so_nguyen(chuoi_input);
    printf("Tong cac so nguyen trong chuoi là: %d\n", sum);

    return 0;
}

