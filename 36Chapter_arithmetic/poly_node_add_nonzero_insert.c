#include <stdio.h>
#include <stdlib.h>

struct node *add(struct node *p, struct node *q)
{
	struct node *t; 
	t = z; 
	z->c = 0; 
	z->j = maxN; 
	while ((p ! = z) || (q != z))
	{
		if ((p->j == q->) && ((p->c + q->c) != 0))
		{
			t = insert(t, p->c+q->c, p->j); 
			p = p->next; 
			q = q->next; 
		}
		else 
			if (p->j < q->j)
			{
				t = insert(t, p->c, p->j); 
				p = p->next; 
			}
			else
				if (q->j < p->j)
				{
					t = insert(t, q->c, p->j); 
					q = q-next; 
				}
	}
	/* no pointer to *t */
	t->next = z; 
	t = z->next; 
	z->next = z; 
	return t; 
}
