#include <stdio.h>
#include <stdlib.h>

int fibonacci(int level){
	if (level==1){
		return 1;
	} else if(level==2){
		return 1;
	} else {
		return fibonacci(level-1) + fibonacci(level-2);
	}
}

int main(int argc, char** argv){
	int level = 2;
	if (argc>1){
		level = atoi(argv[1]);
		printf("Calculating at level %d\n", level);
	}

	printf("Fibonacci: level %d, value %d\n", level, fibonacci(level));
}
