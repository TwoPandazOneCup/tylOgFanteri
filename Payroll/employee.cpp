#include "employee.h"

Employee::Employee(std::__cxx11::string name, Department Dep, int total, float over, float tot_pay)
	:m_name{name},m_department{Dep},m_total_hours{total},m_overtime_pay{over},m_total_pay{tot_pay}
{

}

void Employee::print_employee()
{
	std::cout << m_name << "\t" << department_tostring() << "\t"
		  << m_total_hours << "\t\t"
		  << m_overtime_pay << "\t\t"
		  << m_total_pay << "\t"
		  << "\n";
}
void Employee::set_sort(int val)
{
	m_current_sort = val;
}

std::string Employee::department_tostring()
{
	switch(this->m_department)
	{
	case FINANCE:
		return "Finance\t";
	case MARKETING:
		return "Marketing";
	case PRODUCTION:
		return "PRODUCTION";
	default:
		return "UDEFINERT";
	}
}

Employee_handler::Employee_handler()
{

}

int Employee_handler::get_sort()
{
	return m_sort_handler.currentsort();
}

void Employee_handler::Print_alle()
{
	std::cout << "NAME\tDEPARTMENT\tTOTAL HOURS\tOVERTIME PAY\tTOTAL PAY\n";
	for(int i = 0; i < 80; ++i)
		std::cout << "-";
	std::cout << std::endl;

	float total_overtid = 0;
	float total_lonn = 0;

	for(int i = 0 ; i < m_employee_list.size(); ++i)
		m_employee_list[i].set_sort(m_sort_handler.currentsort());

	std::sort(m_employee_list.begin(), m_employee_list.end());


	for(auto i : m_employee_list)
	{
		total_overtid += i.get_overtime_hours();
		total_lonn += i.get_pay();
		i.print_employee();

	}
	std::cout << "\n\n Total overtime for entire payroll:\t" << total_overtid << "\n";
	std::cout << "\t\tTotal payroll amount: \t" << total_lonn << "\n";
}

void Employee_handler::add_employee(std::__cxx11::string name, Department Dep, int total, float over, float tot_pay)
{
	m_employee_list.push_back(Employee(name, Dep, total, over, tot_pay));
}

void Employee_handler::set_sorting(std::__cxx11::string setter)
{
	if(setter == "namn")
		m_sort_handler.setto(1);
	if(setter == "department")
		m_sort_handler.setto(0);
	if(setter == "total hours")
		m_sort_handler.setto(2);
	if(setter == "overtime pay")
		m_sort_handler.setto(3);
	if(setter == "total pay")
		m_sort_handler.setto(4);

}
