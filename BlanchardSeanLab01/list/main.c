/**
* Name: Sean Blanchard
* Lab/task: Lab 01
* Date: 09/02/2020
**/


#include "list.h"


void load_list(LIST *list)
{
	size_t size = 0;
	while(list != NULL)
	{
		getline(&(list->data), &size, stdin);
		list = list->next;
	}
}

void print_list(LIST *list)
{
	int count = 1;
	while(list != NULL)
	{
		printf("DATA ITEM %d: %s\n", count++, list->data);
		list = list->next;
	}
}

int main(void)
{
   LIST *list;

   allocate_list(&list, NUM_OF_NODES);
   load_list(list);
   print_list(list);
   free_list_emb(list);
 
   allocate_list(&list, NUM_OF_NODES);
   load_list(list);
   print_list(list);
   free_list_tail(list);

   allocate_list(&list, NUM_OF_NODES);
   load_list(list);
   print_list(list);
   free_list_iter(list);
}
