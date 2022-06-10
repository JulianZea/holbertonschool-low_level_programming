#ifndef MAIN_H
#define MAIN_H
/**
 *_putchar - writes the character 'c' to standaroutput
 *@c : The character to print in ASCII
 *Return: Always 1 is (success)
 *Error: -1 is returned.
 */
int _putchar(char c);

/**
 *print_alphabet - writes the character "print_alphabet" to standaroutput
 */

void print_alphabet(void);

/**
 *print_alphabet_x10 - writes the character "void print_alphabet_x10(void);" to standaroutput
 */
void print_alphabet_x10(void);


/**_islower - lowercase character
 *Description: c- character to verify
 *Returns: 1 if lowercase, 0 if uppercase
*/

int _islower(int c);

/**
 * _isalpha - verify all alphabet character
 * @c: character to verify
 * Return: 1 if lowercase and uppercase, 0 if not alphabet
 */
int _isalpha(int c);

/**
 * print_sign - 
 * @e: character to verify
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n);


/**
 *_abs - show absolute value of integer
 *@var: integer to converter
 *Return: absolute value
 */

int _abs(int var);

/**
 * print_last_digit - print the last digit of number
 * @var1: Number where extract the last digit
 * Return: the Last number
 */

int print_last_digit(int var1);

/*
 *task 10
 */
int add(int num1, int num2);

/*
 *task 11
 */

void print_to_98(int n);
#endif
