#include"header.h"
//SHOW-->FILE
void stud_show(SLL * ptr){
	system("clear");
	if(ptr==0){
		print_error("NO RECORDS FOUND");
		return;
	}
	printf("============================================================");
	printf("\n\033[47;1m                     \033[0m");
	printf(" STUDENTS RECORDS ");
	printf("\033[47;1m                     \033[0m\n");
	printf("============================================================\n");
	printf(" %-11s \t %-20s %8s\n","RollNo","Name","Percentage");
	printf("============================================================\n");
	while(ptr){
		printf("  %-10.3d \t %-20s %8.2f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->nxt;
	}
	printf("============================================================\n");

}


void print_success(const char *msg){
	printf("============================================================");
	printf("\n\033[47;1m                    \033[0m");
	printf("\033[32;1m %s \033[0m",msg);
	printf("\033[47;1m                    \033[0m\n");
	printf("============================================================\n");
}
void print_error(const char *msg){
	printf("============================================================");
	printf("\n\033[47;1m                     \033[0m");
	printf("\033[31;1m %s \033[0m",msg);
	printf("\033[47;1m                     \033[0m\n");
	printf("============================================================\n");
}
void print_warning(const char *msg){
	printf("============================================================");
	printf("\n\033[47;1m                     \033[0m");
	printf("\033[35;1m %s \033[0m",msg);
	printf("\033[47;1m                     \033[0m\n");
	printf("============================================================\n");
}
