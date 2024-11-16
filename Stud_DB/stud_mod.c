#include"header.h"
//MOD--> FILE
void stud_mod(SLL *ptr){
	if(ptr == 0){
		print_error(" NO RECORDS FOUND ");
		return;
		}
	char sop;
	printf("\n================================================\n");
        printf("r/R)To Serch A Roll No. \nn/N)To Search A Name \np/P)Prescentage Based \n");
	printf("Enter Your Choice:\n");
	scanf(" %c",&sop);
		if(sop>>5 &1)
			sop-=32;
			SLL *mod=0;
	switch(sop){
		case 'R':{
			mod=search_roll(ptr);
			if(mod)
			modify_Stud(mod);
			break;
		}
		case 'N':{
			mod=search_name(ptr);
			if(mod)
			modify_Stud(mod);
			break;
		}
		case 'P':{
			mod=search_per(ptr);
			if(mod)
			modify_Stud(mod);
			break;
		}
		default:print_error(" INVALID CHOICE ");
	}
	if(mod){
		print_success(" RECORD MODIFIDE ");
	}
}

void modify_Stud(SLL *ptr){
	char sop;
        float mrk;
	printf("\nWhat You Want To Change:\nn/N)modify Name \np/P)modify Percentage \nEnter Your Choice:\n");
	scanf(" %c",&sop);
		if(sop>>5 &1)
			sop-=32;
	switch(sop){
		case 'N':{
			printf("Enter Name To Modify:\n");
			scanf("%s",ptr->name);
			break;}
		case 'P':{
			printf("Enter Percentage To Modify:\n");
			scanf("%f",&mrk);
                         if(mrk<=100 && mrk >=0){
                         ptr->marks=mrk;
                         }else{
                         print_warning(" INVALID INPUT ");
                         return modify_Stud(ptr); 
                         }

			break;}
		default:print_error(" INVALID CHOICE ");
	}
}

