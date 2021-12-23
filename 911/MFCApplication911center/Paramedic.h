#ifndef PARAMEDIC_H
#define PARAMEDIC_H
#include "Employee.h"

class Paramedic:public Employee{

public:
	Paramedic(CString name, CString lastname, CString gender, CString address, CString city, int phone,int kind);

};

#endif // !PARAMEDIC_H