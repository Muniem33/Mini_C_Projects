/***********************************************************/
/*              -Project: Voting System                    */
/*              -Authors:                                  */
/*                      1- Zeyad Elyamany                  */
/*                      2- Abd El-Muniem                   */
/***********************************************************/

#include <stdio.h>
/*                    Candidates Names                     */
#define FIRSTNAME "Zeyad"
#define SECONDNAME "Muniem"
/***********************************************************/

/*                   Counters for votes                    */
int count1=0;
int count2=0;
/***********************************************************/

/*                  Functions Declaration                  */
void choose();
void vote_result();
void Find_the_winner();
/***********************************************************/

/*                      Main Function                      */
int main()
{
	/* Variables declaration */
	int choise;
	int i;
	/* Stuck in the loop till user choose exit*/
	do
	{
		printf("\t\t\t\t welcome to M&Z voting system\n");
		printf("\t 1-choose your vote\n");
		printf("\t 2- find the vote count\n");
		printf("\t 3- find the winner\n");
		printf("\t 0- EXIT \n");
		printf("Enter your choise\n");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:
			choose();
			break;
			case 2:
			vote_result();
			break;
			case 3:
			Find_the_winner();
			break;
			case 0:
			printf("GOODBYE!");
			break;
			default:printf("ERROR\n");
		}
		
	} while(choise!=0);
		
    return 0;
}
/***********************************************************/

/*                   Functions defintion                   */
/***********************************/
/*     Cast your vote function     */
void choose()
{
    int choise;
    printf("enter your choise:\n");
    printf("1- %s \n",FIRSTNAME);
    printf("2- %s \n",SECONDNAME);
    printf("3- %s \n","none of these");
    
    printf("choose from our 2: \n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
        count1++;
        break;
        case 2:
        count2++;
        break;
        default:printf("wrong input\n");
        
    }
    printf("thank you for your time..\n");
   
}
/***********************************/

/*      Show results function      */
void vote_result()
{
    printf("\t\t\t\t\t the Result:\n");
    printf("%s - %d \n",FIRSTNAME,count1);
    printf("%s - %d \n",SECONDNAME,count2);
    
}
/***********************************/

/*     Find the winner function    */
void Find_the_winner()
{
    if(count1>count2)
    {
        printf(" the winner is=%s \n",FIRSTNAME);
        
    }
    else if(count2>count1)
    {
     printf(" the winner is=%s \n",SECONDNAME);

    }
    else
    printf("no winner\n");
}
/***********************************************************/
