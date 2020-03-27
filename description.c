/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** description
*/

#include "navy.h"

void description(void)
{
    write(1, "USAGE\n", 6);
    write(1, "\t./navy [first_player_pid] navy_positions\n", 42);
    write(1, "DESCRIPTION\n", 12);
    write(1, "\tfirst_player_pid: only for the 2nd player. pid of the fi", 57);
    write(1, "rst player.\n", 12);
    write(1, "\tnavy_positions: file representing the positons of ", 51);
    write(1, "the ships.\n", 11);
}