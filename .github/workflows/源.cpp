#include<stdio.h>
#include<stdlib.h>

typedef struct QQ{
	char name[20];
	QQ* next;
}QQ;

QQ* Init(QQ*&hand) {
	QQ* node, * end;
	hand = (QQ*)malloc(sizeof(QQ));
	end = hand;
	for (int i = 0;i<2;i++) {
		node = (QQ*)malloc(sizeof(QQ));
		scanf("%s", node->name);
		getchar();
		hand->next = node;
		node = node->next;
		hand = hand->next;
	}
	hand = end;
	return hand;
}
int main(){
	QQ* a;
	Init(a);
	FILE* fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("Î´´´½¨\n");
	}
	for (int i = 0; i < 2; i++) {
		a=a->next;
		printf("%s\n", a->name);
		fclose(fp);
	}
	return 0;
}