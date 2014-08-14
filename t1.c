#include <stdlib.h>


int i=10;
int main(int argc,char *argv[]){
   brk(0x09e50000);
   printf("hello world,%p\n",sbrk(0));
   char *ptr=malloc(102400);
   printf("%p\n",ptr);
   while(1)
   ;
   return 0;
}
