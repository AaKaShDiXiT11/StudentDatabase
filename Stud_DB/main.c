#include"header.h"

int main(){
	system("clear");
	SLL *hptr=0;
	int c;
	char op,sop;

	stud_read_DB(&hptr);
	while(1){
		printf("\033[90;1mMENU: \na/A)Add New Record \nd/D)Delete A Record \ns/S)Show The List \nm/M)Modify A Record  \nv/V)Save \ne/E)Exit \nt/T)Sort The List \nl/L)Delete All The Record \nr/R)Revers The List \n\033[0m");

		printf("Enter Your Choice:\n");
		scanf(" %c",&op);
		if(op>>5 &1)
			op-=32;

		switch(op){
			case 'A':stud_add(&hptr);break;
			case 'D':stud_del(&hptr);break;
			case 'S':stud_show(hptr);break;
			case 'M':stud_mod(hptr);break;
			case 'V':stud_save(hptr);break;
			case 'E':Exit_menu(hptr);break;
			case 'T':stud_sort(hptr);break;
			case 'L':stud_del_all(&hptr);break;
			case 'R':stud_rev_list(&hptr);break;
			default : print_error(" INVALID CHOICE ");

		}

	}
}



















//REVE-Link-->FILE

//DELETE-ALL-->FILE
//MOD--> FILE
//SEARCH-->FILE
//SHOW-->FILE
//ADD-->FILE
//DELETE-->FILE

//SAVE-->FILE
//READ-->FILE
//Exit-->File
















