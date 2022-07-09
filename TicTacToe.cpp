#include <iostream.h>
#include <conio.h>
#include<stdio.h>
#include<string.h>
 
class tic{
public:
char box[10] = {'0','1','2','3','4','5','6','7','8','9'};
void won();
void game_board();
};


int tic:: won()
{
           	If((box[1] == box[2])&&(box[2] == box[3]))
                           	return 1;
           	else if ((box[4] == box[5] )&&( box[5] == box[6]))
                           	return 1;
           	else if ((box[7] == box[8] )&&( box[8] == box[9]))
                           	return 1;
           	else if ((box[1] == box[4] )&&( box[4] == box[7]))
                           	return 1;
           	else if ((box[2] == box[5] )&&( box[5] == box[8]))
                           	return 1;
           	else if ((box[3] == box[6] )&&( box[6] == box[9]))
                           	return 1;
           	else if ((box[1] == box[5] )&&( box[5] == box[9]))
                           	return 1;
           	else if ((box[3] == box[5] )&&( box[5] == box[7]))
                           	return 1;
           	else
           	     	if ((box[1] != '1' )&&( box[2] != '2' )&&( box[3] != '3' )&&(
           	     	box[4] != '4' )&&( box[5] != '5' )&&( box[6] != '6' )&&(
   	                   box[7] != '7' )&&( box[8] != '8' )&&( box[9] != '9'))
                           	return 0;
           	else
                           	return -1;
}


void tic::game_board()
{
           	clrscr();
           	cout << "\n\n\tTic Tac Toe\n\n";
           	cout << "Person 1 (X)  -  Person 2 (O)" << endl << endl;
           	cout << endl;
           	cout << " 	| 	|     " << endl;
           	cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;
           	cout << "_____|_____|_____" << endl;
           	cout << " 	| 	|     " << endl;
           	cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;
           	cout << "_____|_____|_____" << endl;
           	cout << " 	| 	|     " << endl;
           	cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;
           	cout << " 	| 	|     " << endl << endl;
}


void main()
{
	tic t;
           	int person = 1;
           	int  i , choice;
           	char score;
           	clrscr();
           	do
           	           	{
           	           	           	t.game_board();
                           	           	person=(person%2)?1:2;
                           	           	cout << "Person " << person << ", enter a number:  ";
                           	           	cin >> choice;
                           	           	score=(person == 1) ? 'X' : 'O';
           	           	           	if ((choice == 1 )&&( t.box[1] == '1'))
                                          	           	t.box[1] = score;
                           	           	else if ((choice == 2 )&&( t.box[2] == '2'))
                                          	           	t.box[2] = score;
                           	           	else if ((choice == 3 )&&( t.box[3] == '3'))
                                          	           	t.box[3] = score;
                           	           	else if ((choice == 4 )&&( t.box[4] == '4'))
                                          	           	t.box[4] = score;
                           	           	else if ((choice == 5 )&&( t.box[5] == '5'))
                                          	           	t.box[5] = score;
                           	           	else if ((choice == 6 )&&( t.box[6] == '6'))
                                          	           	t.box[6] = score;
                           	           	else if ((choice == 7 )&&( t.box[7] == '7'))
                                          	           	t.box[7] = score;
                           	           	else if ((choice == 8 )&&( t.box[8] == '8'))
                                          	           	t.box[8] = score;
                           	           	else if ((choice == 9 )&&( t.box[9] == '9'))
                                          	           	t.box[9] = score;
                           	           	else
                           	           	{          	
                                          	           	cout<<"Invalid move ";
                                          	           	person--;
                                          	getch();
                           	}
                           	           	i=t.won();
                           	           	person++;
           	           	}while(i==-1);
           	           	t.game_board();
           	           	if(i==1)
           	           	           	cout<<"==>\aPerson "<<--person<<" win ";
           	           	else
                           	           	cout<<"==>\aGame draw";
getch();
 
}
