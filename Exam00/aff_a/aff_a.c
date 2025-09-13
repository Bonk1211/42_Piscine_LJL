#include <unistd.h>

int main(int argc, char*argv[])
{
    int c;

    c = 0;
    if (argc == 2) //means that exactly one argument are provided, use 2 because the program itself also count.
    {
        while (argv[1][c] != '\0') //iterates over the character in the string until hit \0 null terminator
        {
            if (argv[1][c] == 'a') //if encounter 'a'
            {
                write(1 , "a\n" ,2);
                break;
            }
            else                    //no 'a' in the string , print a newline
            {
                write(1 , "\n" ,1);
                break;
            }
            c++;
        }
    }
    else
    
        write(1, "a\n",2);
    return (0);
}