#include <iostream>
#include <string>
#include <ctime>


using namespace std;
bool win, Almost_win;
string stcheck;
int understand;

bool checkforfull(string a[9])
{
	int lettercounter = 0;
	for (int i = 0; i < 9; i++)
	{
		if ((a[i] == "X ") || (a[i] == "O "))
		{
			lettercounter += 1;
		}
	}


	if (lettercounter == 9)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void checkFORWIN(string a[9])
{
	for (int j = 0; j < 8; j++)
	{
		switch (j)
		{
		case 0:
		{
			int lettercounter_X = 0;
			int lettercounter_O = 0;
			for (int i = 0; i < 3; i++)
			{
				if (a[i] == "X ")
				{
					lettercounter_X += 1;
					if (lettercounter_X == 3)
					{
						stcheck = "X ";
					}
				}
				else if (a[i] == "O ")
				{
					lettercounter_O += 1;
					if (lettercounter_O == 3)
					{
						stcheck = "O ";
					}
				}
			}

			if (lettercounter_X == 3 || lettercounter_O == 3)
			{
				win = true;
			}
			break;
		}


		case 1:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 3; i < 6; i++)
		{
			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}


		case 2:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 6; i < 9; i++)
		{

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}

		case 3:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 0; i < 7; i = i + 3)
		{

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}

		case 4:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 1; i < 8; i = i + 3)
		{
			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}

		case 5:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 2; i < 9; i = i + 3)
		{
			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}

		case 6:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 0; i < 9; i = i + 4)
		{

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}

		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;
		}

		case 7:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 2; i < 7; i = i + 2)
		{
			if (a[i] == "X ")
			{
				lettercounter_X += 1;
				if (lettercounter_X == 3)
				{
					stcheck = "X ";
				}
			}
			else if (a[i] == "O ")
			{
				lettercounter_O += 1;
				if (lettercounter_O == 3)
				{
					stcheck = "O ";
				}
			}
		}
		if (lettercounter_X == 3 || lettercounter_O == 3)
		{
			win = true;
		}
		break;

		}
		}
	}
}

void check_FOR_almost_WIN(string a[9])
{
	Almost_win = false;

	for (int j = 0; j < 8; j++)
	{

		switch (j)
		{
		case 0:
		{
			int lettercounter_X = 0;
			int lettercounter_O = 0;
			for (int i = 0; i < 3; i++)
			{

				if (a[i] == "O ")
				{
					lettercounter_O += 1;
				}
				if (a[i] == "X ")
				{
					lettercounter_X += 1;
				}
			}
			if (lettercounter_O == 2 && lettercounter_X == 0)
			{
				Almost_win = true;
				understand = 0;
			}

			break;
		}
		case 1:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 3; i < 6; i++)
		{
			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}
			if (a[i] == "X ")
			{
				lettercounter_X += 1;
			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 1;
		}

		break;
		}

		case 2:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 6; i < 9; i++)
		{

			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}
			if (a[i] == "X ")
			{
				lettercounter_X += 1;

			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 2;
		}
		break;
		}

		case 3:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 0; i < 7; i = i + 3)
		{
			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 3;
		}
		break;
		}

		case 4:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 1; i < 8; i = i + 3)
		{

			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
			}



		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 4;
		}
		break;
		}

		case 5:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 2; i < 9; i = i + 3)
		{
			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 5;
		}
		break;
		}

		case 6:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 0; i < 9; i = i + 4)
		{
			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}

			if (a[i] == "X ")
			{
		   	lettercounter_X += 1;
			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 6;
		}
		break;
		}

		case 7:
		{int lettercounter_X = 0;
		int lettercounter_O = 0;
		for (int i = 2; i < 7; i = i + 2)
		{
			if (a[i] == "O ")
			{
				lettercounter_O += 1;
			}

			if (a[i] == "X ")
			{
				lettercounter_X += 1;
			}
		}
		if (lettercounter_O == 2 && lettercounter_X == 0)
		{
			Almost_win = true;
			understand = 7;
		}
		break;
		}
		}
	}


}

void print_field(string a[9])
{

	cout << "  " << a[0] << "  | " << a[1] << " | " << a[2] << "" << endl;
	cout << "-----------------" << endl;
	cout << "  " << a[3] << "  | " << a[4] << " | " << a[5] << "" << endl;
	cout << "-----------------" << endl;
	cout << "  " << a[6] << "  | " << a[7] << " | " << a[8] << "" << endl;
	cout << endl;
}


int main()
{

string tictactoe[9] = { "0 ","1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 " };
bool checkforfullness;
int slotnumber, Player = 1;
srand(time(NULL));
do
{
	//PLAYER TURN THEN AI TURN
	if (Player == 1)
	{
		print_field(tictactoe);
		cout << endl;
		cout << "Player 1(O) Enter the slot number: " << endl;
		cin >> slotnumber;
		tictactoe[slotnumber] = "O ";
		system("cls");
		Player += 1;
	}
	else
	{
		check_FOR_almost_WIN(tictactoe);
		if (Almost_win == true)
		{
			switch (understand)
			{
			case 0:
			{
				for (int i = 0; i < 3; i++)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 1:
			{
				for (int i = 3; i < 6; i++)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 2:
			{
				for (int i = 6; i < 9; i++)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}
			case 3:
			{
				for (int i = 0; i < 7; i = i + 3)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 4:
			{
				for (int i = 1; i < 8; i = i + 3)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 5:
			{
				for (int i = 2; i < 9; i = i + 3)
				{
					if (tictactoe[i] != "X " && tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 6:
			{
				for (int i = 0; i < 9; i = i + 4)
				{
					if (tictactoe[i] != "X " && tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			case 7:
			{
				for (int i = 2; i < 7; i = i + 2)
				{
					if (tictactoe[i] != "X "&& tictactoe[i] != "O ")
					{
						tictactoe[i] = "X ";
					}
				}
				break;
			}

			}
		}
		else
		{
			bool done = false;
			do {
				slotnumber = rand() % 9;
				if (tictactoe[slotnumber] != "O " && tictactoe[slotnumber] != "X ")
				{
					tictactoe[slotnumber] = "X ";
					done = true;
				}
			} while (done == false);
		}
		Player -= 1;
	}

	checkforfullness = checkforfull(tictactoe);
	checkFORWIN(tictactoe);

} while (checkforfullness != true && win != true);

print_field(tictactoe);
if (win == true && stcheck == "O ")
{
	cout << " Player 1 won." << endl;
}
else if (win == true && stcheck == "X ")
{
	cout << " Player 2 won." << endl;
}
else if (checkforfullness == true)
{
	cout << "Tie." << endl;
}

return 0;
}
