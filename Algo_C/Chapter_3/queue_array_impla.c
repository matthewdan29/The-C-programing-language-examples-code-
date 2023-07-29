#include <stdio.h>
#include <stdlib.h>

#define max 100

static int queue[max+1], head, tail; 

put(int v)
{
	queue[tail++] = v; 
	if (tail > max)
		tail = 0; 
}

int get()
{
	int t = queue[head++]; 
	if (head > max)
		head = 0; 
	return t; 
}

queueinit()
{
	head = 0; 
	tail = 0;
}

int queueempty()
{
	return head == tail;
}

/* you can easly make a queue made of linked list: 
 * look at the stack with pointers: 
 * change pop() to get() and have the 
 * push() turn into the insert: 
 * remember with insert you have to add the new node to the end 
 * while your removing from the head node for get()*/
