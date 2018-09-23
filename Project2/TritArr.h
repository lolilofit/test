#ifndef _TRITARR_
#define _TRITARR_
#include"OneTrit.h"
#include<iostream>
#include<vector>

class TritArr
{
	int count = 0;
public:
	std::vector <unsigned int> arr;

public:
	TritArr(int length);

	~TritArr();

	void Trim(int last_index);

	int LastUnknown();

	int cardinality(Trit val);

	void Shrink();

	int read(int pos);

	void SetTrit(int pos, Trit val);

	TritArr operator[](int pos);

	TritArr &operator=(const Trit &val);
};

 bool operator==(TritArr trit_arr, Trit val);

#endif