/* Nama file: fibo2b.c */

extern int f1, f2; /* variabel eksternal */

int fibonacci(int f)
{
    f = (f <= 2) ? 1 : f1 + f2;
    f2 = f1;
    f1 = f;

    return f;
}