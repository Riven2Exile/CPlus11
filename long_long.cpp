
#include <climits>
#include <stdio.h>


void test_longlong()
{
	printf("\n==== test longlong ====\n");

	long long uMin = LLONG_MIN;
	long long uMax = LLONG_MAX;
	long long lInit = -90000000000000LL;
	unsigned long long uInit = 9000000000000000ULL;

	printf("min of long long: %lld\n", uMin);
	printf("max od long long: %lld\n", uMax);
	printf("unsigned long long: %llu\n", uInit);
	printf("size of long long: %d\n", sizeof(long long)); // at least 64bit
}