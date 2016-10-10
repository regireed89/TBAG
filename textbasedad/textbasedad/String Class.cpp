#include <iostream>
#include"String Class.h"

using namespace std;

MyString::MyString(char newString[])
{
	int i;
	for (i = 0; newString[i] != '\0'; i++)
	{
		m_string[i] = newString[i];
	}
	m_string[i] = '\0';
}

int MyString::Length()
{
	// function finds the length of character array
	// loops through array until it reaches an exit point then returns how many indexs it went through	
	int i;
	for (i = 0; m_string[i] != '\0'; i++)
	{

	}

	return i;
}

bool MyString::Compare(MyString yourmove)
{
	int i;

	for (i = 0; i != yourmove.Length() && Length(); i++)//loops until not equal to either strings
	{
		if (yourmove.m_string[i] == m_string[i])//compares other to m_string
		{
			
			
		}
		else
		{
			
			return false;
		}
	}
	return true;
}

MyString MyString::Append(MyString other)
{
	char carray[255];

	int totalSize = this->Length() + other.Length() + 1;
	// assign the size of both strings to a variable and adding 1 to hold the place of terminating character
	//since arrays start at 0 we subtract 1 from the total length
	carray[totalSize - 1] = '\0';
	for (int i = 0; i < this->Length() + other.Length(); i++)
	{
		if (i < this->Length())// if the length is less than i then assign m_string to carray
			carray[i] = m_string[i];
		else//else assign other string to carray
			carray[i] = other.m_string[i - this->Length()];
	}

	MyString ms = MyString(carray);
	return ms;
}

const char* MyString::Return()
{
	return m_string;
}

char MyString::ConvertLow()
{
	int i;
	for (i = 0; i < Length(); i++)
	{
		if (m_string[i] > 64 && m_string[i] < 91)
			//if characters on ASCII table are 64-91 add 32 then return the character
		{
			(char)m_string[i] = (int)m_string[i] + 32;
			//adding 32 to the decimal associated with the characters in the array 
			
		}
	}
	return m_string[i];
}

char MyString::ConvertUp()
{
	int i;
	for (i = 0; i < Length(); i++)
	{

		if (m_string[i] > 96 && m_string[i] < 123)
			//if characters on ASCII table are 96-123 subtract 32 then return the character
		{
			(char)m_string[i] = (int)m_string[i] - 32;
			//subtracts 32 to the decimal associated with the characters in the array
			cout << m_string[i];
		}
	}
	return m_string[i];

}

const char * MyString::SetCStyle()
{
	return m_string;
}
