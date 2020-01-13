#include <stdio.h>
#include <stdlib.h>

//https://github.com/alura-cursos/maratonaprogramacao/blob/aula3-exc/3n.cpp
long int calc_func (long int n) {
	
	if (n == 1) {
		return 0;
	} else if (n % 2 == 0) {
		return 1 + calc_func(n / 2);
	} else {
		return 1 + calc_func(3 * n + 1);
	}
}

int main () {
	long int n = 0;
	scanf("%d", &n);
	
	printf("%d\n", calc_func(n));
	
	return (0);
}
