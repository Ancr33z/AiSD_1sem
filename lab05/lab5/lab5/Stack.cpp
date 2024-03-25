#include <iostream>
#include "Stack.h"

using namespace std;

void push(char x, Stack*& myStk)
{
	Stack* e = new Stack;    //выделение памяти для нового элемента
	e->data = x;             //запись элемента x в поле data 
	e->next = myStk;         //перенос вершины на следующий элемент 
	myStk = e;				 //сдвиг вершины на позицию вперед
}

int isEmpty(Stack*& myStk) {
	if (myStk == NULL)
	{
		return 1;               //если стек пуст - возврат (-1) 
	}
	else {
		return 0;
	}
}

char pop(Stack*& myStk)   //Извлечение (удаление) элемента из стека
{
	if (myStk == NULL)
	{
		return -1;               //если стек пуст - возврат (-1) 
	}
	else
	{
		Stack* e = myStk;        //е-переменная для хранения адреса элемента
		int x = myStk->data;    //запись элемента из поля data в перем. x 
		if (myStk)
			myStk = myStk->next;   //перенос вершины
		
		delete e;
		return x;
		
	}
}

char top(Stack*& myStk) 
{
	if (myStk == NULL)
	{
		cout << "Стек пуст!" << endl;
		return 1;               //если стек пуст - возврат (-1) 
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
//        cout << "Скобки расставлены верно" << endl << endl;
//    if (count == 0)
//        cout << "Скобки отсутствуют" << endl << endl;
//    else
//        if (!prov(s, count) && count > 0)
//            cout << "Скобки расставлены неверно" << endl << endl;
//}
//void main() {
//    setlocale(LC_ALL, "rus");
//    while (true) {
//        int count = 0;
//        cout << "Введите строку с клавиатуры: ";
//        string str;
//        getline(cin, str);
//        test(str, count);
//    }
//}