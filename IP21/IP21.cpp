//#include <iostream>
#include <locale.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("Стоп! Теперь наш координаты: [%i, %i]\n", latitude, longitude);
	return 0;

}

