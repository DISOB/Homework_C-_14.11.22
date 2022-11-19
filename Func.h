#pragma once
#include <iostream>
#include <string>



typedef struct node
{
	uint32_t id;
	std::string name;
	uint16_t grade;
} People;


typedef struct Node
{
	People pers;
	Node* next = nullptr;
} List;


void addEmployee(List** list, const People person);
void deleteEmployee(uint32_t id, List** list);
bool findEmployee(uint32_t id, const List* list);
bool findEmployee(std::string name, const List* list);
void deleteList(List** list);

