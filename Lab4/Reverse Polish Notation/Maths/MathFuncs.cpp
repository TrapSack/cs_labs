
#include "pch.h"

#include "mathfuncs.h"

__declspec(dllexport) double __stdcall
plus(double a, double b)
{
    return a + b;
}

__declspec(dllexport) double __cdecl
minus(double a, double b)
{
    return a - b;
}

__declspec(dllexport) double WINAPI
multi(double a, double b)
{
    return a * b;
}

__declspec(dllexport) double __cdecl
divide(double a, double b)
{
    return a / b;
}