#include <stdio.h>

main()
{
	//variables
	//loop variable
	int loopCheck = 0;
	//employee number variable
	int employee;

	int hours;
	float rate;
	//total weekly pay variable
	float total = 0.0;

	//variables that update with each loop
	float TotalWages = 0.0;
	int Hours39 = 0;
	int HighestEmployee = 0;
	int HighestHours = 0;

	//loops unless loopCheck is -1
	while (loopCheck != -1)
	{
		//user inputs his employee number
		printf("Input your employee number: ");
		scanf("%d", &employee);

		//user inputs their hours worked
		printf("How many hours have you worked this week?: ");
		scanf("%d", &hours);
		//user inputs their hourly pay rate
		printf("What was your hourly rate of pay?: ");
		scanf("%f", &rate);

		//calculations
		//less or equal to 39 hours
		if (hours <= 39)
			total = hours * rate;
		//less or equal to 50 hours
		else if (hours <= 50)
			total = (39 * rate) + (((hours - 39) * rate) * 1.5);
		//more than 50 hours
		else
			total = (39 * rate) + ((11 * rate) * 1.5) + ((((hours - (39+11)) * rate) * 2));

		//total company wage bill
		TotalWages = TotalWages + total;
		//hours worked above 39
		Hours39 = Hours39 + hours;
		//if current user has highest hours
		if (HighestHours < hours)
		{
			HighestHours = hours;
			HighestEmployee = employee;
		}

		//display employee number and total weekly salary
		printf("\nEmployee number %d", employee);
		printf("\nYour total weekly salary is %.2f", total);

		printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

		//user enters -1 to end loop
		printf("\nDo you wish to see another salary?\nEnter -1 to see the results from all employees: ");
		scanf("%d", &loopCheck);

		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}

	//displays variables that updated with each loop
	printf("\nTotal company wages: %.2f", TotalWages);
	printf("\nTotal number of hours worked above 39: %d", Hours39);
	printf("\nThe employee with the most hours worked was employee %d with %d hours\n", HighestEmployee, HighestHours);
}