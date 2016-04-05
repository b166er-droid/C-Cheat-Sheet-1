// C++ Video Cheatsheet.cpp : Defines the entry point for the console application.
//

// Single line comments can be done via a //
/* Multi line comments are done with a slash star
*/

//To import libraries you have to use the hashtag include syntax
#include "stdafx.h"
//IO stuff - cout
#include <iostream>
//vector library
#include <vector>
#include <string>
//Used for file IO
#include <fstream>

//Need to go over namespaces, you can use this so you don't have to keep on typing std::cout
using namespace std;

//You have to declare all of the functions that you use within your programme.
// C++ kind of runs like python...  kinda of. 
// You can either have your main function at the bottom of your programme or the top.
void funVectors();
void funDoAndWhile();
void funFileIO();
//Main programme start
//All C programmes start with int main(){}
int main()
{

	/*

	Result based off a condition:

	assign a type, name, equal to, condition in braces then a ?, true value and false value separated by a colon
	type variable = (condition) ? true:false

	*/
	int ten = 10;
	int dubTen = 20;
	string helloString = (ten == dubTen) ? "Correct" : "False";
	cout << helloString << endl;

	funVectors();
	funFileIO();
	//Need to pause programme to see console window
	getchar();
	//0 stands for everything went ok
	return 0;
}

int funFileIO() {
	/*
	FILE IO
	Create a file stream that will allow writing to a file.
	accomplished through ofstream writer
	*/

	string Jobs = "Good artists copy, Great artists steal.";
	ofstream writer("Jobsquote.txt");

	if (! writer) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer << Jobs << endl;
		writer.close;
	}
}
void funVectors() {
	/*

	Vectors
	Very similar to arrays but their size can change
	They are declared by:
	vector <type> variable name(initial size)
	Kind of operates like a stack - LIFO
	pop push etc
	*/

	vector<int> ageVec(5);

	int ageArray[5] = { 1, 2, 3, 4, 5 };

	//This will insert the first three elements of the age array into the vector 
	ageVec.insert(ageVec.begin(), ageArray, ageArray + 3);

	//Prints out the value at position 3, this is the same as square brackets
	cout << "The age vector results at position 1: " << ageVec[0] << "The age vector results at position 2: " << ageVec[1] << "The age vector results at position 3: " << ageVec[2] << endl;
	cout << "The age vector results at position 1: " << ageVec.at(0) << "The age vector results at position 2: " << ageVec.at(1) << "The age vector results at position 3: " << ageVec.at(2) << endl;

	//inserting into vectors
	//What is the point of insert if you can just assign it via
	//ageVec[5] == 44
	//vector is extended by inserting new elements before the element at the specified position. Increases the size
	ageVec.insert(ageVec.begin() + 5, 44);
	
	//Add or append to last item in vector
	ageVec.push_back(55);

	//Assign 33 to fourth element of the array
	ageVec[4] == 33;

	//Prints the first element of the vector with .front()
	cout << "Vector first pos: " << ageVec.front();
	//Prints the last element of the vector with .back()
	cout << "Vector last pos: " << ageVec.back();
	//Check to see if vector is empty - 1 if true, 0 if false
	cout << "Is vector empty?" << ageVec.empty();
	//Remove the last value of the vector
	ageVec.pop_back();
	//.size will return the size of the vector
}
void funDoAndWhile() {
	/*

	WHILE LOOPS

	*/

	//Generating a random number
	// This will pick a random number, when you modulus this by 100 you'll get a random number between 0 an 99.
	// ie rand generates 1560, modulus by 100 will give 60
	/*int randNum = (rand() % 100) + 1;
	while (randNum != 50) {
	cout << randNum;
	randNum = (rand() % 100) + 1;
	}
	cout << randNum << "Found it!" << endl;*/

	//You May also use while loops like for loops
	int starter = 1;

	while (starter < 10) {
		cout << "Counting to 10 " << starter;
		starter++;
	}

	/*

	DO WHILE
	This game demonstrates the do while function.
	getline gets user input - c in, and assigns it to a value
	As the c in reads the value as a string, we must convert it to an int with stoi()
	You can also convert strings to double stod()
	*/
	string numberGuessed;
	int intNumberGuessed;

	do {
		cout << "Enter a number between 0 and 5: ";
		getline(cin, numberGuessed);
		intNumberGuessed = stoi(numberGuessed);

	} while (intNumberGuessed != 4);

	cout << "Congrats, you guessed right!" << endl;
}


void functArrays() {
	/*
	Arrays
	*/
	// data type, variable name, array size
	// int badNums[5]

	int badNums[5] = { 1, 2, 3, 4, 5 };
	//In Psuedo code this means for i in array do this.
	//There are other ways to write it but this is the simplest. 
	for (int i : badNums) {
		cout << i << endl;
	}

	/*
	Multi dimenstional arrays

	*/
	//Array in an array
	//This is a multi dimensional array of two elements, where each element has three associated sub elements
	//COME BACK
	//There must be a better way to do this
	//There must be a better way to do this
	//There must be a better way to do this

	/*
	Iterating through a multi dimensional array
	*/
	const int elementSize = 2;
	const int subElementSize = 3;
	string personalDetails[elementSize][subElementSize] = { { "Matthew", "Kier", "Muff King" },{ "Austin", "Powers", "Sex God" } };

	for (int i = 0; i < elementSize;i++) {
		for (int j = 0;j < subElementSize;j++) {
			cout << personalDetails[i][j] << endl;
		}
	}
	//To iterate through this array of arrays the previous function will not work
	//for (int i : personalDetails) {
	//cout << i << endl;
	//}
}

