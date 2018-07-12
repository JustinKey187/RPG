// P1P2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <vector>
#include "healthNode.h"
#include "magicNode.h"
#include "speedNode.h"
#include "strengthNode.h"
#include "PlayerProgress.h"
#include <windows.h>
#include <stdbool.h>
#include <memory>
#include <tchar.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h> 




using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

//#ifndef NULL
//#define NULL NULL

	std::vector<int> healthNode(0, NULL);
	for (unsigned int i = 0; i <=100; i++)
	{
		healthNode.push_back(i);
		srand((unsigned)time(0)); 
		int b = rand() % 100 + 1;

		if (std::find(healthNode.begin(), healthNode.end(), +93) != healthNode.end())
		{
			healthNode.push_back(b);
			cout << "Level up healthnode" << endl;
		}
		else
		{
			cout << "Healthnode did not level up" << endl;
		}
	}


	std::vector<int> magicNode(0, NULL);
	for (unsigned int i = 0; i <= 100; i++)
	{
		magicNode.push_back(i);
		srand((unsigned)time(0));
		int b = rand() % 100+1;

		if (std::find(magicNode.begin(), magicNode.end(), +21) != magicNode.end())
		{
			magicNode.push_back(b);
			cout << "Level up magicnode" << endl;
		}
		else
		{
			cout << "Magicnode did not level up" << endl;
		}
	}


	std::vector<int> strengthNode(0, NULL);
	for (unsigned int i = 0; i <= 100; i++)
	{
		strengthNode.push_back(i);
		srand((unsigned)time(0));
		int b = rand() % 100 + 1;

		if (std::find(strengthNode.begin(), strengthNode.end(), +84) != strengthNode.end())
		{
			strengthNode.push_back(b);
			cout << "Level up strengthnode" << endl;
		}
		else
		{
			cout << "Strengthnode did not level up" << endl;
		}
	}


	std::vector<int> speedNode(0, NULL);
	for (unsigned int i = 0; i <= 100; i++)
	{
		speedNode.push_back(i);
		srand((unsigned)time(0));
		int b = rand() % 100 + 1;

		if (std::find(speedNode.begin(), speedNode.end(), +43) != speedNode.end())
		{
			speedNode.push_back(b);
			cout << "Level up speednode" << endl;
		}
		else
		{
			cout << "Speednode did not level up" << endl;
		}
	}
	
}


//#endif



