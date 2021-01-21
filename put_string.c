void put_string(char *a)
{
    while (*a)
        write(1, a++, 1);
}