//Keegan Hawkins
//CIS 452
//Memory Mapping Exercise


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int x, y, z, q, w;
char buf[20];
char *string;

int calc(int x, int y);
double dos(double k);
char respond(double hi);

int main(){

	char r, t;
	x=1;
	y=2;
	z=3;
	int result = x+y;
	int result2 = y+z;
	int final = result + result2;

	double power = pow(2, final);
	
	r = calc(x,y);
	t = calc(y,z);

	char buf2[30];
	char *string2;
	string = malloc(sizeof(buf));
	string2 = malloc(sizeof(buf2));
	fgets(string, sizeof(string),stdin);
	fgets(string2, sizeof(string2), stdin);
//Print address of everything
        printf("Q: %x ", &q);
        printf("W: %x ", &w);
        printf("R: %x ", &r);
        printf("T: %x ", &t);
        printf("X: %x ", &x);
        printf("Y: %x ", &y);
        printf("Z: %x ", &z);
        printf("result1: %x ", &result);
        printf("result2: %x ", &result2);
        printf("final: %x\n", &final);
	
	printf("power: %x\n", &power);

	printf("buf: %x ", &buf);
	printf("string: %x ", string);
	printf("buf2: %x ", &buf2);
	printf("string2: %x\n", string2);

	free(string);
	free(string2);
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


