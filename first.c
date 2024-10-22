#include <stdio.h>
#include <stdlib.h>

struct node{
	int f;
};

int main(){
	struct node yes;
	yes.f = 15;
	printf("%d\n",yes.f);
	return 0;
}	
