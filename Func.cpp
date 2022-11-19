#include "Func.h"

void addEmployee(List** list, const People person)
{
	while (*list)
	{
		list = &(*list)->next;
	}

	List* elem = new List;
	elem->pers = person;
	(*list) = elem;

}

void deleteEmployee(uint32_t id, List** list)
{
	if ((*list)->pers.id == id)
	{
		(*list) = (*list)->next;
	}
	else
	{
		while ((*list)->next and (*list)->next->pers.id != id)
		{
			list = &(*list)->next;
		}

		if ((*list)->next)
		{
			(*list)->next = (*list)->next->next;
		}
	}
}

bool findEmployee(uint32_t id, const List* list)
{
	while (list and list->pers.id != id)
	{
		list = list->next;
	}

	if (list)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool findEmployee(std::string name, const List* list)
{
	while (list and list->pers.name != name)
	{
		list = list->next;
	}

	if (list)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void deleteList(List** list)
{
	if ((*list)->next)
	{
		deleteList(&(*list)->next);
	}
	delete (*list);
}

