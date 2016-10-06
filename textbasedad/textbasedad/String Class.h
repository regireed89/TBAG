#pragma once
class MyString
{
public:
	MyString() {};
	MyString(char w[]);

	//return string length as an integer
	int Length();

	//compare if one string is the same as another
	bool Compare(MyString other);

	//append one string to another
	MyString Append(MyString other);

	//return basic constant C-style string
	const char* Return();

	//convert string top lowercase
	char ConvertLow();

	//convert strin gto uppercase
	char ConvertUp();

	//set string to input C-style string
	const char* SetCStyle();

private:
	char m_string[255];
};