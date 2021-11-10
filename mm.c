//Keegan Hawkins
//CIS 452
//Memory Mapping Exercise


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int x, y, z;
int q = 100;
int w = 200;
int num[20];
char buf[20];
char *string;

int calc(int x, int y);
double dos(double k);
char respond(double hi);

int main(){

	char r, t;
	x=1;
	z=3;
	int result = x+2;
	int result2 = 2+z;
	int final = result + result2;

	double power = pow(2, final);
	
	r = calc(x,result);
	t = calc(result2,z);
	
	int *numptr;
	numptr = malloc(sizeof(num));
	num[0] = x;
	num[1] = y;
	num[2] = z;
	num[3] = r;
	num[4] = t;
	char buf2[30];
	char *string2;
	string = malloc(sizeof(buf));
	string2 = malloc(sizeof(buf2));
	printf("Enter two inputs for 2 different char arrays\n");
	fgets(string, sizeof(string),stdin);
	fgets(string2, sizeof(string2), stdin);
//Print address of everything
        printf("Q: %x\n ", &q);
        printf("W: %x\n ", &w);
        printf("R: %x\n ", &r);
        printf("T: %x\n ", &t);
        printf("X: %x\n ", &x);
        printf("Y: %x\n ", &y);
        printf("Z: %x\n ", &z);
        printf("result1: %x\n ", &result);
        printf("result2: %x\n ", &result2);
        printf("final: %x\n", &final);
	
	printf("power: %x\n", &power);

	printf("buf: %x\n ", &buf);
	printf("string: %x\n ", string);
	printf("buf2: %x\n ", &buf2);
	printf("string2: %x\n", string2);
	printf("num: %x\n", num);
	printf("numptr: %x\n", numptr);

	free(string);
	free(string2);
	free(numptr);
	return 0;
		
}


int calc(int x, int y){
	double answer = x*y;
	printf("calc answer: %x\n", &answer);
	dos(answer);
}

double dos(double k){
	double answer = pow(k, 3);
	printf("dos answer: %x\n", &answer);
	respond(answer);	
}

char respond(double hi){
	if(hi > 5){
		return 'f';
	}else{
		return 'z';
	}
}


