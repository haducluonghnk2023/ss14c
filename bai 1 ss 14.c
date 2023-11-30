#include<stdio.h>
int main(){
	int variable = 50;
	int *pointer=&variable;
	
	
    printf("Gia tri cua bien: %d\n", variable);
    printf("Dia chi cua bien: %p\n", (void*)&variable);
    
    
    printf("Gia tri cua bien: %d\n", pointer);
    printf("Dia chi cua bien: %p\n", (void*)&variable);
}
