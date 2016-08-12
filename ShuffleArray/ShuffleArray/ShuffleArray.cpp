// ShuffleArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ShuffleArray.h"

int main()
{
	int m;
	cin >> m;
	vector<int> MyVec(m);
	for (int i = 0; i < m; i++)
		cin >> MyVec[i];
	ShuffleArray SA(MyVec);
	MyVec = SA.shuffle();
	for (int i = 0; i < m; i++)
		cout << MyVec[i] << " ";
	cout << '\n';
	MyVec = SA.shuffle();
	for (int i = 0; i < m; i++)
		cout << MyVec[i] << " ";
	cout << '\n';
	MyVec = SA.reset();
	for (int i = 0; i < m; i++)
		cout << MyVec[i] << " ";
	cout << '\n';
    return 0;
}

