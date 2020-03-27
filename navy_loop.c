/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** navy_loop
*/

#include "navy.h"

int navy_loop(char **av, int player)
{
    char **map1 = NULL;
    char **map2 = NULL;
    int turn = 0;

    map1 = exec_loop1(av, map1, player);
    if (map1 == NULL)
        return (84);
    map2 = prep_loop2();
    write(1, "my positions:\n", 14);
    print_map(map1);
    write(1, "ennemy position:\n", 17);
    print_map(map2);
    turn = starting_battle(map1, map2, player);
    return (turn);
}

char **exec_loop1(char **av, char **map1, int player)
{
    map1 = prep_loop1(av, player);
    if (prep_loop1(av, player) == NULL)
        return (NULL);
    return (map1);
}

char **prep_loop1(char **av, int player)
{
    char **pos1 = NULL;
    char **map1 = NULL;

    if (player == 2) {
    pos1 = get_positions(av[1]);
    if (pos1 == NULL)
        return (NULL);
    }else{
        pos1 = get_positions(av[2]);
        if (pos1 == NULL)
            return (NULL);
    }
    map1 = compute_all_process();
    if (verif_of_placements(pos1) != 0)
        return (NULL);
    else
        map1 = prep_boats(map1, pos1);
    return (map1);
}

char **prep_loop2(void)
{
    char **map2 = NULL;
    map2 = compute_all_process();
    return (map2);
}