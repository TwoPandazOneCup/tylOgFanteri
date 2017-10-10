#include "sortby.h"

void sortby::setto(int i)
{
	DEPARTMENT = false;
	NAME = false;
	TOTAL_HOURS = false;
	OVERTIME_PAY = false;
	TOTAL_PAY = false;

	switch (i)
	{
	case 0:
		DEPARTMENT = true;
		break;
	case 1:
		NAME = true;
		break;
	case 2:
		TOTAL_HOURS = true;
		break;
	case 3:
		OVERTIME_PAY = true;
		break;
	case 4:
		TOTAL_PAY = true;
		break;
	default:
		break;
	}

}
int sortby::currentsort()
{
	if(DEPARTMENT)
		return 0;
	if(NAME)
		return 1;
	if(TOTAL_HOURS)
		return 2;
	if(OVERTIME_PAY)
		return 3;
	if(TOTAL_PAY)
		return 4;

}
