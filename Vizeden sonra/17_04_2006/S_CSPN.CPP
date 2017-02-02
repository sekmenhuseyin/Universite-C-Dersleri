/* strcspn ”rnegi */

#include <stdio.h>
#include <string.h>
#include <alloc.h>
#include <conio.h>

void main()
 {
    char *string1 = "1234567890";
    char *string2 = "747DC8";
    int length;
    clrscr();
    length = strcspn(string1, string2);
    printf("Character where strings intersect is at position %d\n",
           length);
    getch();
 }