#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1,it=0;
void draw()
{
	printf("\n\t\t%c|%c|%c",a[0],a[1],a[2]);
	printf("\n\t\t_|_|_");
	printf("\n\t\t%c|%c|%c",a[3],a[4],a[5]);
	printf("\n\t\t_|_|_");
	printf("\n\t\t%c|%c|%c",a[6],a[7],a[8]);
	printf("\n\t\t_|_|_");
}
void input()
{
	char ch,u[100]={"10"},m=0;
	int i;
	lab:
	printf("\nEnter the position:\n");
	scanf("%c",&ch);
	m++;
	u[m]=ch;
	for(i=0;i<9;i++)
	{
	if(k==0)
	{for(i=0;i<=8;i++)
		{if(a[i]==ch)
			{a[i]='x';
				k=1;
				break;}
			}
			}	
	else
			{for(i=0;i<=8;i++)
				{if(a[i]==ch)
					{a[i]='o';
						k=0;
						break;
						}
					}
					}
	}}
int gameover()
	{int i,j=0;
		for(i=0;i<=8;i++)
		{if(a[i]=='x'||a[i]=='o')
		j=j+1;
			}
			
		     if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
		return (1);
		else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
		return (1);
		else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
		return (1);
		else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
		return (1);
		else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
		return (1);
		else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
		return (1);
		else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
		return (1);
		else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
		return (1);
		
		else if(a[0]=='o'&&a[1]=='o'&&a[2]=='o')
		return (2);
		else if(a[0]=='o'&&a[3]=='o'&&a[6]=='o')
		return (2);
		else if(a[0]=='o'&&a[4]=='o'&&a[8]=='o')
		return (2);
		else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o')
		return (2);
		else if(a[2]=='o'&&a[5]=='o'&&a[8]=='o')
		return (2);
		else if(a[2]=='o'&&a[4]=='o'&&a[6]=='o')
		return (2);
		else if(a[3]=='o'&&a[4]=='o'&&a[5]=='o')
		return (2);
		else if(a[6]=='o'&&a[7]=='o'&&a[8]=='o')
		return (2);
		
		else if(j==9)
			return (3);
		return(4);
			
}


void final()
{int var;
	var=gameover();
    if(var==1)
	{printf("\n Player one wins");
		end=0;}
    else if(var==2)
	{printf("\n Player two wins");
		end=0;
		}
		else if(var==3)
	{printf("\n Match draw");
		end=0;
		}
}
	
int main()
	{
		char c;
		label:
		clrscr();
		draw();
		while(end)
		{
			input();
			clrscr();
			draw();
			final();
			}
			printf("\n Do you want to play again:");
			printf("\n If yes press y and if no press n\n");
			fflush(stdin);
			scanf("%c",&c);
			if(c=='y'||c=='Y')
			{
				a[0]='1';
				a[1]='2';
				a[2]='3';
				a[3]='4';
				a[4]='5';
				a[5]='6';
				a[6]='7';
				a[7]='8';
				a[8]='9';
				k=0;
				end=1;
				goto label;
				}
	         else
				{printf("\n\nThank you\nplease rate this app");
				exit(0);}
	}
