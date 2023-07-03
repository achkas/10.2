#include <iostream>
#include <string>
#include <windows.h>
#include "heirs_triangle.h"
#include "Triangle.h"
#include "quadrilateral.h"
#include "heirs_quadrangle.h"
#include "heirs_parallelogram.h"
#include "heirs_square.h"

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle t;
	RightTriangle r;
	IsoscelesTriangle i;
	EquilateralTriangle e;

	t.print_info(&t);
	std::cout << std::endl;
	r.print_info(&r);
	std::cout << std::endl;
	i.print_info(&i);
	std::cout << std::endl;
	e.print_info(&e);
	std::cout << std::endl;

	quadrilateral w;
	square s;
	rectangle rec;
	parallelogram par;
	rhombus rho;

	w.print_info(&w);
	std::cout << std::endl;
	s.print_info(&s);
	std::cout << std::endl;
	rec.print_info(&rec);
	std::cout << std::endl;
	par.print_info(&par);
	std::cout << std::endl;
	rho.print_info(&rho);

	return 0;

}