#include"header.h"
//SORT-->FILE

void stud_sort(SLL *ptr){

	if(ptr ==0){
		print_error(" NO RECORDS FOUND ");
		return;
	}
	char sop;
	printf("\n============================================\n");
	printf("n/N)Sort By Name \np/P)Sort By Percentage \nEnter your choice:\n");
	scanf(" %c",&sop);
	          if(sop>>5 &1)
			sop-=32;
	switch(sop){
		case 'N':DB_sort(ptr,SORT_NAME);break;
		case 'P':DB_sort(ptr,SORT_PER);break;
		default:print_error(" INVALID CHOICE ");
	}
}
void DB_sort(SLL *ptr,char sop){
	int i,j,c=count_node(ptr);
	SLL * p1=ptr,*p2,temp;
	for(i=0;i<c-1;i++){
		p2=p1->nxt;
		for(j=0;j<c-1-i;j++){
		if(sop=='R' ? (p1->rollno > p2->rollno) : sop=='N' ? (strcmp(p1->name,p2->name)>0 ): sop == 'P' ? (p1->marks >p2->marks ):0 ){
			temp.rollno =p1->rollno;
			strcpy(temp.name,p1->name);
			temp.marks=p1->marks;

			p1->rollno=p2->rollno;
			strcpy(p1->name,p2->name);
			p1->marks=p2->marks;

			p2->rollno= temp.rollno;
			strcpy(p2->name,temp.name);
			p2->marks=temp.marks;
		}
		p2=p2->nxt;
		}
		p1=p1->nxt;
	}
}


//REVE-Link-->FILE

int count_node(SLL *ptr){
	system("clear");
	int c=0;
	while(ptr){
		c++;
		ptr=ptr->nxt;
	}
	return c;
}

void stud_rev_list(SLL **ptr){
if(*ptr == 0){
		print_error(" NO RECORDS FOUND ");
	return;
}
int c=count_node(*ptr);
SLL **arr,*temp=*ptr;
if(c>1)
	arr=(SLL **)malloc(sizeof(SLL *)*c);
	int i=0;
	while(temp){
		arr[i++]=temp;
		temp=temp->nxt;
	}
	for(i=1;i<c;i++){
		arr[i]->nxt=arr[i-1];

		arr[0]->nxt=0;
		*ptr=arr[c-1];
	}
}


