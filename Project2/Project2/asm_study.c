#include <stdio.h>

long function(long a, long b) {
	long x = a, y = b;
	return (x + y);
}

int main(int argc, char* argv[]) {
	long a = 1, b = 2;
	printf("%d\n", function(a, b));
	return 0;
}