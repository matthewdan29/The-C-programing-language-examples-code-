#include <stdlib.h>
#include <stdio.h>

/* First build the Huffman code is to count the frequency of each character within the message to be encoded. The filling code fills an array "count[26]" with frequency counts for a message in a string 'a'. (dir 19 has the index() method)*/

for (i = 0; i <=26; i++)
	count[i] = 0; 
for (i = 0; i < M; i++)
	count[index(a[i])]++; 

/* The next step is to build the coding trie from the bottom up according to the frequencies. */


/* The construction of the tree of frequencies involves the general process of 
 * removing the smallest from a set of unordered elements, 
 * so we'll use the "pqdownheap()" procedure from dir 11 to build and maintiain an indirect heap on the frequency values. */

for (i = 0, N = 0; i <= 26; i++)
	if (count[i]) 
		heap[++N] = i; 
for (k = N; k > 0; k--)
	pqdownheap(k); 

/* This assumes that the sense of the inequalities in the implementation of "pqdownheap()" has been reversed. */

/* Use the procedure to construct the tree or trie above is straightforward
 * now we take the two smallest elements off the heap, add them and put the
 * result back into the heap. At each create one new count, an ddecrease the size of the heap by one. This process creates "N-1" new counts, for each of the internal nodes of the tree being creaded */

while(N > 1)
{
	t = heap[1]; 
	heap[1] = heap[N--]; 
	pqdownheap(1); 
	count[26 + N] = count[heap[1]] + count[t]; 
	dad[t] = 26+N; 
	dad[heap[1]] = -26-N; 
	heap[1] = 26+N; 
	pqdownheap(1); 
}
dad[26+N] = 0; 

/* The first two lines of this loop are actually "pqremove"; 
 * the size of the heap is decreased by one. Then a new internal node is "created" with index "26+N" and given a value equal to the sum of the value at the root and value just removed. */

/* The following program fragment constructs the actual "Huffman code" as represented by the trie, from the representation of the coding tree computed during the sifting process.*/

for (k = 0; k <= 26; k++)
	if (!count[k])
	{
		code[k] = 0; 
		len[k] = 0; 
	}
	else 
	{
		i = 0; 
		j = 1; 
		t = dad[k]; 
		x = 0; 
		while (t)
		{
			if (t < 0)
			{
				x +=j; 
				t = -t; 
			}
			t = dad[t];
			j += j; 
			i++;
		}
		code[k] = x; 
		len[k] = i; 
	}

/* Finally. you can use these computed representations of the code to encode the message */

for (j = 0; j < M; j++)
	for (i = len[index(a[j])]; i > 0; i--)
		printf("%1d", bits(code[indx(a[j]), i-1, 1])); 

/* This program uses the "bit()" procedure from dir 10 and 17 to access single bits. */
