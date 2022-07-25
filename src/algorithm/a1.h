#pragma once
#include "alg_base.h"

class a1 : public alg_base
{
public:
	virtual void handle()
	{
		vector<int> arr;
		get_arr(arr);
		int target = 17;

		vector<int> ret(2);
		unordered_map<int, int> hashmap;
		for (int i = 0; i < arr.size(); i++)
		{
			auto it = hashmap.find(target - arr[i]);
			if (it != hashmap.end())
			{
				ret = {it->second, i};
				break;
			}

			hashmap[arr[i]] = i;
		}

		cout << "[" << ret[0] << ", " << ret[1] << "]" << endl;
	}
};