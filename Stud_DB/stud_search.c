#include"header.h"
//SEARCH-->FILE
SLL*  search_roll(SLL *ptr){
	int roll;
	printf("\nEnter Roll Number:\n");
	scanf("%d",&roll);
	SLL *mod=ptr,*prv;
	while(mod){
		if(mod->rollno==roll){
			return mod;
		}
		mod=mod->nxt;
	}
	return 0; 
}


SLL* search_name(SLL* ptr){
	  SLL *mod=ptr,*prv,*st_m,*dprv;
          char name[50];
	  printf("\nEnter Your Name:\n");
	  scanf(" %s",name);
	  int c=0;
	  while(mod){
		  if(strcmp(mod->name,name)==0){
			  printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
			  c++;
			  st_m=mod;
		  }
		  mod=mod->nxt;
	  }
	  if(c==0){
		  print_error("NAME NOT FOUND");
		  return 0;
	  }else if(c==1){
		 
			return st_m;
	  }else if(c>1){
		  printf("\n\033[35;1m...DB Has Multiple Record With Same Name...\n\033[0m");
			return  search_roll(ptr);
	  }
}

SLL * search_per(SLL *ptr){
	  SLL *mod=ptr,*prv,*st_m,*dprv;
          float marks;
	  printf("\nEnter Percentage:\n");
	  scanf(" %f",&marks);
	  if(marks>100 || marks<0){
		  print_error("WRONG INPUT");
		  return search_per(ptr);
	  }
	  int c=0;
	  while(mod){
		  if(mod->marks > marks){
			  printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
			  c++;
			  st_m=mod;
		  }
		  mod=mod->nxt;
	  }

	  if(c==0){
		  print_error("RECORDS NOT FOUND");
		  return 0;
	  }else if(c==1){
		 
			return st_m;
	  }else if(c>1){
		  printf("\n\033[35;1m...DB Has Multiple Record With Same Name...\n\033[0m");
			return  search_roll(ptr);
	  }
}


