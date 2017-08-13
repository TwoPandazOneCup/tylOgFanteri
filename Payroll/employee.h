#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "sortby.h"

enum Department{
	FINANCE = 0,
	MARKETING = 1,
	PRODUCTION = 2,
};


class Employee
{
public:
	Employee();
	Employee(std::__cxx11::string name, Department Dep, int total, float over, float tot_pay);
	void print_employee();

	float get_hours(){return m_total_hours;}
	float get_overtime_hours(){return m_overtime_pay;}
	float get_pay(){return m_total_pay;}
	void set_sort(int val);


	bool operator <(const Employee & str) const
	{
		if(m_current_sort == 0)
			return ( m_department < str.m_department);
		if(m_current_sort == 1)
			return (m_name < str.m_name);
		if(m_current_sort == 2)
			return (m_total_hours < str.m_total_hours);
		if(m_current_sort == 3)
			return (m_overtime_pay < str.m_overtime_pay);
		if(m_current_sort == 4)
			return( m_total_pay < str.m_total_pay);
	}

private:
	std::string m_name;
	Department m_department;
	int m_total_hours;
	float m_overtime_pay;
	float m_total_pay;
	std::string department_tostring();
	int m_current_sort = 1;
};


class Employee_handler
{
public:
	Employee_handler();
	void Print_alle();
	void add_employee(std::string name, Department Dep,
			  int total, float over, float tot_pay);
	void set_sorting(std::string setter);
	int get_sort();

private:
	std::vector<Employee> m_employee_list;
	struct sortby m_sort_handler;
};

#endif // EMPLOYEE_H
