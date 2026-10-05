#include "libft.h"

void    ft_putendl_fd(int fd, char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i++], 1);
    }
    write(1, "\n", 1);
}