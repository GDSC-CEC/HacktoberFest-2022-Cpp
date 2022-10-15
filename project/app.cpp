#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char name[30], pizza1[] = "Chicken Fazita", pizza2[] = "Chicken Bar BQ", pizza3[] = "Peri Peri", pizza4[] = "Creamy Max", roll1[] = "Chicken Chatni Roll", roll2[] = "Chicken Mayo Roll", roll3[] = "Veg Roll With Fries", bur1[] = "Zinger Burger", bur2[] = "Chicken Burger", bur3[] = "Beef Burger";
	char sand1[] = "Club Sandwich", sand2[] = "Chicken Crispy Sandwich", sand3[] = "Extream Veg Sandwich";
	char bir1[] = "Chicken Biryani", bir2[] = "Prawn Biryani", bir3[] = "Beef Biryani", gotostart;
	int choice = 0, pchoice, pchoice1, quantity; // time=40;
beginning:
	system("CLS");
	cout << "\t\t\t----------Carl's Jr. Fast Food-----------\n\n";
	cout << "Please Enter Your Name: ";
	cin.getline(name, 20);
	cout << "Hello " << name << "\n\nWhat would you like to order?\n\n";

	cout << "\t\t\t\t--------Menu--------\n\n";

	cout << "1) Pizzas\n";
	cout << "2) Burgers\n";
	cout << "3) Sandwich\n";
	cout << "4) Rolls\n";
	cout << "5) Biryani\n\n";
	cout << "\nPlease Enter your Choice: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "\n1) " << pizza1 << "\n";
		cout << "2) " << pizza2 << "\n";
		cout << "3) " << pizza3 << "\n";
		cout << "4) " << pizza4 << "\n";
		cout << "\nPlease Enter which Flavour would you like to have?:";
		cin >> pchoice;
		if (pchoice >= 1 && pchoice <= 5)
		{
			cout << "\n1) Small Rs.250\n"
				 << "2) Regular Rs.500\n"
				 << "3) Large Rs.900\n";
			cout << "\nChoose Size Please:";
			cin >> pchoice1;
			if (pchoice1 >= 1 && pchoice1 <= 3)
				cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1:
				choice = 250 * quantity;
				break;

			case 2:
				choice = 500 * quantity;
				break;

			case 3:
				choice = 900 * quantity;
				break;
			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << pizza1;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\n\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << pizza2;
				cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << pizza3;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 4:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << pizza4;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			}
			cout << "Would you like to order anything else? Y / N:";
			cin >> gotostart;
			if (gotostart == 'Y' || gotostart == 'y')
			{
				goto beginning;
				// return 0;
			}
		}
	}

	else if (choice == 2)
	{
		cout << "\n1 " << bur1 << " Rs.180"
			 << "\n";
		cout << "2 " << bur2 << " Rs.150"
			 << "\n";
		cout << "3 " << bur3 << " Rs.160"
			 << "\n";
		// cout<<"4 "<<pizza4<<"\n";
		cout << "\nPlease Enter which Burger you would like to have?: ";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1:
				choice = 180 * quantity;
				break;

			case 2:
				choice = 150 * quantity;
				break;

			case 3:
				choice = 160 * quantity;
				break;
			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << bur1;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food \n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << bur2;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Pizza\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << bur3;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			}
			cout << "\nWould you like to order anything else? Y / N:";
			cin >> gotostart;
			if (gotostart == 'Y' || gotostart == 'y')
			{
				goto beginning;
				// return 0;
			}
		}
	}
	else if (choice == 3)
	{
		cout << "\n1  " << sand1 << " Rs.240"
			 << "\n";
		cout << "2  " << sand2 << " Rs.160"
			 << "\n";
		cout << "3  " << sand3 << " Rs.100"
			 << "\n";
		// cout<<"4 "<<pizza4<<"\n";
		cout << "\nPlease Enter which Sandwich you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1:
				choice = 240 * quantity;
				break;

			case 2:
				choice = 160 * quantity;
				break;

			case 3:
				choice = 100 * quantity;
				break;
			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << sand1;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << sand2;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << sand2;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			}
			cout << "Would you like to order anything else? Y / N:";
			cin >> gotostart;
			if (gotostart == 'Y' || gotostart == 'y')
			{
				goto beginning;
				// return 0;
			}
		}
	}

	else if (choice == 4)
	{
		cout << "\n1 " << roll1 << " Rs.150"
			 << "\n";
		cout << "2 " << roll2 << " Rs.100"
			 << "\n";
		cout << "3 " << roll3 << " Rs.120"
			 << "\n";
		// cout<<"4 "<<pizza4<<"\n";
		cout << "\nPlease Enter which you would like to have?: ";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nHow Much Rolls Do you want: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1:
				choice = 150 * quantity;
				break;

			case 2:
				choice = 100 * quantity;
				break;

			case 3:
				choice = 120 * quantity;
				break;
			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << roll1;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << roll2;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << roll3;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			}
		}
	}
	else if (choice == 5)
	{
		cout << "\n1 " << bir1 << " Rs.160"
			 << "\n";
		cout << "2 " << bir2 << " Rs.220"
			 << "\n";
		cout << "3 " << bir3 << " Rs.140"
			 << "\n";
		// cout<<"4 "<<pizza4<<"\n";
		cout << "\nPlease Enter which Biryani you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1:
				choice = 160 * quantity;
				break;

			case 2:
				choice = 220 * quantity;
				break;

			case 3:
				choice = 140 * quantity;
				break;
			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << bir1;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food \n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << bir2;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << bir3;
				cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From Carl's Jr. Fast Food\n";
				break;
			}
			cout << "Would you like to order anything else? Y / N:";
			cin >> gotostart;
			if (gotostart == 'Y' || gotostart == 'y')
			{
				goto beginning;
				// return 0;
			}
		}
	}

	else
	{
		system("CLS");
		cout << "Please Select Right Option: \n";
		cout << "Would You like to Start the program again? Y / N: ";
		cin >> gotostart;

		if (gotostart == 'Y' || gotostart == 'y')
		{
			goto beginning;
			return 0;
		}
	}

	getch();
}
