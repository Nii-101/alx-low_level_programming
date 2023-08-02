- C-more singly linked lists project.

1. *0-print_listint.c -  a function that prints all the elements of a listint_t list and returnd the number of nodes. 
	- **Protoype:size_t print_listint(const listint_t *h).

2. *1-listint_len.c - a function that returns the number of elements in a linked listint_t list.
	- **Prototype: size_t listint_len(const listint_t *h).

3. *2-add_nodeint.c -  a function that adds a new node at the beginning of a listint_t list.
	- Returns the address of the new element or "NULL" if it failed.
	- **Prototype: listint_t *add_nodeint(listint_t **head, const int n).

4. *3-add_nodeint_end.c - a function that adds a new node at the end of a listint_t list.
	- Returns the address of the new element or "NULL" if it failed.
	- *Prototype: listint_t *add_nodeint_end(listint_t **head, const int n).

5. *4-free_listint.c - a function that frees a listint_t list.
	- **Prototype: void free_listint(listint_t *head).

6. *5-free_listint2.c -  a function that frees a listint_t list.
	- Functions sets the **head** to **NULL**
	- Prototype: void free_listint2(listint_t **head);

