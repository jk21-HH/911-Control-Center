#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Person.h"


class Employee : public Person {
public:
	Employee(CString name, CString lastname, CString gender, CString address, CString city, int phone, int kind);
	virtual ~Employee();
	void setAddress(CString temp);
	void setCity(CString temp);
	void setPhone(int temp);
	void setKind(int kind);

	CString getAddress()const;
	CString getCity()const;
	int getKind()const;
	int getPhone()const;
	CString handleEvent()
	{
		CString temp = L"Employee";
		return temp;
	}
protected:
	CString address, city, job, eventEmergency;
	int phone;
	int kind;

};

#endif // !EMPLOYEE_H
