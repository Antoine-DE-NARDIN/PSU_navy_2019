/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** signals_wait
*/

#include "navy.h"

char **state_signal(char **map, pid_t pid)
{
    if (map[nav->y][nav->x] != '.' && map[nav->y][nav->x] != 'o') {
        kill(pid, SIGUSR1);
        usleep(1000);
        kill(pid, SIGUSR2);
        nav->hit = 1;
        map[nav->y][nav->x] = 'x';
    }else {
        kill(pid, SIGUSR2);
        usleep(1000);
        map[nav->y][nav->x] = 'o';
    }
    return (map);
}

void put_defence(void)
{
    char *pos = NULL;
    char *str2 = ":hit\n";
    char *str3 = ":missed\n";
    pos = malloc(sizeof(char) * 4096);
    pos[0] = (nav->x / 2 - 1) + 65;
    pos[1] = nav->y + 48 - 1;
    pos[2] = '\0';

    if (nav->hit == 1)
        my_strcat(pos, str2);
    else
        my_strcat(pos, str3);
    my_putstr(pos);
    free(pos);
}