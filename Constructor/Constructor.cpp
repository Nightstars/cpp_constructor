// Constructor.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Teacher.h"
#include <iostream>
using namespace std;
int main()
{
	Teacher t1;
	Teacher t2("Lucy",15);
	Teacher t3("Jim");
	cout << t1.getName() << " " << t1.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getAge() << endl;
	system("pause");
    return 0;
}

