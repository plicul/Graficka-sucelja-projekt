#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int p[50];
	int n, i, a = 0, b = -1, c = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		b += 1;
		scanf(" %d", &p[i]);
		if(i == n - 1 && p[i] % 2 != 0 ){
			a *= 2;
			break;
		}
		if(p[i] % 2 == 0 && i != 0){
			a += 1;
			c = b;
			b = 0;
		}


	}
	
	printf("%d %d",c , a );



  return 0;
}
