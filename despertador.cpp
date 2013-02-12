#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
int main(void)
	{
	time_t tiempo;
struct tm *hora;
int h=0, m=0, n=0, i;
bool stat=0;

time(&tiempo);
hora = localtime(&tiempo);

printf ( "LA HORA DE TU PC ES: \n%s \n \n", asctime (hora));
printf("\n");
printf ( "A QUE HORAS QUIERES QUE TE DESPIERTE ?:\n");
printf("\n");
printf("INGRESA LA HORA\n");
scanf("%d",&h);
printf("INGRESA LOS MINUTOS\n");
scanf ("%d",&m);

i=time(NULL);

for(;;)
{

	if(time(NULL)!=i && stat!=1)
		
	{
		
		system("CLS");
		printf ( "%s\n", asctime (hora) );
		i=time(NULL);
	}
	
	time(&tiempo);
	hora = localtime( &tiempo);
	
	if((*hora).tm_hour==h && (*hora).tm_min==m && n<10)
	{
			
		printf("\a");
		printf("DESPIERTE WUEVON!!\n");
		n++;
		stat=1;
		if(kbhit()==true)
		break;
		
	}
	else if (n==10)
	{
		
		i=time(NULL);
		while (n==10)
			
		{
			if (time(NULL)==i+4) n=0;
			
		}
		
		
	}
}
	
	
}

