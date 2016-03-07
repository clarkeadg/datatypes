
/* Data Types

1. Basic Types

(a) integer types
char 0-255
unsigned char 0-255
signed char -128-127
int -32,768 - 32,767 || -2,147,483,648 - 2,147,483,647
unsigned int 0 to 65,535 or 0 to 4,294,967,295
short -32,768 to 32,767
unsigned short 0 to 65,535
long -2,147,483,648 to 2,147,483,647
unsigned long 0 to 4,294,967,295

(b) floating-point types
float 1.2E-38 to 3.4E+38
double 2.3E-308 to 1.7E+308
long double 3.4E-4932 to 1.1E+4932

2. The type void // but it is basically a keyword to use as a placeholder where you would put a data type, to represent "no data".
void

3. Enumerated types // An enumeration is a user-defined data type consists of integral constants and each integral constant is give a name. Keyword enum is used to defined enumerated data type.
enum Boolean 
{ 
  false, 
  true 
};

4. Derived types
(a) Pointer types // A pointer type describes a value that represents the address of an object of a stated type.
int *p;          //  p is a pointer to an int type                 
double *q();     //  q is a function returning a pointer to an object of type double                         
int (*r)[5];     //  r is a pointer to an array of five elements (r holds the address to the first element of the array)                                    
const char s[6]; //  s is a const-qualified array of 6 elements    

(b) Array types //  An array type can be formed from any valid completed type.
char x[] = "Hi!"   //  Declaring an array x

(c) Structure types //  A structure type is a sequentially allocated nonempty set of objects, called members.
struct employee { char name[30]; int age; int empnumber; };
struct employee ed, mary;

(d) Union types // A union type can store objects of different types at the same location in memory. 
union {
  int a;
  union {
    int a;  // This 'a' refers to a different object than the previous 'a' 
  };
};

(e) Function types // A function type describes a function that returns a value of a specified type.
int uppercase(int lc)
{
  int uc = lc + 0X20;
  return uc;
}
*/

#include <stdio.h>

int main() {
  printf("Data Types\n");

    printf("1. Basic Types\n");
      printf("(a) integer types\n"); 
        printf("type: char value:");  
          char myChar = 0;
          printf("%i",myChar);
          printf("\n");

    printf("4. Derived types\n");
      printf("(b) Array\n");
        char myChar2[] = "hi";
        printf("%s",myChar2);
  
  // done
  printf("\n");
}
