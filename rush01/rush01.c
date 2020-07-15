#include <unistd.h>


void	ft_putchar(char c);

void	rush(int x, int y)
{

	int height = 0;
	while (height < y)
	{
		int width= 0;
		while (width < x)
		{
			if ((width == 0 && height == 0) ){
        ft_putchar('/');
      }
			else if((width == x - 1 && height  == 0)){
				ft_putchar('\\');
        }
      else if((width == 0 && height == y -1)){
				ft_putchar('\\');
        }
      else if ((width == x - 1 && height == y - 1)){
        ft_putchar('/');
      }
			else if (width == 0 || width == x - 1){
				ft_putchar('*');
      }
			else if (height == 0 || height == x - 1){
				ft_putchar('*');
        }
      else if ( height == y - 1){
				ft_putchar('*');
        }
			else	
        ft_putchar(' ');{
			width++;
        }
		}
		ft_putchar('\n');
		height++;
     
	}
}
