// ProjectDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "C:\Users\Ghost\source\repos\ProjectFunctions\ProjectFunctions\ProjectFunctions.h"
#include "C:\Users\Ghost\source\repos\ProjectFunctions\ProjectFunctions\ProjectFunctions.cpp"
#include <iostream>
#include <string>

extern "C" __declspec(dllexport) void airport(char *n,double x, double y, char *c)
{
	ProjectFunctions PJ(n, x, y, c);
	PJ.addAirport();
}

