#pragma once
#include <vector>
/*\
|*|		The entry should store x bytes of data, these entries should be tied to entities to give them meaning,  
|*|		this prevents the need to the server to understand the data. So a vector will never need to be defined
|*|		on the server but can still be understood on the client side. This means  
|*|
|*|
|*|
|*|
|*|
\*/
#include <iostream>
#include <vector>
using namespace std;
class entry
{
public:
	int m_LengthOfData;
	vector<char> m_Data;
	
	entry(vector<char> data);
	~entry();
	void writeData();
};

