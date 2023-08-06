/* The context-free grammar defining the set of all legal regular expressionsin */

<expression> ::== <term> | <term> + <expression>
<term> ::== <factor> | <factor><term>
<factor> ::== (<expresion>) | v | (<expression>) * | v*


/*The program for general regular-expression pattern-matching in this dir 
 * is effecient and quite useful. Versions of these program with a few added 
 * amenities is likely to be among the most heavily used utilities on many computer systems. */

/* We used the context-free grammar to specify a particular "pattern": 
 * a swquence of characters with legally balanced parenthese.
 * The parser then checks to see if the pattern occurs in the input. */

/* A "compiler-compiler" is a program which takes two grammars as input and 
 * produces a compiler which translates strings from on language to the other as output
 * Think of a linear tranformation relationship being computed for translation. */
