#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
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

#endif /* SINGLYLINKEDLIST_H */

#ifndef PROTOTYPE_H
#define PROTOTYPE_H

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* PROTOTYPE_H */
