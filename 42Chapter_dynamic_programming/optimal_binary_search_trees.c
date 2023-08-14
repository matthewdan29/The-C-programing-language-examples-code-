#include <stdlib.h>
#include <stdio.h>

/* For each 'j', the computation is done by trying each node as the root and using precomputed values to determine the best way to do the subtrees. For each 'k' between 'i' and "i+j", we want to find the optimal tree containing "k sequance to k()~'i+1'" with "k~k " at the root.*/

/*~ notation will be subed for "sub" lol I'm not typing sub if you know the level of math that being computed you know its endless "sub()"*/
