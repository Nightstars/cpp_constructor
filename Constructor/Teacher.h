#pragma once
#include <string>
using namespace std;
class Teacher
{
public:
	Teacher();
	Teacher(string name, int age=20);
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};

