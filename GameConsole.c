#include<stdio.h>

#include<stdlib.h>

int main()

{

		char*playername;

	int registration,age,amount;

	int answer;

	char sex;

	amount=0;

	printf("Enter a playername\n");

	int rand(registration);

	scanf("%s",&playername);

age1:

	printf("Enter a player's age'\n");

	scanf("%d",&age);

	if(age<5||age>100)

	{

		printf("Enter a valid age\n");

		goto age1;

	}

	gender:

		printf("Enter a sex(M/F)\n");

	scanf("%s",&sex);

	if(sex=='m'||sex=='M'){

	printf("Welcome to HABIS Quiz gaming world.\n");

		printf("MR. %s\n",&playername);

}

    else if(sex=='f'||sex=='F'){

	printf("Welcome to HABIS Quiz gaming world.\n");

		printf("MRS. %s\n",&playername);}

		else

		{printf("enter a valid sex.\n");

		goto gender;

		}

// QUESTION START //

start1:

	printf("Which lake is situated at highest altitude in Nepal?\n");

	printf("1.Tilicho     3.Gosaikunda\n");

	printf("2.Rara     4.Phoksundo\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start1;

		}

		if (answer==1)

		{

			amount=2;

		answer=0;

		}

		else{
        printf("Your answer is 1.Tilicho");
			goto finish;

		}

		start2:

		printf("Which temple is located at highest altitude of Nepal?\n");

	printf("1.Manakamana     3.Muktinath\n");

	printf("2.Maheswori Dyochen    4.Malikarjun(Darchula)\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start2;

		}

		if (answer==3)

		{

			amount=amount+2;

		answer=0;

		}

		else{
			printf("Your answer is 3.Muktinath");

			goto finish;

		}

		start3:

		printf("Which is the largest river in Nepal?\n");

	printf("1.Bhotekoshi     3.Dudhkoshi\n");

	printf("2.Tamakoshi    4.Saptakoshi\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start3;

		}

		if (answer==4)

		{

			amount=amount+2;

		answer=0;

		}

		else{
			printf("Your answer is 4.Saptakoshi");

			goto finish;

		}

		start4:

		printf("Who was the prime minister of nepal when the Narayanhiti Massacre took place?\n");

	printf("1.Sher Bahadur Deuba        3.Krishna Parasad Bhattari\n");

	printf("2.Girija Parasad Koirala    4.Alkapuri\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start4;

		}

				if (answer==2)

		{

			amount=amount+2;

		answer=0;

		}

		else{
			printf("Your answer is 2.Grija Prasad Koirala");

			goto finish;

		}

		start5:

		printf("Nepalesse Women declared CNN Hero in Year 2010(AD) is:\n");

	printf("1.Anuradha Koirala       3.Puspa Basnet\n");

	printf("2.Himani Shah   4.Durga Ghimire\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start5;

		}

		if (answer==1)

		{

			amount=amount+2;

		answer=0;

		}

		else{
			printf("Your answer is 1.Anuradha Koirala");

			goto finish;

		}

		start6:

    printf("What is swayambhunath believed to have emerged from?\n");

	printf("1.Nail of Budhha         3.Sunflower \n");

	printf("2.Rose                   4.Lotus\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start6;

		}

		if (answer==4)

		{

			amount=amount+2;

		answer=0;

		}

		else{
           printf("Your answer is 4.Lotus");
			goto finish;

		}
		
		start7:

    printf("Where is Gobi Desert located?\n");

	printf("1.Mongolia         3.Africa \n");

	printf("2.Nambia            4.India\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start6;

		}

		if (answer==1)

		{

			amount=amount+2;

		answer=0;

		}

		else{
           printf("Your answer is 1.Mongolia");
			goto finish;

        }
        
		start8:

    printf("Which creature is called 'The Flying Fox'?\n");

	printf("1.Bat         3.Dolphin \n");

	printf("2.Lizard      4.Parrot\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start6;

		}

		if (answer==1)

		{

			amount=amount+2;

		answer=0;

		}

		else{
           printf("Your answer is 1.Bat");
			goto finish;

	    } 

		start9:

    printf("Which creature produces its food itself?\n");

	printf("1.Amoeba        3.Water Silk\n");

	printf("2.Paramecium             4.Euglena\n");

		scanf("%d",&answer);

		if(answer<1||answer>4)

		{

			printf("enter a valid answer\n");

			printf("enter 1 2 3 4\n");

			goto start6;

		}

		if (answer==4)

		{

			amount=amount+2;

		answer=0;

		}

		else{
           printf("Your answer is 4.Euglena");
			goto finish;

       }


		finish:

     printf("registration   playername\n");

	printf("%d   %s\n",registration,&playername);	

	printf("your point is %d",amount);

	return 0;

}
