/***********************************************************/
/*              -Project: Library Mangagement              */
/*              -Authors:                                  */
/*                      1- Abd El-Muniem                   */
/*                      2- Zeyad Elyamany                  */
/***********************************************************/

#include <stdio.h>
#include<string.h>
/*         User defined struct to store books data         */
typedef struct
{
	char name[50];
	char publisher[50];
	int price;
}data;
/***********************************************************/

/*                  Functions Declaration                  */
int BookInf(data* InArr);
void BooksAv(data* AvArr, int AvCount);
void HighestP(data* HpArr, int HpCount);
void Pub(data* PbArr, int PbCount);
/***********************************************************/

/*                      Main Function                      */
int main()
{
	int choice;
	int flag = 1;//exit flag 
	int DtCount=0;//no. of existing books
	data DtArr[100];//array to store books data
	printf("***************************\n");
	printf("*       M&Z LIBRARY       *\n");
	printf("***************************\n");
	/* stuck in the loop till user enters 5 to exit */ 
	while(flag){
		printf("1- Add book information\n");
		printf("2- Display all books available\n");
		printf("3- Display Highest price book\n");
		printf("4- Disblay List of publishers\n");
		printf("5- Exit\n");
		printf("***************************\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		printf("***************************\n");

		switch(choice){
			case 1 : 
				DtCount = BookInf(DtArr);
				printf("***************************\n");
				break;
			case 2 : 
				BooksAv(DtArr, DtCount);
				printf("***************************\n");
				break;
			case 3 : 
				HighestP(DtArr,DtCount);
				printf("***************************\n");
				break;
			case 4 : 
				Pub(DtArr,DtCount);
				printf("***************************\n");
				break;
			case 5 : 
				flag = 0;
				break;
			default : 
				printf("Wrong input! Please try again\n");
				break;
		}
	}
	printf("GOODBYE!\n");
	printf("***************************\n");

	return 0;
}
/***********************************************************/

/*                   Functions defintion                   */
/***********************************/
/*          Add new book           */
int BookInf(data* InArr)
{
	static int counter = 0;
	printf("Enter the book name: ");
	scanf("\n");
	gets(InArr[counter].name);
	printf("Enter the book author: ");
	gets(InArr[counter].publisher);
	printf("Enter the book price: ");
	scanf("%d",&InArr[counter].price);
	counter++;
	return counter;
}
/***********************************/

/*     Disblay available books     */
void BooksAv(data* AvArr, int AvCount)
{
	for(int i = 0; i <AvCount;i++){
		printf("%d- book name: %s    Author: %s    price: %d\n",i+1,AvArr[i].name,AvArr[i].publisher,AvArr[i].price);
	}
}
/***********************************/

/* Disblay book with highest price */ 
void HighestP(data* HpArr, int HpCount)
{
	int max=0,temp=0;
	for(int i = 0;i<HpCount;i++)
	{
		if(max < HpArr[i].price)
		{
			max = HpArr[i].price;
			temp = i;
		}
	}
	printf("Highest price book: %s    price: %d\n",HpArr[temp].name,max);

	
}
/***********************************/

/*    Display all books Authors    */
void Pub(data* PbArr, int PbCount)
{
	printf("Authors list: \n");
	for(int i=0;i< PbCount;i++)
	{
		printf("%d- %s \n",i+1,PbArr[i].publisher);
	}
}
/***********************************/

/***********************************************************/