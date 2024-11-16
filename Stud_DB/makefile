CC=cc
target=main.o stud_add.o stud_del.o stud_save.o stud_show.o stud_mod.o stud_search.o stud_sort.o

student:$(target)
	$(CC) $(target) -o student

main.o:main.c
	$(CC) -c main.c

stud_add.o:stud_add.c
	$(CC) -c stud_add.c

stud_del.o:stud_del.c
	$(CC) -c stud_del.c

stud_save.o:stud_save.c
	$(CC) -c stud_save.c

stud_show.o:stud_show.c
	$(CC) -c stud_show.c

stud_mod.o:stud_mod.c
	$(CC) -c stud_mod.c

stud_search.o:stud_search.c
	$(CC) -c stud_search.c

stud_sort.o:stud_sort.c
	$(CC) -c stud_sort.c

clear:
	@@echo "cleaning up..."
	@@rm -v *.o
