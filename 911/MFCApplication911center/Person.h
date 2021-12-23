#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{

public: 
	Person(CString name , CString lastname, CString gender);
	virtual ~Person();
	virtual void setName(CString str);
	virtual void setLastName(CString str);
	virtual void setGender(CString str);

	CString getLastName()const;
	CString getGender()const;
	CString getName()const;

protected:
	CString name, lastname;
	CString gender;
};
#endif // !PERSON_H

