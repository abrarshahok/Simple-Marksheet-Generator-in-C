#include<stdio.h>

void printline()
{
	for(int i=1;i<=70;i++)
	printf("-");
}
int main()
{
	system("clear");

	int sub1,sub2,sub3,sub4,sub5,sub6,obt,rollno;
	float avg,per;
	char ans,name1[20],name2[20],name3[20];

	do
	{
    system("clear");

	{
	
	printf("\nMARKSHEET FOR COMPUTER SCIENCE DEPARTMENT\n");
	

    printf("\nEnter Your First Name : ");
	scanf("%s",name1);

	printf("\nEnter Your Second Name : ");
	scanf("%s",name2);

	printf("\nEnter Your Caste : ");
	scanf("%s",name3);

	printf("\nEnter Your Roll no :");
	scanf("%d",&rollno);
    
	do
	{
	printf("\nEnter Marks of P.F out of 100 : ");
	scanf("%d",&sub1);
	}
	while(sub1>100||sub1<0);
	
	do
	{
	printf("\nEnter Marks of I.C out of 50 : ");
	scanf("%d",&sub2);
	}
	while(sub2>50||sub2<0);
		
	do
	{
	printf("\nEnter Marks of C & AG out of 100 : ");
	scanf("%d",&sub3);
	}
	while(sub3>100||sub3<0);
		
	do
	{
	printf("\nEnter Marks of EC & C out of 100 : ");
	scanf("%d",&sub4);
	}
	while(sub4>100||sub4<0);
		
	do
	{
	printf("\nEnter Marks of A.P out of 100 : ");
	scanf("%d",&sub5);
	}
	while(sub5>100||sub5<0);

	do
	{
	printf("\nEnter Marks of P.S out of 50 : ");
	scanf("%d",&sub6);
	}
	while(sub6>50||sub6<0);

	}
	
	
	{
	per=(float)(sub1+sub2+sub3+sub4+sub5+sub6)/500*100;
	
	printf("The Percentage is %.2f\n\n",per);
	
	printf("Total Marks = 500\n\n");
	
	obt=sub1+sub2+sub3+sub4+sub4;
	
	printf("Obtained Marks : %d \n\n",obt);
	}
    
	{
    system("clear");
	printf("\nName       : %s %s %s",name1,name2,name3);
	printf("\nRoll No    : 21BSCS%d",rollno);
	printf("\nDepartment : COMPUTER SCIENCE \n");
	printf("\n");
	printline();
	printf("\nSubject               Marks                    Obtained Marks");
	printf("\n");
	printline();
	printf("\n");
	printf("P.F                      100                        %d\n",sub1);
	printf("I.C                       50                        %d\n",sub2);
	printf("C & AG                   100                        %d\n",sub3);
	printf("EC & C                   100                        %d\n",sub4);
	printf("A.P                       50                        %d\n",sub5);
	printf("P.S                       50                        %d\n",sub6);
	printline();
    printf("\n");
	printf("\nTotal                    500                        %d\n",obt);
	printline();
    printf("\nTotal Percentage                                  %.2f\n",per);
	printline();
	printf("\n");

	}

	
{
		if (per>=85)
		   printf("\nCongratulations You have got A+ Grade\nYour CGPA is 4.00");
		
		else if (per>=75)
		   printf("\nCongratulations You have got A Grade\nYour CGPA is 3.75 ");
		
		else if (per>=66)
		   printf("\nYou have got B+ Grade\nYour CGPA is 3.50 ");

		else if (per>=60)
		   printf("\nYou have got B Grade\nYour CGPA is 3.00 ");

		else if (per>=55)
		   printf("\nYou have got C+ Grade\nYour CGPA is 2.50 ");

		else if (per>=50)
		   printf("\nYou have got C Grade\nYour CGPA is 2.00 ");

		else
		   printf("\nSorry! You are Fail & Got Grade F\n");
		
	}
	
	printf("\n\n\nMADE BY ABRAR AHMED SHAHOK\nROLL NO : 21BCS020\nHAVE A GOOD DAY!\n");
	

	printf("\n\nDo You Wnat to Run Program Again? (y/n) : ");
	scanf("%c",&ans);
	printf("\n");
	
	

	}

	while(ans=='y' || ans=='Y');





	return 0;
}
