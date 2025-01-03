#include <stdio.h>
#include <stdlib.h>

void win() {
	printf("You win!");
}

void str_check() {
	long val = 0x41414141;
	char buf[20];
	
	
	printf("Correct val's value from 0x41414141 -> -xdeadbeef!\n");
	printf("Here is your chance: ");
	scanf("%s", &buf);
	printf("buf: %s\n",buf);
    printf("val: 0x%08x\n",val);

}


int main() {
	str_check();

}
