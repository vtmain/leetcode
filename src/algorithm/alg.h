#pragma once


#include "alg_base.h"
#include "a1.h"			// ����֮��

class alg
{
public:
	void run()
	{
		alg_base* p = new a1;
		p->handle();
	}
};