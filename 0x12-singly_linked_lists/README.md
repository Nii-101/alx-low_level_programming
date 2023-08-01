- C Singly linked lists project

Header File
* lists.h: Header file containing definitions and prototypes for all types and functions written for the project.
Type/File	Definition/Prototype
* struct list_s		•	char *str
* unsigned int len
* struct list_s *next
typedef list_t	struct list_s
0-print_list.c	size_t print_list(const list_t *h);
1-list_len.c	size_t list_len(const list_t *h);
2-add_node.c	list_t *add_node(list_t **head, const char *str);
3-add_node_end.c	list_t *add_node_end(list_t **head, const char *str);
4-free_list.c	void free_list(list_t *head)

Tasks
* 0-print_list.c:A C function that prints out  all the elements of a list_t list and prints [0] is str is NULL.

* 1-list_len.c: A C function that returns the number of elements in a linked list_t list.

* 2-add_node.c: A C function that adds a new node at the beginning a of a list_t list and returns NULL if the function fails.

* 3-add_node_end.c:A  C function that adds a new node at the end of a linked list_t list and returns NULL if the function fails.

* 4-free_list.c:A  C function that frees a list_t list.

* 100-first.c: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed 

* 101-hello_holberton.asm: A 64-bit assembly program that prints Hello, Holberton.  Followed by a new line using only the printf function without interruptionss.


