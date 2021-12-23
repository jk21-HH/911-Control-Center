#include "pch.h"
#include "Person.h"



//c'tor
Person::Person(CString name, CString lastname, CString gender)
{
	setName(name);
	setLastName(lastname);
	setGender(gender);

}
//d'tor
Person::~Person()
{
}

void Person::setName(CString str){
	this->name = str;
}

void Person::setLastName(CString str){
	this->lastname = str;
}

void Person::setGender(CString str){
	this->gender = str;
}

CString Person::getLastName() const{
	return lastname;
}

CString Person::getGender() const
{
	return gender;
}

CString Person::getName() const
{
	return name;
}

