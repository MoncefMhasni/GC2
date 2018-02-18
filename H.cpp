
#include <bits/stdc++.h>

using namespace std;

const int N = 110000;
int p[N];

void sieve(void) {
	for(int i = 0; i < N; i++)
		p[i] = 1;

	p[0] = p[1] = 0;
	for(int i = 2; i < N; i++) {
		if(p[i]) {
			for(int j = i + i; j < N; j += i)
				p[j] = 0;
		}
	}
}

void doCase(void) {
	int n;
	cin >> n;

	int mnPrime, mxPrime;
	mnPrime = mxPrime = -1;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(p[x]) {
			if(mnPrime == -1) mnPrime = mxPrime = i + 1;
			else mxPrime = i + 1;
		}
	}

	if(mnPrime != -1)
		cout << mnPrime << " " << mxPrime << endl;
	else
		cout << "-1" << endl;
}

int main(void) {

	sieve();
	
	int t;
	cin >> t;
	while(t--)
		doCase();

	return 0;
}
