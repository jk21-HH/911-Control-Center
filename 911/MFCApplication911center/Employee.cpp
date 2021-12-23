#include "pch.h"
#include "Employee.h"


//c'tor
Employee::Employee(CString name, CString lastname, CString gender, CString address, CString city, int phone, int kind) :Person(name, lastname, gender) {


	setAddress(address);
	setCity(city);
	setPhone(phone);
	setKind(kind);
}

Employee::~Employee()
{
}

void Employee::setAddress(CString temp) {
	this->address = temp;
}

void Employee::setCity(CString temp) {
	this->city = temp;
}


void Employee::setPhone(int temp) {
	this->phone = temp;
}

void Employee::setKind(int temp)
{
	this->kind = temp;
}

CString Employee::getAddress() const {
	return address;
}

CString Employee::getCity() const {
	return city;
}

int Employee::getKind() const
{
	return kind;
}

int Employee::getPhone() const
{
	return phone;
}