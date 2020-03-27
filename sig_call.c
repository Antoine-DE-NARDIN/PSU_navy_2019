/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** sig_call
*/

#include "navy.h"

void get_sig_pos(void)
{
    nav->x = 0;
    nav->y = 0;
    set_sigusr(set_sig_x);
    nav->stop = 0;
    while (!nav->stop)
        pause();
    set_sigusr(set_sig_y);
    nav->stop = 0;
    while (!nav->stop)
        pause();
}

void get_sig_hit(void)
{
    nav->hit = 0;
    set_sigusr(set_sig_hit);
    nav->stop = 0;
    while (!nav->stop)
        pause();
}