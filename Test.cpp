/**
*	@author 
*	@date 
*	@file Test.cpp
*/
#include "Test.h"

Test::Test(){
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest isEmpty()\n";
	Test_isEmpty();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest size()\n";
	Test_size();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest search()\n";
	Test_search();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest addBack()\n";
	Test_addBack();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest addFront()\n";
	Test_addFront();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest removeBack()\n";
	Test_removeBack();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nTest removeFront()\n";
	Test_removeFront();
}

Test::~Test(){}

void Test::Test_isEmpty(){
//give populated list if false pass else fail
//give empty list  if true pass else fail

LinkedListOfInts List1;
std::cout << "--empty list isEmpty:";
if(List1.isEmpty() == List1.toVector().empty()){std::cout << "pass\n";}
else{std::cout << "fail\n";}



List1.addFront(1);
std::cout << "--populated list isEmpty:";
if(List1.isEmpty() == List1.toVector().empty()){std::cout << "pass\n";}
else{std::cout << "fail\n";}


}

void Test::Test_size(){
//give list size 10, if return 10 pass else fail
// remove 2 from 10 , if 18 pass else fail
//give empty list, if size 0 pass else fail

LinkedListOfInts List1;
std::cout << "--empty list size:";
if(List1.size() == int(List1.toVector().size())){std::cout << "pass\n";}
else{std::cout << "fail\n";}


for(int i=0; i<10; i++){
	List1.addBack(i);
}
std::cout << "--populated list size 10 :";
if(int(List1.toVector().size()) == 10){std::cout << "pass\n";}
else{std::cout << "fail\n";}


List1.removeFront();
std::cout << "--populated list removeFront size 9:";
if(int(List1.toVector().size()) == 9){std::cout << "pass\n";}
else{std::cout << "fail\n";}


List1.removeBack();
std::cout << "--populated list removeBack size 8:";
if(int(List1.toVector().size()) == 8){std::cout << "pass\n";}
else{std::cout << "fail\n";}

}

void Test::Test_search(){
//search for bool if throw error pass, else fail
//search for value first value if true pass else fail
//search for last value if true pass else fail
//search for non end value if true pass else fail
//search for value not on list if false pass else fail
//search for value on empty list if false pass else fail

LinkedListOfInts List1;
bool testBool = false;
int testInt = 1;

testBool = List1.search(testInt);

std::cout << "--search empty list:";
if(!testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


for(int i=0; i<10; i++){
	List1.addBack(i);
}
testBool = List1.search(0);
std::cout << "--search for front value:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}



testBool = List1.search(9);
std::cout << "--search for back value:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = List1.search(5);
std::cout << "--search for middle value:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = List1.search(25);
std::cout << "--search for value not on list:";
if(!testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = false;
try{
	List1.search(testBool);
}
catch(...){
	testBool = true;
}
std::cout << "--search for bool:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}

}
void Test::Test_addBack(){
//give list size 20, addBack int 21, traverse to 21, if node equal 21 pass else fail
//give empty list, addBack int 0, traverse to node 1, if value equal 1 pass else fail
// add bool, if throw error pass

LinkedListOfInts List1;
bool testBool = true;
int count = 0;

List1.addBack(0);
std::cout << "--addBack on empty list:";
if(List1.toVector().at(0) == 0){std::cout << "pass\n";}
else{std::cout << "fail\n";}

for(int i=1; i<10; i++){
List1.addBack(i);
}

std::cout << "--addBack on populated list:";
while( testBool && count<10){
	if(List1.toVector().at(count) != count ){
		testBool = false;
	}
	count++;
	}
	
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = false;

try{
	List1.addBack(testBool);
}
catch(...){
	testBool = true;
}
std::cout << "--addBack give bool:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}

}

void Test::Test_addFront(){
//give list size 20, addFront int 21, if size 21 pass else fail, traverse to 1, if node equal 21 pass else fail
//give empty list, addFront int 1, if size equal 1 pass else fail, traverse to node 1, if value equal 1 pass else fail
//add bool if throw error pass

LinkedListOfInts List1;
bool testBool = true;
int count = 0;

List1.addFront(9);
std::cout << "--addFront on empty list:";
if(List1.toVector().at(0) == 9){std::cout << "pass\n";}
else{std::cout << "fail\n";}


for(int i=8; i>=0; i--){
List1.addFront(i);
}

std::cout << "--addFront on populated list:";
while( testBool && count<10){
	if(List1.toVector().at(count) != count ){
		testBool = false;
	}
	count++;
}
	
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = false;

try{
	List1.addFront(testBool);
}
catch(...){
	testBool = true;
}
std::cout << "--addFront give bool:";
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}

}

void Test::Test_removeBack(){
//give list size 20, removeBack, if return true pass, if size 19 pass else fail, traverse to 19, if value 19 pass else fail, if next equal null pass else fail
//give list size 1, removeBack,if return true pass,  if size equal 0 pass else fail, if getValue equals null pass, if next equal null pass else fail
//give empty list, remove back, if return false pass
LinkedListOfInts List1;
LinkedListOfInts List2;
bool testBool = false;
int count = 0;

std::cout << "--removeBack on empty:";
if(!List1.removeBack()){std::cout << "pass\n";}
else{std::cout << "fail\n";}


List1.addFront(0);
std::cout << "--removeBack on size 1:";
if(List1.removeBack() && List1.toVector().size()==0){
	testBool = true;
}
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = false;

for(int i=0; i<10; i++){
	List2.addBack(i);
}
std::cout << "--removeBack on list greater than size 1:";
if(List2.removeBack()){
	testBool = true;
}
while( testBool && count<9 && List2.toVector().size()==9){
	if(List2.toVector().at(count) != count ){
		testBool = false;
	}
	count++;
}
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}



}

void Test::Test_removeFront(){
//give list size 20, removeFront, if size 19 pass else fail, traverse to 1, if value 2 pass else fail, traverse to 19 if next equal null pass else fail
//give list size 1, removeFront, if size equal 0 pass else fail, if getValue equals null pass, if next equal null pass else fail
//give empty list, remove back, if return false pass
LinkedListOfInts List1;
LinkedListOfInts List2;
bool testBool = false;
int count = 0;

std::cout << "--removeFront on empty:";
if(!List1.removeFront()){std::cout << "pass\n";}
else{std::cout << "fail\n";}


List1.addFront(0);
std::cout << "--removeFront on size 1:";
if(List1.removeFront() && List1.toVector().size()==0){
	testBool = true;
}
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}


testBool = false;

for(int i=9; i>=0; i--){
	List2.addFront(i);
}
std::cout << "--removeFront on list greater than size 1:";
if(List2.removeFront()){
	testBool = true;
}
while( testBool && count<9 && List2.toVector().size()==9){
	if(List2.toVector().at(count) != (count+1) ){
		testBool = false;
	}
	count++;
}
if(testBool){std::cout << "pass\n";}
else{std::cout << "fail\n";}



}