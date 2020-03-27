/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** battle
*/

#include "navy.h"

int starting_battle(char **map1, char **map2, int player)
{
    nav->turn = 2;

    while (nav->turn != 0 || nav->turn != 1) {
        if (player == 2) {
            player = player_turn(map2, player);
        }else
            player = player_wait(map1, map2, player);
    }
    return (0);
}

int player_turn(char **map2, int player)
{
    char *position = malloc(sizeof(char) * 4096);
    size_t zone = 0;
    write(1, "attack: ", 8);
    getline(&position, &zone, stdin);
    if (verif_of_input(position) == 1) {
        free(position);
        player_turn(map2, player);
    }else {
    signal_go(position, nav->player_pid);
    get_sig_hit();
    map2 = hit_or_missed(map2);
    put_state_of_turn(position);
    }
    if (scan_the_hit(map2) == 14) {
        write(1, "I won\n", 6);
        nav->turn = 0;
    }
    player = 3;
    free(position);
    return (player);
}

int player_wait(char **map1, char **map2, int player)
{
    write (1, "waiting for enemy's attack...\n", 30);
    get_sig_pos();
    nav->hit = 0;
    map1 = state_signal(map1, nav->player_pid);
    put_defence();
    if (scan_map(map1) == 0) {
        write(1, "Ennemy won\n", 11);
        nav->turn = 1;
    }
    write(1, "my positions:\n", 14);
    print_map(map1);
    write(1, "enemy's positions:\n", 19);
    print_map(map2);
    player = 2;
    return (player);
}

int verif_of_input(char *str)
{
    str = remove_n(str);
    if (str[0] > 72 || str[0] < 65) {
        write(1, "wrong position\n", 25);
        return (1);
    }else if (str[1] > 56 || str[1] < 49) {
        write(1, "wrong position\n", 25);
        return (1);
    }
    return (0);
}