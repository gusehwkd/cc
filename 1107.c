/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 도서 정보를 저장할 구조체 정의
struct Book {
    char title[100];
    char author[100];
    int year;
    char publisher[100];
};

int main() {
    struct Book library[100]; // 최대 100권의 도서 정보를 저장할 배열
    int bookCount = 0; // 현재 저장된 도서 수

    while (1) {
        printf("1. 도서 번호로 책 찾기\n2. 저자 이름으로 책 찾기\n3. 제목으로 책 찾기\n4. 새로운 책 추가\n5. 도서관이 소장한 도서의 수 표시\n6. 종료\n메뉴를 선택하세요: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            int bookNumber;
            printf("도서 번호를 입력하세요: ");
            scanf("%d", &bookNumber);
            if (bookNumber >= 0 && bookNumber < bookCount) {
                printf("도서 정보:\n");
                printf("제목: %s\n", library[bookNumber].title);
                printf("저자: %s\n", library[bookNumber].author);
                printf("출판연도: %d\n", library[bookNumber].year);
                printf("출판사: %s\n", library[bookNumber].publisher);
            }
            else {
                printf("해당 도서가 없습니다.\n");
            }
        }
        else if (choice == 2) {
            char author[100];
            printf("저자 이름을 입력하세요: ");
            scanf(" %[^\n]s", author);
            int found = 0;
            for (int i = 0; i < bookCount; i++) {
                if (strcmp(library[i].author, author) == 0) {
                    printf("도서 정보:\n");
                    printf("제목: %s\n", library[i].title);
                    printf("저자: %s\n", library[i].author);
                    printf("출판연도: %d\n", library[i].year);
                    printf("출판사: %s\n", library[i].publisher);
                    found = 1;
                }
            }
            if (!found) {
                printf("해당 저자의 도서가 없습니다.\n");
            }
        }
        else if (choice == 3) {
            char title[100];
            printf("도서 제목을 입력하세요: ");
            scanf(" %[^\n]s", title);
            int found = 0;
            for (int i = 0; i < bookCount; i++) {
                if (strcmp(library[i].title, title) == 0) {
                    printf("도서 정보:\n");
                    printf("제목: %s\n", library[i].title);
                    printf("저자: %s\n", library[i].author);
                    printf("출판연도: %d\n", library[i].year);
                    printf("출판사: %s\n", library[i].publisher);
                    found = 1;
                }
            }
            if (!found) {
                printf("해당 제목의 도서가 없습니다.\n");
            }
        }
        else if (choice == 4) {
            printf("도서 제목: ");
            scanf(" %[^\n]s", library[bookCount].title);
            printf("저자: ");
            scanf(" %[^\n]s", library[bookCount].author);
            printf("출판연도: ");
            scanf("%d", &library[bookCount].year);
            printf("출판사: ");
            scanf(" %[^\n]s", library[bookCount].publisher);
            bookCount++;
            printf("도서가 추가되었습니다.\n");
        }
        else if (choice == 5) {
            printf("도서관이 소장한 도서의 수: %d권\n", bookCount);
        }
        else if (choice == 6) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}
*/
