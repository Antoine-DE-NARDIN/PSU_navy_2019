/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** navy.h
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <stddef.h>

#define UNUSED __attribute__((unused))

struct navy *nav;

typedef struct navy
{
    pid_t player_pid;
    int x;
    int y;
    int hit;
    int stop;
    int turn;
}navy;

void description(void);
int my_strcmp(char *str1, char *str2);
int my_putstr(char *str);
void my_putchar(char c);
char *open_read(char *str, char *buf);
int navy_loop(char **av, int player);
char ** compute_all_process(void);
char **unbreakable_part(char **map);
char **left_side_of_map(char **map);
char **top_side_of_map(char **map);
char **map_point(char **map);
void print_map(char **map);
int lim(char c, char *limi);
int	for_lim(char const *str, int i, char *limi);
int word(char const *str, char *limi);
int size(char *str, int i, char *limi);
char **str_to_tab(char *str, char *limi);
char **get_positions(char *str);
int verif_of_file(char *str);
int verif_of_size(char *str);
int verif_of_sep(char *str);
int verif_of_input_pos(char *str);
int get_the_pid(void);
long my_putnbr(long nb);
int char_to_int(char *str);
char **prep_loop2();
char **prep_loop1(char **av, int player);
int verif_of_placements(char **boat_pos);
int dif1(char **pos, int size);
int dif2(char **pos, int size);
char **put_boats1(char **pos, char **map);
char **put_boats2(char **pos, char **map);
char **prep_boats(char **map, char **boat_pos);
char **exec_loop1(char **av, char **map1, int player);
void receive_sigals(int player);
void steal_pid(int val, siginfo_t *inf, void *lol);
int starting_battle(char **map1, char **map2, int player);
void signal_go(char *str, pid_t pid);
char **state_signal(char **map, pid_t pid);
char *my_strcat(char *dest, char *src);
void put_state_of_turn(char *pos);
char **hit_or_missed(char **map);
int player_wait(char **map1, char **map2, int player);
int player_turn(char **map2, int player);
char *remove_n(char *str);
void put_defence(void);
void set_sigaction(int signum, void *func);
void set_sigusr(void *func);
void set_sig_x(int signum, siginfo_t *siginfo);
void set_sig_y(int signum, siginfo_t *siginfo);
void set_sig_hit(int signum);
void get_sig_pos(void);
void get_sig_hit(void);
int verif_of_input(char *str);
int scan_map(char **tab);
int scan_the_hit(char **tab);