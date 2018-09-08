#include "entry.h"
#include <iostream>

using namespace std;

entry::entry(int lengthOfData, char * data)
{
	this->m_LengthOfData = lengthOfData;
	this->m_Data = data;
	cout << "Created new data entry: " << data << endl;
	cout << "Length of data: " << lengthOfData << endl;

}


entry::~entry()
{
}
