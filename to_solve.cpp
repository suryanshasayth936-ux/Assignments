#include <iostream>
using namespace std;

class LinkedList{
public:
int data;
LinkedList* head;

LinkedList(){
head = NULL;
}

void insertFront(int x);  
// done
void insertEnd(int x);
// done
void insertPosition(int pos,int x);
void deleteFront();
void deleteLast();
void deletePosition(int pos);
bool search(int key);
int length();
};