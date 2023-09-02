#include <stdio.h>

int main()
{
	unsigned a, b, n, m, ua, ub;

	scanf("%u %u", &a, &b);

	n = a, m = b, ua = ub = 0;

	while (n) { if (n % 2) ua++; n /= 2; }	
	while (m) { if (m % 2) ub++; m /= 2; }	

	if (ua == ub)
		printf("%u", a < b ? a : b);
	else if (ua > ub) printf("%u", a);
	else printf("%u", b);

	return 0;
}

// scor 100
