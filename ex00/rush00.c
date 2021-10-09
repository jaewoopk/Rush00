#include <unistd.h>

void	rush(int x, int y);
void	ft_print_line(int x, int y, int col, int row);
void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	rush(1, 1);
	rush(5, 5);
	return (0);
}

void	rush(int x, int y)
{
	int		row;
	int		col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_print_line(x, y, row, col);
			col++;
		}
		ft_putchar ('\n');
		row++;
	}
}

void	ft_print_line(int x, int y, int row, int col)
{
	if (row == 0 || row == y - 1)
	{
		if (col == 0 || col == x - 1)
		{
			ft_putchar ('o');
		}
		else
		{
			ft_putchar ('-');
		}
	}
	else
	{
		if (col == 0 || col == x - 1)
		{
			ft_putchar ('|');
		}
		else
		{
			ft_putchar (' ');
		}
	}	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
