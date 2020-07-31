#include<iostream>
#include<chrono>
using namespace std;
int main()
{	
	cout<<" WELCOME TO HANDCRICKET GAME "<<end;
	string s;
	string s1;
	cout << "ENTER PLAYER ONE NAME " << endl;
	cin >> s;
	cout << "ENTER PLAYER TWO NAME " << endl;
	cin >> s1;
	cout << "HI " << s << " and " << s1 << endl;
	cout << "lets start the game... " << endl << "Player ONE IS BATTING NOW" << endl;
	int temp1, temp2;
	cout << "Players one's turn " << endl;
	cin >> temp1;
	cout << "Players two's turn " << endl;
	cin >> temp2;
	if (temp1 == temp2)
	{
		cout << "DUCK out" << endl;
	}
	int playeronesum = 0;
	int playertwosum = 0;
	while (temp1 != temp2)
	{
		playeronesum = playeronesum + temp1;
		cout << "PLAYER ONE SCORE SO FAR->>>> " << playeronesum << endl;
		cout << "Players one's turn" << endl;
		cin >> temp1;
		cout << "Players two's turn" << endl;
		cin >> temp2;
		if (temp1 == temp2)
		{
			cout << "OUT!!" << "PLAYER ONE SCORED->> " << playeronesum << endl;;
			break;
		}
	}
	cout << "END OF FIRST HALF !! " << endl;
	temp1 = 0;
	temp2 = 0;
	cout << "Player TWO IS BATTING NOW" << endl;
	cout << "Players one's turn " << endl;
	cin >> temp1;
	cout << "Players two's turn " << endl;
	cin >> temp2;
	if (temp1 == temp2)
	{
		cout << "DUCK out"<<endl;
	}
	while (temp1 != temp2)
	{
		playertwosum = playertwosum + temp2;
		cout << "PLAYER TWO SCORE SO FAR->>>> " << playertwosum << endl;
		cout << "Players one's turn" << endl;
		cin >> temp1;
		cout << "Players two's turn" << endl;
		cin >> temp2;
		if (temp1 == temp2)
		{
			cout << "OUT!!" <<endl << "PLAYER TWO SCORED->> " << playertwosum << endl;;
			break;
		}
	}
	cout << "<<<<<<<<<-END OF GAME->>>>>>>>>>>"<<endl;


	if (playeronesum == playertwosum)
	{
		cout <<" DRAW Match" << endl;
	}
	else if (playeronesum > playertwosum )
		{
			cout << s << " Wins!!" << endl;
		}
	else
	{
		cout << s1 << " Wins!!" << endl;
	}
	getchar();
	return 0;
}
