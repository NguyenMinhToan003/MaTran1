#include"thuvien.h"
void main() {
	MaTran a,b;
	char* file1 = new char;
	char* file2 = new char;
	strcpy(file1, "MaTran1.txt");
	strcpy(file2, "MaTran2.txt");
	nhapMaTran(a);
	luuMaTran(a, file1);
	luuMaTran(a, file2);
	docMaTran(b, file2);
	cout <<"\nTong le cua danh sach b la "<<tinhTongLe(b);
	system("pause");
	
}
