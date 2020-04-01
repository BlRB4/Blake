#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <math.h>
#include <unistd.h>
#include <Windows.h>

char name[50];
int sw_dmg=1000;
int p_health=1000;
int d_health=5000;
int roll;
int d_dmg=200;
int p_crit=2000, d_crit=400;


int i;

int rng_Gen();
int Health_player();
int Health_Enemy();


int main(void)
{
	srand(time(NULL));
	printf("Enter name:\n");
	scanf("%s", name);
	
	printf("\nHey %s, Welcome to my RNG Game.\nAutomatic rolls are made 0-10.\n0-4 are Misses! 5 is Critical Hit! 6-10 are hits!\nEnemys health is 5000! They deal 200 damage a hit.\nYou have 1000 Health! You deal 1000 damage a hit.\n",name);
	printf("\nYour critcal hits do 2000 damage! Enemys critical hits do 400!\n");
	printf("\nPress any key to play!!\n");
	getchar(); getchar();
	
	for(i=0;i<=1000;i++)
	{
		

			Health_Player();
		if(p_health <= 0 || d_health <= 0 )
		{
			printf("\nGame has ended!");
			break;
		}		

			sleep(1);
		rng_Gen();
		
			Enemy_Health();
		
		
		if(p_health <= 0 || d_health <= 0 )
		{
			printf("\nGame has ended!");
			break;
		}
		
	}
	
	
	if(p_health>d_health)
	{
		printf("\n****You slayed D!****");
		return 0;
	}
	else
	{
		printf("\n(((((You lost!)))))");
	}
	
	
	
	getchar(); getchar();

	
	
}

int rng_Gen()
{

	roll=(rand()%10);

}

int Health_Player()
{
		printf("\n\n====Your time to strike!====");
		sleep(1);
		rng_Gen();
		if(roll>5)
		{
			d_health=d_health-sw_dmg;
			printf("\n|| You Roll %d || -- > Sliced Enemy for 1000! Enemy Health at %d",roll, d_health);
		}
		if(roll==5)
		{
			d_health=d_health-p_crit;
			printf("\n|| YOU CRITICAL HIT || -- > Sliced Enemy for 2000! Enemy Health at %d", d_health);
		}
		if(roll<5)
		{
			printf("\n|| Roll = %d || -- > You Miss!",roll);
		}
		sleep(2);	
	
}

int Enemy_Health()
{
		printf("\n\n>>>Enemy's Turn!<<<");
		if(roll>5)
		{
			p_health=p_health-d_dmg;
			printf("\n|| Enemy Roll = %d || -- > You were hit for 200! Health at %d.",roll, p_health);
		}
		if(roll==5)
		{
			p_health=p_health-d_crit;
			printf("\n|| ENEMY CRITICAL HIT || -- > You were hit for 400! Health at %d.", p_health);
		}
		if(roll<5)
		{
			printf("\n|| Enemy Rolls = %d || -- > You Dodged!",roll);
		}
		sleep(2);
}











