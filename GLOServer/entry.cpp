#include "entry.h"
#include <iostream>

using namespace std;

entry::entry(int lengthOfData, char * data)
{
	this->m_LengthOfData = lengthOfData;
	this->m_Data = data;
	cout << "Created new data entry: " << m_Data << endl;
	cout << "Length of data: " << lengthOfData << endl;
	writeData();

}

void entry::writeData() {
	for (int x = 0; x < m_LengthOfData; x++) {
		cout << m_Data[x];
	}
	cout << endl;
}

entry::~entry()
{
}
