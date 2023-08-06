#include <stdio.h>
#include <stdlib.h>

/* The idea is to keep track of all states that could possibly be encountered
 * while the machine is "lookingat" the current input character */

/* The main loop of the program removes a stat from the deque and perfroms 
 * the action required. If a character is to be matched, the input is checked for the required character */

#define scan -1
int match(char *a)
{
	int n1; 
	int n2; 
	int j = 0; 
	int N = strlen(a); 
	int state = next1[0]; 
	/* a "deque()" is a struct that has properties of a stack and quene 
	 * only thing is it deletes from the beginning of the list */
	int dequeint(); 
	int put(scan); 
	while (state)
	{
		if (state == scan) 
		{
			j++; 
			put(scan); 
		}
		else if (ch[state] == a[j])
			put(next1[state]); 
		else if (ch[state] == ' ')
		{
			n1 = next1[state]; 
			n2 = next2[state]; 
			push(n1); 
			if (n1 != n2)
				push(n2); 
		}
		if (dequeempty() || j == N)
			return 0; 
		state = pop();
	}
	return j; 
}
