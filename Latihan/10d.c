/* Nama file: echo.c
Ilustrasi fungsi main() berargumen */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    
    if (argc < 2)
        goto error;
    
    for(i=1; i<argc; i++)
        printf("%s ", argv[i]);
    printf("\n");
    
    return 0;

error: printf("Pemakaian %s STRING1... STRING2... \n", argv[0]);
    exit(0);
}