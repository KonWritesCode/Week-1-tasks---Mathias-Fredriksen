#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>
#include <windows.h>

void Task1()
{
	std::cin.ignore(32767, '\n');
    std::cout << "TASK 1\n\n";
	//Ask for and get the users full name
    std::string full_name;
    std::cout << "Please enter your full name: ";
	std::getline(std::cin, full_name);
	std::cin.ignore(32767, '\n');
	char Integer{ full_name[0] };
	
	int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;

	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "Your number is invalid\n";
		std::cout << "Please enter your age: ";
		std::cin >> age;
	}

    std::string age_string{std::to_string(age)};

	//Ask for and get the users phone number
    int phone_number;
    std::cout << "Please enter your phone number: ";
    std::cin >> phone_number;

	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "Your number is invalid\n";
		std::cout << "Please enter your phone number: ";
		std::cin >> phone_number;
	}

	//Ask for and get the users birthdate
    std::string birthdate;
    std::cout << "Please enter the date you were born (dd/mm/yy): ";
    std::cin >> birthdate;

	//Find the longest string
	int box_length;
	box_length = full_name.length();

	if (box_length < full_name.length())
	{
		box_length = age_string.length();
	}
	if (box_length < std::to_string(phone_number).length())
	{
		box_length = std::to_string(phone_number).length();
	}	
	if (box_length < birthdate.length())
	{
		box_length = birthdate.length();
	}

	std::cout << box_length << " length of user_name";

	//Create user profile
	system("cls");
	std::cout << "\n----------------" << std::string(box_length, '-') << "----\n";
	std::cout << "| Profile         " << std::string(box_length, ' ') << " |\n";
	std::cout << "|-----------------" << std::string(box_length, '-') << "-|\n";
	std::cout << "| Name:         | " << full_name << std::string(box_length - full_name.length(), ' ') << " |\n";
	std::cout << "| Initial:      | " << Integer << std::string(box_length - 2, ' ') << "  |\n";
	std::cout << "| Age:          | " << age_string << std::string(box_length - age_string.length(), ' ') << " |\n";
	std::cout << "| Phone number: | " << phone_number << std::string(box_length - std::to_string(phone_number).length(), ' ') << " |\n";
	std::cout << "| Birthday:     | " << birthdate << std::string(box_length - birthdate.length(), ' ') << " |\n";
	std::cout << "------------------" << std::string(box_length, '-') << "--\n";


	std::cout << "\n\n" << "Please type anything to return to the menu\n";
	int i; //This value is not used for any purpose later;
	std::cin >> i;
}

void Task2()
{
	std::cout << "TASK 2\n\n";

	//Asks what the users name is
	std::string name;
	std::cout << "What is your name?\n";
	std::cin >> name;

	//Asks how old the user is
	std::cin.ignore(32767, '\n');
	int age;
	std::cout << "What is your age?\n";
	std::cin >> age;

	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "Your number is invalid\n";
		std::cout << "What is your age?\n";
		std::cin >> age;
	}

	//Asks if the user likes coffee
	std::string likesCoffee_string;
	std::cout << "Do you like to drink coffee?\n";
	std::cin >> likesCoffee_string;

	//If the user reply is no 'Yes' or 'No', repeat the question.
	while (likesCoffee_string != "yes" && likesCoffee_string != "Yes" && likesCoffee_string != "no" && likesCoffee_string != "No") {
		
		std::cout << std::endl << "I'm sorry, I didn't quite get that, please reply with 'Yes' or 'No'\n";
		std::cin >> likesCoffee_string;
	}

	bool likesCoffee;
	if (likesCoffee_string == "yes" || likesCoffee_string == "Yes")
	{
		likesCoffee = true;
	}
	else if (likesCoffee_string == "no" || likesCoffee_string == "No")
	{
		likesCoffee = false;
	}

	//Gives the user a reply to all their answers
	system("cls");
	std::cout << name << " is a wonderfull name!\n";

	std::cout << age << " years old? I can respect that!\n";

	if (likesCoffee) 
	{
		std::cout << "I don't like coffee myself myself, but I'm glad you like it!\n";
	}
	else 
	{
		std::cout << "I also don't really like coffee!\n";
	}


	std::cout << "\n\n" << "Please type anything to return to the menu\n";
	int i; //This value is not used for any purpose later;
	std::cin >> i;
}

