// CPlus11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void test_longlong();



class A
{
public:
	//A(){}

	//virtual ~A(){};

	void P(){ printf("pddd\n"); }
};



int _tmain(int argc, _TCHAR* argv[])
{

	A a;
	a.P();

	test_longlong();

	return 0;
}

