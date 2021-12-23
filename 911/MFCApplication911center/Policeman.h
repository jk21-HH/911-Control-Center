#ifndef POLICEMAN_H
#define POLICEMAN_H
#include "Employee.h"
class Policeman : public Employee{
public:
	Policeman(CString name, CString lastname, CString gender, CString address, CString city, int phone, int kind);

};

#endif //POLICEMAN_H