#include <stdio.h>
#include <string.h>

int main() {
	int numStrings, totalCount = 0, maxCount = 0, maxPos;
	char strings[1001][1001];
	scanf("%d", &numStrings);
	for (int i = 0; i < numStrings; i++) {
		scanf("%s", strings[i]);
		int divisor, quotient, count = 0;
		scanf("%d%d", &divisor, &quotient);
		while (quotient / divisor != 0) {
			count += quotient / divisor;
			quotient = quotient % divisor + (quotient / divisor) * 2;
		}
		totalCount += count;
		if (maxCount < count) {
			maxCount = count;
			maxPos = i;
		}
	}
	printf("%d\n%s", totalCount, strings[maxPos]);
	return 0;
}

