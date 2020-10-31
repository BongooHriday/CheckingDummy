#include<stdio.h>
#include<conio.h>
char arr[9]={'1','2','3','4','5','6','7','8','9'};
void check(char pos,char sym);
void show()
{
	printf("\t\t\t ~~~Tic Tac Toe Game~~~");
	printf("\n\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c\n",arr[0],arr[1],arr[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c\n",arr[3],arr[4],arr[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c\n",arr[6],arr[7],arr[8]);
	printf("\t\t\t---|---|---\n");
}

void inputSignal()
{
	printf("Player 1 symbol:x\n");
	printf("Palyer 2 symbol:0\n");
}

void start()
{
	char py;
	printf("Who will start the game: player 1 or player 2\n");
	scanf("%c",&py);
}
void play()
{
	char pos,sym;
	printf("Enter the position and symbol:\n");
	fflush(stdin);
	scanf("%c",&pos);
	fflush(stdin);
	scanf("%c",&sym);
	check(pos,sym);
}

void check(char pos,char sym)
{
for(int i=0;i<=8;i++)
{
	if(arr[i]==pos)
	{
		arr[i]=sym;
	}
}
	
}

int end()
{
	if((arr[0]=='x' && arr[1]=='x' && arr[2]=='x')||(arr[3]=='x' && arr[4]=='x' && arr[5]=='x') || (arr[6]=='x' && arr[7]=='x' && arr[8]=='x'))
	{
		return 100;
	}
	else if((arr[0]=='0' && arr[1]=='0' && arr[2]=='0')||(arr[3]=='0' && arr[4]=='0' && arr[5]=='0') || (arr[6]=='0' && arr[7]=='0' && arr[8]=='0'))
	{
		return 200;
	}
	
	
	else if((arr[0]=='x' && arr[3]=='x' && arr[6]=='x')||(arr[1]=='x' && arr[4]=='x' && arr[7]=='x') || (arr[2]=='x' && arr[5]=='x' && arr[8]=='x'))
	{
		return 100;
	}
	else if((arr[0]=='0' && arr[3]=='0' && arr[6]=='0')||(arr[1]=='0' && arr[4]=='0' && arr[7]=='0') || (arr[2]=='0' && arr[5]=='0' && arr[8]=='0'))
	{
		return 200;
	}
	else if((arr[0]=='x'&& arr[4]=='x'&&arr[8]=='x')||(arr[2]=='x'&& arr[4]=='x'&&arr[6]=='x'))
	{
		return 100;
	}
	
	else if((arr[0]=='0'&& arr[4]=='0'&&arr[8]=='0')||(arr[2]=='0'&& arr[4]=='0'&&arr[6]=='0'))
	{
		return 200;
	}
	else
	{
		return 300;
	}
	
}

int main()
{
	char data;
	
	label2:
	show();
	inputSignal();
	start();
	play();
	
	label1:
		
	show();
	play();
	int k=end();
	show();
	
	if(k==100)
	{
		printf("Player 1 won\n");
		
	}
	else if(k==200)
	{
		printf("Player 2 won\n");
	}
	else
	{
		goto label1;
	}
	
	printf("Do you want to play the game again?:if YES type 'y'or 'n'to exit\n");
	fflush(stdin);
	scanf("%c",&data);
	if(data=='y'|| data=='Y')
	{
	arr[0]='1';
	arr[1]='2';
	arr[2]='3';
	arr[3]='4';
	arr[4]='5';
	arr[5]='6';
	arr[6]='7';
	arr[7]='8';
	arr[8]='9';
	goto label2;
	}
	else
	{
		return 0;
		
	}
	
	
}
