#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


//----------------------------------
//---test shared_ptr
void TestSharedPtr()
{
	std::shared_ptr<int> sp1(new int(999));
	std::shared_ptr<int> sp2 = sp1;
	cout << "sp1 address: " << sp1 << endl;
	cout << "sp1: " << *sp1 << endl;
	cout << "sp2: " << *sp1 << endl;

	cout << "引用计数sp1: " << sp1.use_count() << endl;
	cout << "引用计数sp2: " << sp2.use_count() << endl;
	sp2.reset();
	cout << "引用计数: " << sp1.use_count() << endl;
	//cout << "引用计数: " << sp2.use_count() << endl;

	cout << "sp1: " << *sp1 << endl;
	//cout << "sp2: " << *sp2 << endl;
	return;
}




//////////////////////////////////////////////////////////////////////////
//---Test weak_ptr

void TestWeakPtr()
{
	
	std::shared_ptr<char*> sp1 = make_shared<char*>();
	//std::weak_ptr<char*> wp2 = sp1;

	cout << "get: " << sp1.get() << *sp1 << endl;

	//cout << "weak_ptr引用计数: " << wp2.use_count() << endl;
	
	
	//std::shared_ptr<char*> sp3 = wp2.lock();
	//cout << "sp3的值: " << **sp3 << endl;

	return;
}



//////////////////////////////////////////////////////////////////////////
//--Test unique_ptr
void TestUniquePtr()
{




	return;
}



int main()
{
	//shared_ptr
	TestSharedPtr();
	//weak_ptr
	TestWeakPtr();
	//unique_ptr
	TestUniquePtr();

	Sleep(10000);
    return 0;
}

