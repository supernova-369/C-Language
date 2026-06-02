In C language which data type must be taken in order to input string, no. and special characters in a single data type.

To input a value that contains letters, numbers and special characters in C, use an array of the data type char, which forms a string in C.
C does not have a built-in string data type, but a character array (e.g., char str[100];) allows inputting and storing any combination of alphanumeric and special characters as strings, since each character (including digits and symbols) is represented as a char value in C.

To read such input, use format specifiers with functions like scanf("%s", str); for basic (whitespace-delimited) input, or fgets(str, 100, stdin); to include spaces and special characters.

There is no separate C data type capable of storing all these in a single primitive; arrays of char are the standard solution.