#import <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		write(1, &character, 1);
		character--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return 1;
}
