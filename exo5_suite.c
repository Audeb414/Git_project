#include <stdio.h>
#include <stdlib.h>

float suite(int n){
	int i;
	float uo;
	
	uo=5;
	if(n>=1){
		for(i=1;i<=n;i++){
			uo=sqrt(1+uo);
		}
	}
	return uo;
}

int x;
float u;
int main() {
	printf("entrer la valeur du terme: ");
	scanf("%d",&x);
	u=suite(x);
	printf("u(%d)=%f",x,u);
	return 0;
}
