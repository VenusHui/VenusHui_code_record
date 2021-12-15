#pragma once
#ifndef STUDENTLIST_H_
#define STUDENTLIST_H_

#include "Student.h"

template <typename Type>
struct ListNode // 链表结点
{
	Type data;
	ListNode* next;
	ListNode() : next(nullptr) {};
	ListNode(Type data) : data(data), next(nullptr) {};
	ListNode(ListNode<Type>* node) : data(node->data), next(node->next) {};
};

struct CatePair {
	string category;
	int num;
	CatePair() : category(""), num(0) {}
	CatePair(string cate) : category(cate), num(1) {}
};

class StudentList
{
private:
	ListNode<Student>* first;
	int listSize;
	int maleNum;
	int femaleNum;
	ListNode<CatePair>* cateFirst;

public:
	StudentList(int num);
	~StudentList();

	bool isEmpty() const { return listSize == 0; } // 判断链表是否为空
	int size() const { return listSize; } // 获取链表长度

	ListNode<Student>* getFirstNode() const { return first; }
	int getElemByID(int admissionID) const; // 获取学号为admissionID的Student在List中的编号

	Student& getElem(int index) const; // 获取编号为index的Student
	void insertElem(int index); // 在编号index的Student后插入
	void deleteElem(int index);	// 删除编号为index的Student
	void summary();

	friend ostream& operator<<(ostream& out, StudentList& list);
};
#endif // !STUDENTLIST_H_
