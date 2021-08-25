#include<stdio.h>
main()
{
	printf("choose a food item: \n1.pizza,rs 239\n2.burger,rs 129\n3.pasta,rs 179\n4.french fries,rs 99\n5.sandwich rs 149");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you choosed pizza.");
			break;
		case 2:
		    printf("you choosed burger.");
			break;
		case 3:
		    printf("you choosed pasta.");
			break;
		case 4:
		    printf("you choosed french fries.");
			break;
		case 5:
			printf("you choosed sandwich.");
			break;
		default: printf("invalid choice");					
	}
}
