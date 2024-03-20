#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



int main() {
	FILE* f; char name[20];
	char link[] = { "d:\\Valeria\\g.txt" };
	f = fopen("d:\\Valeria\\F.txt", "r");
	Lower(f, link);

	fclose(f);
	return 0;
}