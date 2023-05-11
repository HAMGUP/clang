#include <stdio.h>
int main()
{   
    char *name = "World";
    char string[]="hello world"; //string(배열명)=주소
    puts(string); //string=주소
    puts("hello");
    puts(name);
    return 0;
}
