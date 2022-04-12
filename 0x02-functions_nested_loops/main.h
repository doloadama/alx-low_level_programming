#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
void print_alphabet(void)
{
char c;
for (c = 0; c <= 26; ++c)
putchar('a' + c);
return (c);
}




void print_alphabet_x10(void);
int _islower(int c);
int _isaplha(int c);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_tables(void);
int add(int, int);
void print_to_98(int n);
void print_timrs_table(int n);

#endif /* _MAIN_H  */
