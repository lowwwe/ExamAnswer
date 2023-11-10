// author Peter Lowe
// date 10/11/223
// estimate 20 min
// start 22:53
// end 23:20
// actual 27 min


//
#include <iostream>

void calSchoolTour(int t_children, int t_lunches);

int main()
{
	int children = 0;// no of Children
	int lunches = 0;// no of lunches
	
	std::cout << " How many child tickets do you want ? ";
	std::cin >> children;
	std::cout << "How many lunches do you want ";
	std::cin >> lunches;

	if (children <= 0 || children > 100)
	{
		std::cout << "You must enter a number between 1 and 100" << std::endl;
	}
	else
	{
		if (lunches < 0 || lunches > 100)
		{
			std::cout << "you must have between 0 and 100 lunches" << std::endl;
		}
		else
		{
			calSchoolTour(children, lunches);
		}
	}

	



	std::system("pause");
	return 1;
}

void calSchoolTour(int t_children, int t_lunches)
{
	float lunchCost = 0.0f; // total for lunches
	float ticketCost = 0.0f; // cosat of tickets
	float totalCost = 0.0f; // total cost of trip

	float const SECOND_CHILD_DISCOUNT = 0.90f;// disacouint foir 2nd child
	float const THIRD_CHILD_DISCOUINT = 0.85f;// discount for 3rd and subsequent children
	float const LUNCH = 9.00f; // price of one lunch
	float const TICKET = 18.50f; // price per student

	if (t_children == 1)
	{
		ticketCost = TICKET ;
	}
	if (t_children == 2)
	{
		ticketCost = TICKET + TICKET * SECOND_CHILD_DISCOUNT;
	}
	if (t_children > 2)
	{
		ticketCost = TICKET + TICKET * SECOND_CHILD_DISCOUNT + (t_children - 2) * TICKET * THIRD_CHILD_DISCOUINT;
	}
	lunchCost = t_lunches * LUNCH;
	totalCost = ticketCost + lunchCost;

	std::cout << "The cost of the tour is " << totalCost << std::endl;

}
