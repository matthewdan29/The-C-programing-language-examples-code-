In this dir examples of some algorithms with the methods: 
	designed primarily to reduce space consumption without using up too much time. 


One easy way to represent the code is with a trie (seen in dir 17). Any trie with "M" external nodes can be used to encode any message  with "M" different characters. The code for each character is determined by the path from the root to that character, with 0 for the "go left"  and 1 for the "go right", as usual in a trie.

The trie representation guarantees that no character cod is the prefix of another, so the string is uniquely decodable from the trie. Starting at the root, proceed down the trie according the bits of the message: eact time an external node is encountered, output the character at that node and restart at the root. 

The general method for finding the code was discovered by D. Huffman in 1952 and is called "Huffman encoding"
 
