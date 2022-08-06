/* Program 10.6
18 Nama file: fibo3b.c
19 Program deret n bilangan fibonacci */

int fibonacci(int f)
{
    /* f1 dan f2 bersifat statik */
    static int f1 = 1, f2 = 1;

    f = (f <= 2) ? 1 : f1 + f2;
    f2 = f1;
    f1 = f;

    return f;
}