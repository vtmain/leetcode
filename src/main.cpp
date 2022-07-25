// main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#ifdef _WIN32
#include "windows.h"
#endif

#include "algorithm/alg.h"

int main()
{
    alg* p = new alg;
    p->run();

#ifdef _WIN32
    system("PAUSE");
#endif
    return 0;
}

