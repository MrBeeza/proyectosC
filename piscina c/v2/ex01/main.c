#include "ft_strncpy.c"

int main(){

	char a[]="hola mundo";
  	char b[]="segunda2";
	
	ft_strncpy(a, b, 5);

	printf("1: %s 2:%s\n",a, b);

}
