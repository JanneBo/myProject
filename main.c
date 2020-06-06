#include <stdio.h>
#include "sub.h"
#include "add.h"

int main(){
	printf("this is my calculator");
	
	double x=3;
	double y=1;
	printf("%lf - %lf = %lf", x,y,mySubFnc(x,y));

	x =1;
	y=2;
	printf("%lf + %lf = %lf",x,y,myAddFcn(x,y));
	
}