void Task3() 
{
	std::cout << "TASK 3\n\n";

	//Asks how old the user is
	std::cin.ignore(32767, '\n');
	int age;
	std::cout << "What is your age?\n";
	std::cin >> age;

	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "Your number is invalid\n";
		std::cout << "What is your age?\n";
		std::cin >> age;
	}

	//Output reply based on age
	if(age < 20)
	{
		std::cout << "You are quite young!\n";
	}
	else if(age >= 20 && age < 40)
	{
		std::cout << "You must be a grown up adult!\n";
	}
	else if (age >= 40 && age < 60) 
	{
		std::cout << "You are old. But with age comes experience!\n";
	}
	else if(age >= 60)
	{
		std::cout << "You are really old! I bet you have many great stories to tell!\n";
	}

	//Continue to next task
	std::cout << "\n\n" << "Please type anything to return to the menu\n";
	int i; //This value is not used for any purpose later;
	std::cin >> i;
}

void Task4() 
{
	std::cout << "TASK 4\n\n";

	//Ask the user what they'd like to order
	std::cout << "Welcome to Mc. Donalds. May I take your order?\n\n";
	std::cout << "MENU\n" <<   "---------------------------\n";
	std::cout << " 1. Cheeseburger\n 2. Big Mac\n 3. Double Cheeseburger\n";
	std::cout << "---------------------------\n";
	
	std::cout << "\n" << "Please enter the number of what you'd like to order: ";
	
	//Get input and check if it's a valid answer
	int orderNr;
	std::cin >> orderNr;
	while (std::cin.fail() || orderNr > 3 || orderNr <= 0) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "I'm sorry, that's not on the menu\n";
		std::cout << "Please enter the number of what you'd like to order: ";
		std::cin >> orderNr;
	}

	//Give a reply based on the users order
	if(orderNr == 1)
	{
		std::cout << "One Cheeseburger, coming right up!\n";
	}
	if (orderNr == 2)
	{
		std::cout << "One Big Mac, coming right up!\n";
	}
	if (orderNr == 3)
	{
		std::cout << "One Double Cheeseburger, coming right up!\n";
	}

	//Burger
	std::cout << "\n";
	std::cout << "          _..----.._       \n";
	std::cout << "        .'     o    '.     \n";
	std::cout << "       /   o       o  \\   \n";
	std::cout << "      |o        o     o|   \n";
	std::cout << "      /'-.._o     __.-'\\  \n";
	std::cout << "      \\      `````     /  \n";
	std::cout << "      |``--........--'`|   \n";
	std::cout << "       \\              /   \n";
	std::cout << "        `'----------'`     \n";


	//Continue to next task
	std::cout << "\n\n" << "Please type anything to return to the menu\n";
	int i; //This value is not used for any purpose later;
	std::cin >> i;
}

void Task5()
{
	std::cout << "TASK 5\n\n";

	//Get design
	std::string design;
	design =  "      1   2   3   4   5   6    \n";
	design += "     --- --- --- --- --- ---   \n";
	design += " A  | * | * | * | * | * | * | A\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " B  | * | * | * | * | * | * | B\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " C  | * | * | * | * | * | * | C\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " D  | * | * | * | * | * | * | D\n";
	design += "     --- --- --- --- --- ---   \n";
	design += "      1   2   3   4   5   6    \n";
	
	//Print design
	for (int i = 0; i < design.length(); i++) 
	{
		if(design.at(i) == '*')
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //Change text color to red
			std::cout << "*";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //Change text color to white
		}
		else
		{
			std::cout << design.at(i);
		}
	}

	//Continue to next task
	std::cout << "\n\n" << "Please type anything to return to the menu\n";
	int i; //This value is not used for any purpose later;
	std::cin >> i;
}

void ChooseTask()
{
	system("cls");

	//Ask the user which task they'd like to see
	std::cout << "---------------------------\n";
	std::cout << " 1. Task 1 \n 2. Task 2\n 3. Task 3\n 4. Task 4\n 5. Task 5\n 6. Exit program\n";
	std::cout << "---------------------------\n";

	std::cout << "\n" << "Please enter the number of which task you'd like to see: ";

	//Get input and check if it's a valid answer
	int taskNr;
	std::cin >> taskNr;
	while (std::cin.fail() || taskNr > 6 || taskNr <= 0) 
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << std::endl << "That's not a valid number\n";
		std::cout << "Please enter the number of the task you'd like to see:\n";
		std::cin >> taskNr;
	}

	//Give a reply based on the users order
	system("cls");
	if (taskNr == 1)
	{
		Task1();
	}
	else if (taskNr == 2)
	{
		Task2();
	}
	else if (taskNr == 3)
	{
		Task3();
	}
	else if (taskNr == 4)
	{
		Task4();
	}
	else if (taskNr == 5)
	{
		Task5();
	}

	if (taskNr != 6)
	{
		ChooseTask();
	}
}

int main()
{
	ChooseTask();
	return 0;
}