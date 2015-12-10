// itemization.cpp : Itemization code for apartment
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>   //vince is a bitch

FILE *fp1, *fp2;

int operation(int op);
void end(int op);
void itemize(int users, char name1[10], char name2[10], char name3[10], char name4[10]);
void sponsor(int users, char name1[10], char name2[10], char name3[10], char name4[10]);

//how many users and their names
int users;
char name1[10];
char name2[10];
char name3[10];
char name4[10];

char buffer[10];

int main(void)
{
	printf("Enter how many users:");
	scanf("%i", &users);

	//making sure users is between 2 and 5
	/*while (users < 2 && users > 4)
	{
		printf("The number of users must be either 2, 3, or 4.\nPlease reenter the number of users: ");
		scanf("%d", &users);
	}*/

	if (users == 2)
	{
		printf("\nWhat is the name of user 1:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name1);
		printf("\nWhat is the name of user 2:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name2);
	}
	else if (users == 3)
	{
		printf("\nWhat is the name of user 1:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name1);
		printf("\nWhat is the name of user 2:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name2);
		printf("\nWhat is the name of user 3:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name3);
	}
	else if(users == 4)
	{
		printf("\nWhat is the name of user 1:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name1);
		printf("\nWhat is the name of user 2:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name2);
		printf("\nWhat is the name of user 3:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name3);
		printf("\nWhat is the name of user 4:");
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%s", name4);
	}


	int op;
	printf("\n\nWhat operation would you like to perform?\n");
	printf("1 - Add item, 4 - End");
	scanf("%d", &op);

	operation(op);
	return 0;
}

int operation(int op)
{

	if (op == 1)
	{
		void itemize(void);
	}

	else if (op == 2)
	{

	}

	else if (op == 3)
	{

	}

	else if (op == 4)
	{
		end(op);
	}
	return 0;
}

void itemize(int users, char name1[10], char name2[10], char name3[10], char name4[10])
{

}

void end(int op)
{
	fp2 = fopen("Itemization.txt", "w");
	fprintf(fp2, "blah blah blah");
}
