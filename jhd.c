/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define ROWS 2
#define COLS 2
int main(void)
{
	int s[ROWS][COLS];
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			scanf("%d", &s[i][j]);
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);
		printf("\n");
	}
	for (i = 0; i < ROWS; i++)
	{
		for(j=0;j<COLS;j++)
			if (i == j)
			{
				sum += s[i][j];

			}
	}
	printf("%d", sum);

	return 0;
}
*/
/*
#include <stdio.h> //p. 
#define ROWS 3
#define COLS 3
int main(void)
{
	int A[ROWS][COLS] = { { 2,3,0 },
	{ 8,9,1 },
	{ 7,0,5 }
	};
	int B[ROWS][COLS] = { { 1,0,0 },
	{ 1,0,0 },
	{ 1,0,0 }
	};
	int C[ROWS][COLS];
	int r, c;
	// �� ���� ��� ���ϱ�
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			C[r][c] = A[r][c] + B[r][c];
	// ��� ���
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			printf("%d ", C[r][c]);
		printf("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h> //p.
void display(int image[8][16])
{
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++)
		{
			if (image[r][c] == 0)
				printf("*");
			else
				printf("_");
		}
		printf("\n");
	}
}
void inverse(int img[8][16])
{
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (img[r][c] == 0)
				img[r][c] = 1;
			else
				img[r][c] = 0;
		}
	}
}
int main(void)
{
	int image[8][16] = {
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1 },
	{ 1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 } };
	printf("��ȯ�� �̹���\n");
	display(image);
	inverse(image);
	printf("\n\n��ȯ�� �̹���\n");
	display(image);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //P.
int main(void)
{
	char board[3][3];
	int x, y, k, i;
	for (x = 0; x < 3; x++) // ���� �ʱ�ȭ
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	// ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ��
	for (k = 0; k < 9; k++) {
		printf("(x, y) ��ǥ: ");
		scanf(" %d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int A = 1004;
	printf("%x",&A);
	
	return 0;
}
*/
