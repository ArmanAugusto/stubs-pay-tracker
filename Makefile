CC			= gcc
CFLAGS		= -Wall -g
OBJFILES	= main.o menus.o utilities.o database.o about_spt.o authentication.o

# ******************************************
# Targets needed to bring the executable up to date

stubs_pay_tracker: main.o menus.o utilities.o database.o about_spt.o authentication.o
		$(CC) $(CFLAGS) -o stubs_pay_tracker main.o menus.o utilities.o database.o about_spt.o authentication.o -I/usr/include/postgresql -lpq

main.o: main.c menus.h utilities.h database.h
		$(CC) $(CFLAGS) -c main.c -I/usr/include/postgresql -lpq

menus.o: menus.h

utilities.o: utilities.h

database.o: database.h
		$(CC) $(CFLAGS) -c database.c -I/usr/include/postgresql -lpq

about_spt.o: about_spt.h

authentication.o: authentication.h
		$(CC) $(CFLAGS) -c authentication.c -I/usr/include/postgresql -lpq

clean:
		rm -f $(OBJFILES) *~