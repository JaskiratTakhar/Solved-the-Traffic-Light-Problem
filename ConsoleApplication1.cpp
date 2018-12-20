// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
enum State { R =0, Y =2,G = 3};
//Function Deceleration
State Current_State(State Current_State, bool P);
int main(){
	int user_input;
	cout << "output the char for light{0,2,3}";
	cin >> user_input;
	State Current=(State)user_input;
	bool p;
	cout << "output the condition for light{1=true,0=false}";
	cin >> p;
	
		cout << Current_State(Current, p);
		return 0;
}
State Current_State(State Current_State, bool P){
	if (!P){
		switch (Current_State){

		case R:
			cout << "It's a Red Light"<<endl;
			return R;
			break;
		case Y:
			cout << "It's a Yellow Light"<<endl;
			return Y;
			break;
		case G:
			cout << "It's a Green Light"<<endl;
			return G;
			break;
		default:
			cout << "It's not working" << endl;
			break;
		}
	}
		else if (P){

			switch (Current_State){

			case R:
				cout << "It's a Yellow Light"<<endl;
				return Y;
				break;
			case Y:
				cout << "It's a Green Light"<<endl;
				return G;
				break;
			case G:
				cout << "It's a Red Light"<<endl;
				return R;
				break;
			default:
				cout << "It's not working" << endl;
				break;
			}
		}
	}