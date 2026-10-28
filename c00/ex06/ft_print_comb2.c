#include <unistd.h>

void ft_write_comb(char num1, char num2, char num3, char num4) {
    write(1, &num1, 1);
    write(1, &num2, 1);
    write(1, " ", 1);
    write(1, &num3, 1);
    write(1, &num4, 1);
}

void ft_convert_nums(int num1, int num2) {
    char c1 = (num1 / 10) + 48;
    char c2 = (num1 % 10) + 48;
    char c3 = (num2 / 10) + 48;
    char c4 = (num2 % 10) + 48;
    ft_write_comb(c1, c2, c3, c4);
    if (!(num1 == 98 && num2 == 99)) {
        write(1, ", ", 2);
    }
}

void ft_print_comb2() {
    int num1 = 0;
    int num2;

    while (num1 < 99) {
        num2 = num1 + 1;
        while (num2 < 100) {
            ft_convert_nums(num1, num2);
            num2++;
        }
        num1++;
    }
}

int main() {
    ft_print_comb2();
    return 0;
}