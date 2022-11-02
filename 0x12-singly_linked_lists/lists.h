#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - malloc'ed string
 * @len: len of the str
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print _list(const list_t *h);

#endif
