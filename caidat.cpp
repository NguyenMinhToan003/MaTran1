#include "thuvien.h"
int docMaTran(MaTran& a, const char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &a.n);
		fscanf(fp, "%d", &a.n);
		for (int i = 0; i < a.n; i++)
			for (int j = 0; j < a.m; j++)
				fscanf(fp, "%d", &a.list[i][j]);
		fclose(fp);
		return 1;

	}
	return 0;
}

void luuMaTran(MaTran& a, char* filename) {
	FILE* fp;
	fp = fopen(filename, "w");
	if (fp != NULL) {
		fprintf(fp, "%d", a.n);
		fprintf(fp, "\t");
		fprintf(fp, "%d", a.m);
		fprintf(fp, "\n");
		for (int i = 0; i < a.n; i++)
		{
			for (int j = 0; j < a.m; j++)
			{
				fprintf(fp, "%d", a.list[i][j]);
				fprintf(fp, "\t");
			}
			fprintf(fp, "\n");
		}
		fclose(fp);
	}
}
void inMaTran(MaTran a) {
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.m; j++)
			cout << a.list[i][j] << "\t";
		cout << "\n";
	}
}

void nhapMaTran(MaTran& a) {
	cout << "\nNhap so dong ";
	cin >> a.n;
	cout << "\nNhap so cot ";
	cin >> a.m;
	for( int i =0; i < a.n; i ++)
		for (int j = 0; j < a.m; j++)
		{
			cout << "[" << i << "][" << j << "]=";
			cin >> a.list[i][j];
		}
}


int tinhTongLe(MaTran a) {
	int s = 0;
	for (int i = 0; i < a.n; i++)
		for (int j = 0; j < a.m; j++)
			if (a.list[i][j] % 2 == 1)
				s += a.list[i][j];
	return s;
}