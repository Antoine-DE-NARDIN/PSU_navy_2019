/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** hit_or_missed_boats
*/

#include "navy.h"

char **hit_or_missed(char **map)
{
    if (nav->hit == 1)
        map[nav->y][nav->x] = 'x';
    else
        map[nav->y][nav->x] = 'o';
    return (map);
}

void put_state_of_turn(char *pos)
{
    pos = remove_n(pos);
    char *str2 = ": hit\n";
    char *str3 = ": missed\n";
    if (nav->hit == 1)
        pos = my_strcat(pos, str2);
    else
        pos = my_strcat(pos, str3);

    my_putstr(pos);
}