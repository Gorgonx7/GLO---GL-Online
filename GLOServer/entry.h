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

class entry
{
public:
	int m_LengthOfData;
	char * m_Data;
	
	entry(int lengthOfData, char * data);
	~entry();
	void writeData();
};

