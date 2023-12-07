Doubly linked lists: its a list with two pointers. one pointing to the next and the other to the previous.
its source struct is as follow:
struct double_link
{
	int n;
	struct double_link *prev;
	struct double_link *next;
}
