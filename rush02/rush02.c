#include <unistd.h>


void	ft_putchar(char c){
  write(1, &c, 1);
};


void	rush(int x, int y)
{
	
	int height;

	height = 0;
	while (height < y)
	{
		int width= 0;
		while (width < x)
		{
			if ((width == 0 && height == 0) ){
        ft_putchar('A');
      }
			else if((width == x - 1 && height  == 0)){
				ft_putchar('A');
        }
      else if((width == 0 && height == y -1)){
				ft_putchar('C');
        }
      else if ((width == x - 1 && height == y - 1)){
        ft_putchar('C');
      }
			else if (width == 0 || width == x - 1){
				ft_putchar('B');
      }
			else if (height == 0 || height == x - 1){
				ft_putchar('B');
        }
      else if ( height == y - 1){
				ft_putchar('B');
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


int main(){
  rush(1,5);
  return 0;
}