#pragma once


#include "alg_base.h"
#include "a_1.h"			// 两数之和

class alg
{
public:
	void run()
	{
		alg_base* p = new a_1;
		p->handle();
	}
};