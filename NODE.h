#pragma once

#define CODE_SIZE 256

typedef struct node {
	unsigned char symb = '0';		//������ ������
	unsigned char isSymb = '0';	//������ ������� �������
	unsigned int freq = 0;		//������� ������������� ����
	char code[CODE_SIZE];		//������� ��� �������
	int level;		//������� ������� ������
	struct node* left = nullptr;
	struct node* right = nullptr;
	struct node* next = nullptr;
}NODE;

// Standart functions
NODE* CreateNode(unsigned char symb, unsigned char isSymb, unsigned int freq);
NODE* Add2List(NODE* head, NODE* newnode);
//void Add2List(NODE** pphead, NODE* newnode);
void PrintList(NODE* phead);
NODE* DeleteList(NODE* phead);
void PrintTree(const NODE* root);

// Special functions
NODE* MakeNodeFromNode(NODE* left, NODE* right);
NODE* MakeTreeFromList(NODE* head);
NODE* MakeTree(NODE* phead);
void MakeCodes(NODE* head, char code[], int level);