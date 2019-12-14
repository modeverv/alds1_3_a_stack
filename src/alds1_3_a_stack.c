/*
 ============================================================================
 Name        : alds1_3_a_stack.c
 Author      : lovesaemi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, S[1000];

void push(int x) {
	S[++top] = x;
}
int pop() {
	top--;
	return S[top + 1];
}
int main(void) {
	int a, b;
	top = 0;
	char s[100];
//	printf("input:\n");
	while (scanf("%s", s) != EOF) {
//		printf("%s\n", s);
//		printf("%c\n", s[0]);
		if (s[0] == '+') {
			a = pop();
			b = pop();
			push(a + b);
		} else if (s[0] == '-') {
			b = pop();
			a = pop();
			push(a - b);
		} else if (s[0] == '*') {
			a = pop();
			b = pop();
			push(a * b);
		} else {
			push(atoi(s));
		}
	}
	printf("%d\n", pop());
	return EXIT_SUCCESS;
}
