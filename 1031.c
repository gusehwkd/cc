/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point {
	int x;
	int y;
};
struct rect {
	struct point p1; // 직사각형의 한 모퉁이
	struct point p2; // 직사각형의 반대 모퉁이
};
int main(void)
{
	struct rect r;
	int w, h, area, peri;
		printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;
	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n",
		area, peri);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
int main(void)
{
	struct student list[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}
	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};
int main(void)
{
	printf("20230867 컴퓨터공학과 장현도\n\n");
	int studentCount = 0;

	while (1) {

		struct student s;
		printf("학번을 입력하시오: ");
		scanf("%d", &s.number);

		if (s.number == -1) {
			break;
		}

		printf("이름을 입력하시오: ");
		scanf("%s", s.name);

		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &s.grade);

		studentCount++;

		printf("\n");
		printf("학번: %d\n", s.number);
		printf("이름: %s\n", s.name);
		printf("학점: %f\n", s.grade);
	}
	printf("학생 수: %d명 입니다.\n", studentCount);
	return 0;
}
*/

/*
#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
struct student list[] = {
{ 20120001, "홍길동", 4.2 },
{ 20120002, "김철수", 3.2 },
{ 20120002, "김영희", 3.9 }
};
int main(void) {
	int i, size;
	struct student max_stu, min_stu;
	
	size = sizeof(list) / sizeof(list[0]);

	max_stu = list[0];
	min_stu = list[0];

	for (i = 0; i < size; i++) {
		if (list[i].grade > max_stu.grade)
			max_stu = list[i];

		if (list[i].grade < min_stu.grade)
			min_stu = list[i];
	}

	printf("평점이 가장 높은 학생은 (이름 %s,학번 %d, 평점 %.1f)입니다\n", max_stu.name, max_stu.number, max_stu.grade);
	printf("평점이 가장 낮은 학생은 (이름 %s,학번 %d, 평점 %.1f)입니다\n", min_stu.name, min_stu.number, min_stu.grade);

	return 0;
}
*/
