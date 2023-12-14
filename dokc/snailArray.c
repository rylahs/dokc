#include <stdio.h>

int main(void) {
	int num = 5;

	int arr[5][5] = { 0 };
	int cnt = 0;
	int len = num;
	int row = 0;
	int col = -1;
	int op = 1;

	while (1) {
		for (int i = 0; i < len; i++) {
			col += op;
			arr[row][col] = ++cnt;
		}
		if (--len == 0)
			break;
		for (int i = 0; i < len; i++) {
			row += op;
			arr[row][col] = ++cnt;
		}
		op = -op;
	}


	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf(" %2d", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
