#ifndef CLIENT_H
#define CLIENT_H
#include "Employee.h"

class Client :public Employee{

public:
	Client(CString name, CString lastname, CString gender, CString address, CString city, int phone, CString report,CString Emergency,int kind);
	virtual ~Client();
	void setReport(CString temp);
	void setEmergency(CString temp);
	CString getReport()const;
	CString getEmergency()const;

private:
	CString report;
	CString emergency;
};
#endif // !CLIENT_H
