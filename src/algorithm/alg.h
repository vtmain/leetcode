#pragma once


#include "alg_base.h"
#include "a1.h"			// 两数之和

class alg
{
public:
	void run()
	{
		alg_base* p = new a1;
		p->handle();
	}
};