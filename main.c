/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** main
*/

#include "navy.h"

int main(int ac, char **av)
{
    nav = malloc(sizeof(navy));

    if ((ac == 2) && (av[1][0] == '-' && av[1][1] == 'h'))
        description();
    else if (ac == 2) {
        receive_sigals(2);
        kill(nav->player_pid, SIGUSR1);
        if (navy_loop(av, 2) == 84)
            return (84);
    }else if (ac == 3) {
        kill(char_to_int(av[1]), SIGUSR1);
        receive_sigals(3);
        if (navy_loop(av, 3) == 84)
            return (84);
    }else{
        write(1, "You must read the -h\n", 21);
        return (84);
    }
    return (nav->turn);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *remove_n(char *str)
{
    int i = 0;
    while (str[i] != '\n') {
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}

void put_pid(void)
{

}