void breaksAndSwitching() {
	/*
	Breaks and Switches. These allow you to check for specific cases
	*/

	int greetingOption = 1;
	switch (greetingOption) {
	case 1:
		cout << "Sup bro" << endl;
		break;
	case 2:
		cout << "Sup brah" << endl;
		break;
	case 3:
		cout << "Lata skata" << endl;
		break;
	default:
		cout << "This is the default ending";

		//The case switch will iterate through the cases to find the matching case. You may use a default case incase none of the options match

	}
}

void ifWhileLoops() {
	/*

	IF, THEN  & ELSE STATEMENTS

	*/
	//IF STATEMENTS:
	/* IF statement syntax:
	if - brackets and statement/condition - {}

	*/
	int age = 81;
	int ageAtLastExam = 16;
	bool isNotIntoxiated = true;

	if (age >= 1 && age < 16) {
		cout << "Too young to drive" << endl;

	}
	else if (!isNotIntoxiated || age>80) {
		cout << "You're too drunk to drive" << endl;
	}
	else {
		cout << "you may proceed" << endl;
	}
}

void datatypes() {
	/*

	DATA TYPES:

	*/


	//Print to console out
	cout << "Hello World" << endl;

	//Create a constant of type double named pi. This cannot change
	const double PI = 3.1415926535;

	//Char character, can only be assigned a single character. Takes up one byte
	//There is a difference between "" and ''. ""Refers to a string whereas '' is a char
	char MyGrade = 'A';

	//Booleans
	//Booleans true/false values are lower case.
	bool isHappy = true;

	//Int
	//Int is same deal, lower case declaration, variable name and number
	int myAge = 24;

	//Float
	//Again the same, lower case dec, variable name and number
	//Can go up to 6 decimal places
	float myFloat = 3.215123;


	//Double
	//Accurate up to 15 places. Hence the double for pi above.
	double myDouble = 3.1213123131;

	//Number of bytes for a datatype
	cout << "Size of int: " << sizeof(myAge) << endl << "The above is the size of the int in bytes";

	//Try to define a int of a size larger than it can handle
	//int overSize = 2147483647722222222222;
	//When trying to print an int larger than the allocated memory space, we will get an error
	//Trying to print out a larger int will result in overflow. Sometimes they just become negative
	/* cout << overSize;
	int test = 11111111111111111111;
	long long overSizeDubs = 11111111111111111111;
	cout << overSizeDubs << endl<< "test: " << test;
	*/

	//To perform addition within console out:

	cout << "5+2= " << 5 + 2;

	/*
	Incrementing and decrementing is different: Depending on where you place the ++ and --
	is when it reads the value and when it manipulates the value. For instance:
	*/

	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "++5" << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5" << --five << endl;

	//Plus and equal to:
	int six = 6;

	six += 6; // equiv to six = six + 6
	cout << "six is plus and equal to : " << six;
	six = 6;
	six = +6; //This simply states that six is equal to +6 
	cout << "six is equal and plus : " << six;

	//Casting Data Types:
	//When printing out a data type you can cast by putting in brackets prior to the equation
	cout << "9/8 = " << (char)9 / 8; // 1.25 is printed out instead of the nearest round. 
									 //Char prints out 1
}

void strings() {
	/*
	STRINGS

	You can concatenate things within c out like python and + operators
	*/
	char happyArray[6] = { 'H','A','P','P','Y' };
	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;

	//You can get the size of the string
	cout << birthdayString.size() << endl;
	//Whether a string is empty - this will output 0 if false, 1 if true
	cout << birthdayString.empty() << endl;
	//You may also compare strings
	//Compare will compare (i think) the ascii values. 0 if it's the same, 1 if it's less than, -1 if greater. 
	string matthew = "matthew";
	string ivan = "ivan";
	cout << "Compares matthew with ivan: " << matthew.compare(ivan) << endl;
	cout << "Compares ivan with Matthew: " << ivan.compare(matthew) << endl;

	/*
	Sub strings
	*/

	//Aim: Get user input of a name, then parse it and assign a copy
	//http://www.cplusplus.com/reference/string/string/assign/

	string yourName;
	cout << "Please type in your name:" << endl;

	getline(cin, yourName);

	cout << "Hello " + yourName << endl;

	//This will replace contents of wholeName with the contents of yourName
	string wholeName = yourName.assign(yourName);

	//You also have the ability to parse it
	string firstName;
	firstName.assign(wholeName, 0, 7);
	cout << firstName << ". This is your first name" << endl;

	//We can also search through a string to find a substring via index
	int lastNameIndex = wholeName.find("kiernander", 0);
	cout << lastNameIndex;


	//Inserting a string into a string
	wholeName.insert(lastNameIndex, "Nigel ");
	cout << "You lie, this is your full name " << wholeName << endl;

	//Deleting elements of a string
	wholeName.erase(lastNameIndex, 5);
	cout << "I removed the middel name: " + wholeName << endl;

	//You can also replace things
}

