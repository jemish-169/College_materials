/*
write a program to illustarte use of ftell() an fseek() function.
*/
#include <stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "r");
    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    while (!feof(fp))
    {
        printf("%c", ch);
        printf("%ld", ftell(fp));
        ch = getc(fp);
    }
    rewind(fp);
    while (!feof(fp))
    {
        printf("%c", ch);
        printf("%d", ftell(fp));
        ch = getc(fp);
    }
    fclose(fp);
}