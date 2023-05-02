#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list 
 * @n: integer 
 * @nxxt: pointes to the next node
 * 
 * Descrition: singly linked list node structure
 * for alx projects
 * 
 */
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
