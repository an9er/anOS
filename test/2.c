#include <stdio.h>

void console_write_dec(unsigned int n)
{
	unsigned int acc = n;
	char c[32];
	int i = 0;
	while (acc > 0) {
		c[i] = '0' + acc % 10;
        printf("c[i]%d\n", c[i]);
		acc /= 10;
		i++;
	}
	c[i] = 0;

	char c2[32];
	c2[i--] = 0;

	int j = 0;
	while(i >= 0) {
	      c2[i--] = c[j++];
	}

    printf("'0' is %d\n", '0'+5);
    printf("'a' is %d\n", 'a');
    printf("%s\n", c2);
}

int main(){
    console_write_dec(0x3d4f);
     return 0;
}
