#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <alloca.h>
extern void afunc(void);
extern etext,edata,end;
int bss_var;
int data_var=42;
#define SHW_ADR(ID,I) printf("the %8s\t is at adr:%8x\n",ID,&I)
nt main(int argc,char *argv[])
{
	char *p,*b,*nb;

		printf("Adr etext:%8x\t Adr edata %8x\t Adr end %8x\t\n",&etext,&edata,&end);
