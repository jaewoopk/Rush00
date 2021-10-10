#include <unistd.h>

void	rush(int x, int y);
void	ft_print_row(int x, char first_ch, char second_ch, char third_ch);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		row;

	row = 0;
	while (row < y)
	{
		if (row == 0)
		{
			ft_print_row (x, 'A', 'B', 'A');
		}
		else if (row < y - 1)
		{
			ft_print_row (x, 'B', ' ', 'B');
		}
		else
		{
			ft_print_row (x, 'C', 'B', 'C');
		}
		ft_putchar ('\n');
		row++;
	}
}

void	ft_print_row(int x, char first_ch, char second_ch, char third_ch)
{
	int		col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar (first_ch);
		}
		else if (col < x - 1)
		{
			ft_putchar (second_ch);
		}
		else
		{
			ft_putchar (third_ch);
		}
		col++;
	}
}
