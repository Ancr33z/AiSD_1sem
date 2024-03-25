#include <iostream>
#include "Stack.h"

using namespace std;

void push(char x, Stack*& myStk)
{
	Stack* e = new Stack;    //��������� ������ ��� ������ ��������
	e->data = x;             //������ �������� x � ���� data 
	e->next = myStk;         //������� ������� �� ��������� ������� 
	myStk = e;				 //����� ������� �� ������� ������
}

int isEmpty(Stack*& myStk) {
	if (myStk == NULL)
	{
		return 1;               //���� ���� ���� - ������� (-1) 
	}
	else {
		return 0;
	}
}

char pop(Stack*& myStk)   //���������� (��������) �������� �� �����
{
	if (myStk == NULL)
	{
		return -1;               //���� ���� ���� - ������� (-1) 
	}
	else
	{
		Stack* e = myStk;        //�-���������� ��� �������� ������ ��������
		int x = myStk->data;    //������ �������� �� ���� data � �����. x 
		if (myStk)
			myStk = myStk->next;   //������� �������
		
		delete e;
		return x;
		
	}
}

char top(Stack*& myStk) 
{
	if (myStk == NULL)
	{
		cout << "���� ����!" << endl;
		return 1;               //���� ���� ���� - ������� (-1) 
	}
	else {
		return myStk->data;
	}
}

//#include <iostream>
//#include <string>
//#include "Stack.h"
//using namespace std;
//bool prov(const string& s, int& count) {
//    Stack* stack;
//    for (char c : s) {
//        switch (c) {
//        case '(':
//            push(')', stack);
//            count++;
//            break;
//        case '[':
//            push(']', stack);
//            count++;
//            break;
//        case '{':
//            push('}', stack);
//            count++;
//            break;
//        case ')':
//        case ']':
//        case '}':
//            if (isEmpty(stack) || top(stack) != c) {
//                return false;
//            }
//            pop(stack);
//            break;
//        default:
//            break;
//        }
//    }
//    return isEmpty(stack);
//}
//void test(const string& s, int& count) {
//    if (prov(s, count) && count > 0)
//        cout << "������ ����������� �����" << endl << endl;
//    if (count == 0)
//        cout << "������ �����������" << endl << endl;
//    else
//        if (!prov(s, count) && count > 0)
//            cout << "������ ����������� �������" << endl << endl;
//}
//void main() {
//    setlocale(LC_ALL, "rus");
//    while (true) {
//        int count = 0;
//        cout << "������� ������ � ����������: ";
//        string str;
//        getline(cin, str);
//        test(str, count);
//    }
//}