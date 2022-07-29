#include <stdio.h>
#include <stdlib.h>

int main()  
{
    int age = 47;
    double gpa = 3.7;
    char grade = 'A';
    char phrase[] = "Strings are made by creating an array of characters";
    printf("%d %f %c %s\n", age, gpa, grade, phrase);

    const int IMPORTANT_NUM = 42;
    printf("%d\n", IMPORTANT_NUM);
    //IMPORTANT_NUM = 7;    //This will throw an error if uncommented
    printf("%d\n", IMPORTANT_NUM);
    
    return 0;
}