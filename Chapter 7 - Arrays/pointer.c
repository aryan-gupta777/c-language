# include <stdio.h>
int main() {
     
int age = 22;
int *ptr = &age;

int _age = 25;
int *_ptr = &_age;
printf("ptr= %u\n", *ptr);
printf("%u\n", ptr);
printf("%u\n", &ptr);

ptr++;
printf("%u\n", ptr);

ptr--;
printf("%u\n", ptr);

printf("_ptr = %u\n", *_ptr);
printf("%u\n", _ptr);
printf("%u\n", &_ptr);

ptr = ptr - _ptr;
printf("%u\n", ptr);// will not show difference in bytes it will show difference in data type (6422300-6422292=8bytes=2 (int = 4bytes))

ptr = &_age;//comparizion
printf("comparison = %u\n", ptr==_ptr);//1 means true 
}