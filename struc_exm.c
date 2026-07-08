# include <stdio.h>

int main()
{
	typedef struct {
	       int x_cor;
		int y_cor;
 		} make_point;

	make_point point1;
	point1.x_cor = 50;
	point1.y_cor = 60;

	printf("The x and y coordinates of point1 is: %d and %d\n", point1.x_cor, point1.y_cor);

	return 0;
}
