//============================================================================
// Name        : TriangularNumber.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;
void Number();
bool Divisible(int);
int main()
{
	Number();
	return 0;
}

void Number()
{
	int i = 1 ;
	int tri_num = 0;
	while (i > 0)
	{
		tri_num = tri_num + i;
		if (Divisible(tri_num) == true)
		{
			break;
		}
		i++;
	}
	cout << tri_num;
}

bool Divisible(int a)
{
	int count = 0;
	int i = 1;
	while (i <= sqrt(a))
	{
		if (a % i == 0)
			{
				count = count + 2;
			}
		if (i == sqrt(a))
			count--;
		i++;
	}
	if (count > 500)
		return true;
	else
		return false;
}
