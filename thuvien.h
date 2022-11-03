#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int MAX = 50;
struct MaTran {
	int list[MAX][MAX];
	int n;
	int m;
};
int docMaTran(MaTran& a,const char* filename);
void luuMaTran(MaTran& a, char* filename);
void nhapMaTran(MaTran& a);
void inMaTran(MaTran a);
int tinhTongLe(MaTran a);