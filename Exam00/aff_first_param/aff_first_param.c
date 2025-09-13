#include <unistd.h>

int main(int argc, char*argv[])
{
    int c;

    c = -1;
    if (argc > 1)
    {
        while (argv[1][++c])
        {
            write(1, &argv[1][c], 1);
        }
    }
    else
        write(1, "\n", 1);
        return (0);
}