#include<iostream>
using namespace std;
int main()
{
	srand(time(0));
	int com, user;
	cout << "welcome the game \n";
	cout << "----------------\n";
	cout << "Enter 1=paper 2=rock 3= Scissors: ";
	cin >> user;
	com = rand() % 3 + 1;
	cout << "\nuser choose: \n";
	switch (user)
	{
	case 1:
		cout << "    _______\n";
		cout << "---'   ____)____\n";
		cout << "	  ______)\n";
		cout << "         _______)\n";
		cout << "         _______)\n";
		cout << "-- - .__________)\n";
		break;
	case 2:cout << "    _______\n";
		cout << "---' ";
		cout << "  ____)\n";
		cout << "     (_____)\n";
		cout << "     (_____)\n";
		cout << "     (____)\n";
		cout << "    __(___)\n";


		break;
	case 3:
		cout << "   _______\n";
		cout << "---'";
		cout << "  ____)____\n";
		cout << "         ______)\n";
		cout << "         ______)\n";
		cout << "        (____)\n";
		cout << "  ---.";
		cout << "__(___)\n";
		break;
	default:
		break;
	}
	cout << "\ncomputer choose:\n ";
	switch (com)
	{
	case 1:
		cout << "    _______\n";
		cout << "---'   ____)____\n";
		cout << "	  ______)\n";
		cout << "         _______)\n";
		cout << "         _______)\n";
		cout << "-- - .__________)\n";
		break;
	case 2:cout << "    _______\n";
		cout << "---' ";
		cout << "  ____)\n";
		cout << "     (_____)\n";
		cout << "     (_____)\n";
		cout << "     (____)\n";
		cout << "    __(___)\n";

		break;
	case  3:
		cout << "   _______\n";
		cout << "---'";
		cout << "  ____)____\n";
		cout << "         ______)\n";
		cout << "         ______)\n";
		cout << "        (____)\n";
		cout << "  ---.";
		cout << "__(___)\n";
		break;
	default:
		break;
	}
	if (com == user) {
		cout << "\nit's a tie\n";
	}

	else if ((com == 1 && user == 3) || (com == 3 && user == 2) || (com == 2 && user == 1))
	{
		cout << "\nuser is win\n";
	}
	else
	{
		cout << "\ncomputer is win\n";
	}
}


