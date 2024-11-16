#include"header.h"
//SAVE-->FILE

void stud_save(SLL *ptr){
	system("clear");
	if(ptr==0){
		print_error(" NO RECORDS FOUND ");
		return;
	}
        DB_sort(ptr,SORT_ROLLNO);
	FILE *fp;
	fp=fopen("student.dat","w");
	while(ptr){
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->nxt;
	}
	print_success("RECORDS BEEN SAVED");
	fclose(fp);
}

//READ-->FILE
void stud_read_DB(SLL** ptr){
	SLL *new,*last;
	FILE *fp;
	fp=fopen("student.dat","r");
	if(fp==0){
		print_error("DB FILE NOT FOUND");
		return;
	}
	while(1){
		new=(SLL *)malloc(sizeof(SLL));
		if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->marks) == -1){
			free(new);
			break;
		}
		new->nxt=0;
		if(* ptr == 0)
			*ptr =new;
		else {
			last=*ptr;
			while(last->nxt)
			last=last->nxt;
			
			last->nxt=new;
		}
	}
}

//Exit-->File
void Exit_menu(SLL *ptr){
	if(ptr == 0){
		print_error(" NO RECORDS FOUND ");
		return;
		}
	char sop;
        printf("s/S)Save And Exit \ne/E)Save Without Exit\n");
	printf("Enter Your Choice:\n");
	scanf(" %c",&sop);
		if(sop>>5 &1)
			sop-=32;
	switch(sop){
		case 'S':{stud_save(ptr);
                          print_warning("..THANK YOU..");
                          exit(0);
                           }
		case 'E': print_warning("..THANK YOU..");exit(0);
		default:print_error(" INVALID CHOICE ");
	}
       
}

