#include"header.h"


//ADD-->FILE
void stud_add(SLL **ptr){
	SLL *new,*temp;
	new=(SLL *)malloc(sizeof(SLL));
	printf("\nEnter Name And Percentage\n");
	scanf("%s %f",new->name,&new->marks);

	if((*ptr == 0) || ((*ptr)->rollno >1)){
		new->nxt=*ptr;
		*ptr=new;
		new->rollno=1;
	}else{
		temp=*ptr;
		while((temp->nxt !=0) && ((temp->nxt->rollno)-(temp-> rollno) ==1)){
			temp=temp->nxt;
		}
		new-> nxt=temp->nxt;
		temp->nxt=new;
		new->rollno=temp->rollno+1;
	}
	print_success(" NEW RECORD ADDED ");
}

