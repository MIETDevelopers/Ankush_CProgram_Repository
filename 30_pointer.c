#include <stdio.h>//preprocesssor directive to include standard input or output header file

int main()//Where the execution start from main 
{
    int a;  //declare the integer and a is varaible
    a = 10;//declare the a and its value is 10
    int *p = &a;     // declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;//return statment
}
