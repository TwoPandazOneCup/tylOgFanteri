#ifndef SORTBY_H
#define SORTBY_H

struct sortby{
	bool DEPARTMENT = false;
	bool NAME = true;
	bool TOTAL_HOURS = false;
	bool OVERTIME_PAY = false;
	bool TOTAL_PAY = false;
	void setto(int i);
	int currentsort();
};
#endif // SORTBY_H
