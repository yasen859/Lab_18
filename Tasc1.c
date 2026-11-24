#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;

void put_point(Point z) {

	printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}

float dist(Point z, Point w) {
	return sqrt(pow(w.x - z.x, 2) + pow(w.y - z.y, 2));
}

Point mid_point(Point z, Point w) {
	Point m;
	m.x = (z.x + w.x) / 2.0;
	m.y = (z.y + w.y) / 2.0;
	m.name = 'M';
	return m;
}

int main(){
	setlocale(LC_ALL, ".UTF8");
	Point b, a;
	printf("Введите имя и координаты первой точки: \n");
	scanf_s(" %c %.1f %.1f", &a.name, &a.x, &a.y);

	printf("Введите имя и координаты второй точки: \n");
	scanf_s(" %c %.1f %.1f", &b.name,  &b.x, &b.y);
	put_point(b);
	put_point(a);

	printf("Pасстояние между точками: %.2f\n",  dist(a, b));


	printf("Cередина отрезка: \n");
	Point mid = mid_point(a, b);
	put_point(mid);

	system("pause");
	return 0;

}