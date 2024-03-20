#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void Lower(FILE* f, char* link) {
	FILE* g; char r;
	g = fopen(link, "w");
	char c = getc(f), a = 'a';
	while (c != EOF) {
		a = 'a';
		r = c;
		if (c >= 'A' && c <= 'Z') {
			for (char i = 'A'; i != 'Z'; i++) {
				if (c == i) {
					r = a;
					break;
				}
				a++;
			}
		}
		fprintf(g, "%c", r);
		c = getc(f);
	}
	fclose(g);
}


int main() {
	FILE* f; char name[20];
	char link[] = { "d:\\Valeria\\g.txt" };
	f = fopen("d:\\Valeria\\F.txt", "r");
	Lower(f, link);

	fclose(f);
	return 0;
}