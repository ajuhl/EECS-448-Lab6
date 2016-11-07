/**
*	@file Test.h
*	@author
*	@date
*	@brief Test File for LinkedListOfInts 
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <fstream>
#include <vector>
#include "LinkedListOfInts.h"

class Test
{
	public:
	Test();
	~Test();	
	
	//stress test isEmpty	
	void Test_isEmpty();

	//stress test size
	void Test_size();

	//stress test search
	void Test_search();

	//stress test addBack
	void Test_addBack();

	//stress test addFront
	void Test_addFront();

	//stress test removeBack
	void Test_removeBack();	

	//stress test removeFront	
	void Test_removeFront();
	
};

#endif