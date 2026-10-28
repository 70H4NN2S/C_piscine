#include <unistd.h>

void ft_putnums(char num1, char num2, char num3) {
    write(1, &num1, 1);
    write(1, &num2, 1);
    write(1, &num3, 1);
}

void ft_putspace(void) {
    write(1, ", ", 2);
}

void    ft_print_comb(void)
{
    char num1 = '0';
    char num2, num3;

    while (num1 <= '7') {
        num2 = num1 + 1;
        while (num2 <= '8') {
            num3 = num2 + 1;
            while (num3 <= '9') {
                ft_putnums(num1, num2, num3);
                if (!(num1 == '7' && num2 == '8' && num3 == '9'))
                    ft_putspace();
                num3++;
            }
            num2++;
        }
        num1++;
    }
}