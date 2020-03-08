#include <iostream>

using namespace std;

int nod(int a, int b) {
	return b ? nod(b, a % b) : a;
}

int sequenceCounterNoCycleForm(int n, int a, int b) {
	int m = 0, nok = (a * b) / nod(a, b);
	m = (n / a) + (n / b) - (n / nok);
	return m;
}