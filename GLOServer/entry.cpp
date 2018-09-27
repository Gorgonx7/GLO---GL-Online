#include "entry.h"
#include <iostream>

using namespace std;

entry::entry(vector<char> data)
{

	this->m_Data = data;
	

}

void entry::writeData() {
	for (int x = 0; x < m_Data.size(); x++) {
		cout << m_Data[x];
	}
	cout << endl;
}

entry::~entry()
{
}
