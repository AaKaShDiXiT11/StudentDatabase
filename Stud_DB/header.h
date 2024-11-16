#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

#define SORT_ROLLNO 'R'
#define SORT_NAME 'N'
#define SORT_PER 'P'



typedef struct stud{
	int rollno;
	char name[50];
	float marks;
	struct stud *nxt;
}SLL;


void stud_add(SLL **);

void stud_show(SLL *);

void stud_del(SLL **);
void stud_del_by_roll(SLL ** );
void stud_del_by_name(SLL **);

void stud_save(SLL *);
void stud_read_DB(SLL **);

void Exit_menu(SLL *);

void stud_mod(SLL *);
SLL* search_roll(SLL *);
SLL* search_name(SLL *);
SLL* search_per(SLL *);
void modify_Stud(SLL *);

int count_node(SLL *);
void stud_rev_list(SLL **);
void stud_del_all(SLL **);

void stud_sort(SLL *);
void DB_sort(SLL *,char);

void print_success(const char*);
void print_error(const char*);
void print_warning(const char*);
