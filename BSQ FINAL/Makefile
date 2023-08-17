NAME = bsq

all: $(NAME)

$(NAME): main.o checkmap.o icecream.o printmap.o solvemap.o validate_map.o
	cc -o bsq main.o checkmap.o icecream.o printmap.o solvemap.o validate_map.o

main.o: main.c bsq.h
	cc -c -Wall -Wextra -Werror main.c

validate_map.o: validate_map.c bsq.h
	cc -c -Wall -Wextra -Werror validate_map.c

solvemap.o: solvemap.c bsq.h
	cc -c -Wall -Wextra -Werror solvemap.c

icecream.o: icecream.c bsq.h 
	cc -c -Wall -Wextra -Werror icecream.c

printmap.o: printmap.c bsq.h
	cc -c -Wall -Wextra -Werror printmap.c

checkmap.o: checkmap.c bsq.h
	cc -c -Wall -Wextra -Werror checkmap.c

clean:
	rm -f *.o

fclean:
	rm -f bsq *.o

re: fclean all
