#include "pch.h"
#include "Client.h"

Client::Client(CString name, CString lastname, CString gender, CString address, CString city, int phone, CString report,CString emergency,int kind):Employee(name,lastname,gender,address,city,phone,kind)
{
	setReport(report);
	setEmergency(emergency);
}



Client::~Client()
{
}

void Client::setReport(CString temp)
{
	this->report = temp;
}

void Client::setEmergency(CString temp)
{
	this->emergency = temp;
}

CString Client::getReport() const
{
	return report;
}

CString Client::getEmergency() const
{
	return emergency;
}
