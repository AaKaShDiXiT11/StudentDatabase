#include"header.h"
//DELETE-->FILE
void stud_del(SLL **ptr){
	if(*ptr == 0){
		print_error(" NO RECORDS FOUND ");
		return;
		}
	char sop;
	printf("\n========================================================\n");
        printf("r/R) Delete By Roll No. \nn/N)Delete By Name\n");
	printf("Enter Your Choice:\n");
	scanf(" %c",&sop);
		if(sop>>5 &1)
			sop-=32;
	switch(sop){
		case 'R':stud_del_by_roll(ptr);break;
		case 'N':stud_del_by_name(ptr);break;
		default:print_error(" INVALID CHOICE ");
	}
}


	
void stud_del_by_roll(SLL **ptr){
	int roll;
	printf("Enter Roll Number To Delete:\n");
	scanf("%d",&roll);
	SLL *del=*ptr,*prv;
	while(del){
		if(del->rollno==roll){
			if(del==*ptr)
				*ptr=del->nxt;
			else
				prv->nxt=del->nxt;

			free(del);
	print_success("RECORD BEEN DELETED");
			return;
		}
		prv=del;
		del=del->nxt;
	}
}



void stud_del_by_name(SLL** ptr){
	  SLL *del=*ptr,*prv,*dd,*dprv;
          char name[50];
	  printf("enter your name:\n");
	  scanf(" %s",name);
	  int c=0;
	  while(del){
		  if(strcmp(del->name,name)==0){
			  printf("%d %s %f\n",del->rollno,del->name,del->marks);
			  c++;
			  dd=del;
		          dprv=prv;
		  }
		  prv=del;
		  del=del->nxt;
	  }
	  if(c==0){
		  print_error("NAME NOT FOUND");
	  }else if(c==1){
		 
			if(dd==*ptr)
				*ptr=dd->nxt;
			else
				dprv->nxt=dd->nxt;

			free(dd);
	print_success("RECORD BEEN DELETED");
	  }else if(c>1){
		  printf("\n\033[35;1m...DB has multiple record with same name...\n\033[0m");
			 stud_del_by_roll(ptr);
	  }
}

//DELETE-ALL-->FILE
void stud_del_all(SLL **ptr){
	if(*ptr == 0){
		print_error(" NO RECORD FOUND ");
		return;
	}
	SLL *del=*ptr;
	int c=0;
	while(del){
		*ptr=del->nxt;
		printf("Record Deleted:%d\n",++c);
		free(del);
		del=*ptr;
	}
	print_success("ALL RECORDS DELETED");
}




