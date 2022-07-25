#pragma once
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

using namespace std;

class alg_base
{
public:
	virtual void handle() = 0;

	void get_arr(std::vector<int>& arr)
	{
		int len = 10;
		cout << "arr: [";
		for (int i = 0; i < len; i++)
		{
			arr.push_back(i);
			cout << i;
			if (i < len - 1)
				cout << ", ";
			else
				cout << "]" << endl;
		}
	}
};