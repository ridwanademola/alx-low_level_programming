i#ifndef MAIN_H
#define MAIN_H 
    
/* 
    * This heaer file contains declarations 
    * for prototypes functions defined in the 0x06. C - More pointers, arrays and strings 
    * tasks and directory 
    * This thing is all about creating my own library 
    * the task defines the function 
  */ 
   
  /*enclosing the files content in between ifndef, define & endif 
  *it stops the file from processing the file twice if ti is included twice 
 *if not so, this will cause an error 
  */ 
  
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);



#endif 
