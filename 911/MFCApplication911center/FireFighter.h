#ifndef FIRE_FIGHTER_H
#define FIRE_FIGHTER_H
#include "Employee.h"

class FireFighter:public Employee{
public:
	FireFighter(CString name, CString lastname, CString gender, CString address, CString city,int phone,int kind);

};

#endif // !FIRE_FIGHTER_H