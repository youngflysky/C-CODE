#include <stdio.h>
#include <math.h>
int main ()
{
	int lower,upper;
	int F;
	double C;
	scanf("%d %d",&lower,&upper);
	if(lower>upper){
		printf("Invalid."); 
	}else{
		printf("fahr celsius\n");
		for(lower;lower<=upper;lower=lower+2){//û��lower+2���ֲ����� ����lower<=upper������<
			F=lower;
			C=5*(F*1.0-32)/9;
			printf("%d%6.1f\n",F,C);
		}
	}
		
	return 0;
}