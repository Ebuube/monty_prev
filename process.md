# PROCESS FLOW FOR THE MONTY PROGRAM

`Usage: monty <filename>`

- Monty opens the file
- Monty reads each line starting from line 1 (the first line of the file).
- Monty splits the string into words using the delimiters ` \n\t\a\b`.
- The first word should be a monty opcode such as pop, push, pint, add, etc.
- The second word is expected if the first opcode requires an argument
- Monty determines the type of opcode it is.
- If recogninzed, monty will attempt running the opcode. Note, the line number is passed to the opcode function.
- if the line contains an invalid instruction (the first word), it will terminate with an appropriate error message.
- If it can't allocate any more space, monty generates the correct error message.
