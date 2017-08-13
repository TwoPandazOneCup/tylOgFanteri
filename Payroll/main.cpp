#include <iostream>
#include <string>
#include "employee.h"

int main()
{
	Employee_handler employees;

	employees.add_employee("Anthony", FINANCE, 40, 0, 420);
	employees.add_employee("Frances", MARKETING, 48, 90, 390);
	employees.add_employee("Teri", FINANCE, 50, 157.5, 577.5);
	employees.add_employee("Zachary", MARKETING, 44, 43.5, 333.25);
	employees.add_employee("Deanna", MARKETING, 35, 0, 323.75);
	employees.add_employee("ROBERT", MARKETING, 40, 0, 350);
	employees.add_employee("John",	FINANCE, 40, 0, 400);
	employees.add_employee("Beth",	PRODUCTION, 30, 0, 232.5);
	employees.add_employee("Traci", PRODUCTION, 45, 52.5, 332.5);
	employees.add_employee("Mary",	PRODUCTION, 40, 0, 290);

	employees.Print_alle();

	employees.set_sorting("total pay");
	employees.Print_alle();

	employees.set_sorting("overtime pay");
	employees.Print_alle();

	employees.set_sorting("namn");
	employees.Print_alle();

	employees.set_sorting("department");
	employees.Print_alle();

	return 0;
}
