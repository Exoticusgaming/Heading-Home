// Game.cpp
// Title Heading Home
// Author: Curtis Short

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	// Variable declaration
	char start;
	char cont;
	char playAgain;

	int i; // Used in for loop when using combination
	int birthYear; // Used to calculate the combination
	int carChoice; // Used for inside car
	int lookCarChoice; // Used when look around car
	int outsideCarChoice; // Used when outside car
	int insideStationChoice; // Used when inside gas station
	int behindStationChoice; // Used when behind gas station
	int computerChoice; // used at computer
	int doorComb; // door combination
	int combGuess; // user door combination guess
	int ending = 0;

	// Title and Introduction

	cout << "HEADING HOME" << endl;

	do
	{
		cout << "\nEnter 'E' and press ENTER to continue: ";
		cin >> start;
		cin.ignore(100, '\n');

		if (start == 'E' || start == 'e')
		{
			system("cls");

			cout << "Welcome to HEADING HOME." << endl << endl;
			cout << "This is a text-based game. There are two (2) main endings, \none (1) true ending, and five (5) ";
			cout << "secret/joke endings." << endl << endl;

			cout << "Before we begin, please enter your birth year." << endl;
			cout << "This data is only used once in the program and is not recorded." << endl;

			do
			{
				cout << "Birth year: ";
				cin >> birthYear;
				cin.ignore(100, '\n');

				if (!cin)
				{
					cout << "Invalid data. Closing program..." << endl;

					return 1;
				}
				if (birthYear < 1930 || birthYear > 2021)
				{
					cout << "\nInvalid year. Please enter a year between 1930 and 2021." << endl;

				}

			} while (birthYear < 1930 || birthYear > 2021);

			doorComb = birthYear * 2 + 99; // sets door combination
		}
		else
		{
			cout << "Invalid character.";
			cin.clear();
		}
	} while (start != 'E' && start != 'e');

	system("cls");

	// Starting the game
	do
	{
		do
		{
			cout << "You are finally heading home. It has been so long. You are driving through the desert " << endl;
			cout << "down Highway 49. You notice you have a flat tire and you're low on gas, so you pull " << endl;
			cout << "over at a nearby gas station. It looks abandonded. " << endl << endl;
			cout << "Type 1 to look around the car, 2 to get out of the car, or 3 to stay in car." << endl;
			cout << "Type 4 to exit the game." << endl;
			cout << "What do you do? ";
			cin >> carChoice;
			cin.ignore(100, '\n');

			// Look around car
			if (!cin)
			{
				cout << "Invalid data. Closing program..." << endl;;

				return 1;
			}
			if (carChoice == 1)
			{
				cout << "\nYou look around the car. The radio is getting nothing but static. You see the glove " << endl;
				cout << "box. Something is sticking out of it. You see a newspaper in the passenger's seat. " << endl;
				cout << "It reads 'MAN FOUND DEAD AFTER GRAVE UNEARTHED'." << endl << endl;
				cout << "Type 1 to look in the glove box, 2 to reach for the newspaper, or 3 to get out of the car." << endl;
				cout << "Type 4 to exit the game." << endl;
				cout << "What do you do? ";
				cin >> lookCarChoice;
				cin.ignore(100, '\n');

				do
				{
					// ENDING H
					if (!cin)
					{
						cout << "Invalid data. Closing program..." << endl;;

						return 1;
					}
					if (lookCarChoice == 1)
					{
						cout << "\nYou look in the glove box. You see instruction on how to fix a flat tire. It says you " << endl;
						cout << "need a tire and some tools. It lacks information on what tools you need and what the type of tire." << endl;
						cout << "The insufficiency of these instruction infurate you so much that you get out of you car and start " << endl;
						cout << "screaming. This attracts a large bird to you. The bird nests in your hair and starts pecking your head." << endl << endl;

						cout << "ENDING H: INADEQUATE (H)ELP" << endl << endl;

						ending = 8; // ENDING H
						break; //
					}
					// Pick up newspaper / Ending F
					else if (lookCarChoice == 2)
					{
						cout << "\nYou reach for the newspaper. Unfortuantely, you get a severe paper cut, and have no " << endl;
						cout << "way to bandage it, so you collapse from blood loss, and soon after, you die." << endl << endl;

						cout << "ENDING F: UN(F)ORTUNATE GRIP" << endl << endl; // Ending F

						ending = 6;
						break; // Send to Play Again loop
					}
					// Get out of car after looking around car
					else if (lookCarChoice == 3)
					{
						cout << "\nYou get out of the car. You see the abandoned gas station. It is errie looking." << endl;
						cout << "It clearly has not been in use for some time. You notice something behind the gas station." << endl;
						cout << "Type 1 to go to the gas station entrance or 2 to go behind the gas station." << endl;
						cout << "Type 4 to exit the game." << endl;
						cout << "What do you do? ";
						cin >> outsideCarChoice;

						do
						{
							if (!cin)
							{
								cout << "Invalid data. Closing program..." << endl;;

								return 1;
							}
							if (outsideCarChoice == 1)
							{
								cout << "\nYou walk to the entrance. The doorway is decayed and shows heavy signs of disuse." << endl;
								cout << "You step forward and open the door. The abandoned cash register lays on the ground." << endl;
								cout << "The walls are peeling and flooring creaks and groans heavily." << endl;
								cout << "There is a door to your left and a door straight ahead." << endl;
								cout << "Type 1 to use the door on your left or type 2 to use the door in front of you." << endl;
								cout << "Type 4 to exit the game." << endl;
								cout << "What do you do? ";
								cin >> insideStationChoice;

								do
								{
									if (!cin)
									{
										cout << "Invalid input";

										return 1;
									}
									if (insideStationChoice == 1)
									{
										cout << "\nYou walk to the door to your left. You turn the doorknob and walk in." << endl;
										cout << "You see an unexpected sight. There is a relatively new computer sitting." << endl;
										cout << "on a desk. You walk over to the computer. It is already on." << endl;
										cout << "Type 1 to use the computer or  type 2 to run out of the gas station." << endl;
										cout << "Type 4 to exit the game." << endl;
										cout << "What do you do? ";
										cin >> computerChoice;

										do
										{
											if (!cin)
											{
												cout << "Invalid data. Closing program..." << endl;;

												return 1;
											}
											// ENDING D
											if (computerChoice == 1)
											{
												cout << "\nYou sit at the computer. You look at the screen. The screen reads: " << endl;
												cout << "HEADING HOME" << endl;
												cout << "Welcome to HEADING HOME. HEADING HOME HEADING HOME HEADING HOME " << endl;
												cout << "HEA DING HO ME. HE AD IN G H O M E. " << doorComb << endl << endl;

												cout << "ENDING D: ERROR CO(D)E 306: MEMORY LEAK" << endl << endl;

												cout << "(Hint: Try the using the four digit number in a combination.)" << endl << endl;

												ending = 4; // ENDING D
												break; // Sends to Play Again Loop
											}
											// Run out of gas station // Ending G
											else if (computerChoice == 2)
											{
												cout << "\nYou run out of the gas station and out into the desert completely forgetting about " << endl;
												cout << "your car. You keep running until you get too tired to run anymore. You then realize " << endl;
												cout << "how stupid your decision was to just run blindly out into the desert." << endl;
												cout << "You can no longer see the gas station or your car." << endl << endl;

												cout << "ENDING G: NE(G)LECTED REASONING" << endl << endl;

												ending = 7; // ENDING G
												break; // Sends to Play Again Loop
											}
											else if (computerChoice == 4)
											{
												return 1;
											}
											else
											{
												cout << "Invalid input.";
												cin.clear();
											}
										} while (computerChoice != 1 && computerChoice != 2 && computerChoice != 4);
									}
									else if (insideStationChoice == 2)
									{
										cout << "\nYou walk to the door in front of you. It has a 4 digit combination lock on it." << endl;

										i = 0;

										while (i < 3)
										{

											cout << "You must enter the combination to unlock it." << endl;
											cout << "Enter a 4 digit guess for the combination: ";
											cin >> combGuess;

											// True ENDING / ENDING C
											if (combGuess == doorComb)
											{
												cout << "\nThe lock clicks open. You push the door open and go inside..." << endl;
												cout << "You wake up. You are in your car. You are breathing heavy. Was " << endl;
												cout << "that a nightmare? You get out of the car. There was the gas station. " << endl;
												cout << "You rush inside and see the door is open. You walk forward towards the door." << endl;
												cout << "Your head starts throbbing and feel very light headed..." << endl;

												cout << "Press 'E' to continue: ";
												cin >> cont;
												system("cls");

												cout << "You walk up. You are in your car again. You look out. There was the gas station again." << endl << endl;

												cout << "ENDING C: CIRCULAR REPLI(C)ATION" << endl << endl;

												ending = 3; // Ending C
												break; // Sends to True Ending / Close Game
											}
											else if (combGuess < 100)
											{
												cout << "\nYour input does not have enough digits." << endl;
												cout << "Please enter a 4 digit number." << endl << endl;
											}
											else if (combGuess > 10000)
											{
												cout << "\nYour input has too many digits." << endl;
												cout << "Please enter a 4 digit number." << endl << endl;
											}
											else
											{
												cout << "Invalid combination." << endl << endl;

												i++;
											}
										}
										//ENDING B
										if (i == 3)
										{
											cout << "\nYou failed to get the combination. In frustration, you start jumping up and down." << endl;
											cout << "The decaying floor gives way, and you fall into the basement. During your fall, " << endl;
											cout << "You managed to hit a gas can that had still had gas inside. Your collision with the " << endl;
											cout << "gas can caused it to get knocked over. The fumes from the gasoline managed to " << endl;
											cout << " to be set aflame by heat from the desert sun which caused an explosion." << endl << endl;

											cout << "ENDING B: MATCH(B)OX" << endl << endl;

											ending = 2; // ENDING B
											break; // Sends to Play Again Loop

										}
									}
									else if (insideStationChoice == 4)
									{
										return 1;
									}
									else
									{
										cout << "Invalid input.";
										cin.clear();
									}
								} while (insideStationChoice != 1 && insideStationChoice != 2 && insideStationChoice != 4);
							}
							else if (outsideCarChoice == 2)
							{
								cout << "\nYou walk around to the back of the gas station. You see a slightly open door." << endl;
								cout << "Type 1 to go through the door." << endl;
								cout << "Type 4 to exit the game." << endl;
								cout << "What do you do? ";
								cin >> behindStationChoice;

								do
								{
									if (!cin)
									{
										cout << "Invalid data. Closing program..." << endl;;

										return 1;
									}
									if (behindStationChoice == 1)
									{
										cout << "\nYou open the door and see a set of stairs. You go down the stairs and see a workshop." << endl;
										cout << "You see a tire and some tools. You also find a gas can. You take them and manage to fix " << endl;
										cout << "the tire on your car and fill your car with the gas. You get in the car and attempt " << endl;
										cout << "to start. The engine starts sputtering and smoking. You get out of the car and start violently " << endl;
										cout << "kicking the side of it. You hurt your foot in the process and fall on the ground." << endl << endl;

										cout << "ENDING A: STR(A)NDED" << endl << endl;

										ending = 1; // ENDING A
										break; // Sends to Play Again Loop
									}
									else if (behindStationChoice == 4)
									{
										return 1;
									}
									else
									{
										cout << "Invalid input.";
										cin.clear();
									}
								} while (behindStationChoice != 1 && behindStationChoice != 2);
							}
							else if (outsideCarChoice == 4)
							{
								return 1;
							}
							else
							{
								cout << "Invalid input.";
								cin.clear();
							}
						} while ((outsideCarChoice != 1 && outsideCarChoice != 2 && outsideCarChoice != 4));
					}
					// Exit game
					else if (lookCarChoice == 4)
					{
						return 1;
					}
					else
					{
						cout << "Invalid input.";
						cin.clear();
					}
				} while (lookCarChoice != 1 && lookCarChoice != 2 && lookCarChoice != 3 && lookCarChoice != 4);
			}
			// Get out of car
			else if (carChoice == 2)
			{
				cout << "\nYou get out of the car. You see the abandoned gas station. It is errie looking." << endl;
				cout << "It clearly has not been in use for some time. You notice something behind the gas station." << endl;
				cout << "Type 1 to go to the gas station entrance or 2 to go behind the gas station." << endl;
				cout << "Type 4 to exit the game." << endl;
				cout << "What do you do? ";
				cin >> outsideCarChoice;

				do
				{
					if (!cin)
					{
						cout << "Invalid data. Closing program..." << endl;;

						return 1;
					}
					if (outsideCarChoice == 1)
					{
						cout << "\nYou walk to the entrance. The doorway is decayed and shows heavy signs of disuse." << endl;
						cout << "You step forward and open the door. The abandoned cash register lays on the ground." << endl;
						cout << "The walls are peeling and flooring creaks and groans heavily." << endl;
						cout << "There is door to your left and a door straight ahead." << endl;
						cout << "Type 1 to use the door on your left or type 2 to use the door in front of you." << endl;
						cout << "Type 4 to exit the game." << endl;
						cout << "What do you do? ";
						cin >> insideStationChoice;

						do
						{
							if (insideStationChoice == 1)
							{
								cout << "\nYou walk to the door to your left. You turn the doorknob and walk in." << endl;
								cout << "You see an unexpected sight. There is a relatively new computer sitting." << endl;
								cout << "on a desk. You walk over to the computer. It is already on." << endl;
								cout << "Type 1 to use the computer or type 2 to run out of the gas station." << endl;
								cout << "Type 4 to exit the game." << endl;
								cout << "What do you do? ";
								cin >> computerChoice;

								do
								{
									if (!cin)
									{
										cout << "Invalid data. Closing program..." << endl;;

										return 1;
									}
									// ENDING D
									if (computerChoice == 1)
									{
										cout << "\nYou sit at the computer. You look at the screen. The screen reads: " << endl;
										cout << "HEADING HOME" << endl;
										cout << "Welcome to HEADING HOME. HEADING HOME HEADING HOME HEADING HOME " << endl;
										cout << "HEA DING HO ME. HE AD IN G H O M E. " << doorComb << endl << endl;

										cout << "ERROR CO(D)E 306: MEMORY LEAK" << endl << endl;

										cout << "(Hint: Try the using the four digit number in a combination.)" << endl << endl;

										ending = 4; // ENDING D
										break; // Sends to Play Again Loop
									}
									// Run out of gas station // Ending G
									else if (computerChoice == 2)
									{
										cout << "\nYou run out of the gas station and out into the desert completely forgetting about " << endl;
										cout << "your car. You keep running until you get too tired to run anymore. You then realize " << endl;
										cout << "how stupid your decision was to just run blindly out into the desert." << endl;
										cout << "You can no longer see the gas station or your car." << endl << endl;

										cout << "ENDING G: NE(G)LECTED REASONING" << endl << endl;

										ending = 7; // ENDING G
										break; // Sends to Play Again Loop
									}
									else if (computerChoice == 4)
									{
										return 1;
									}
									else
									{
										cout << "Invalid input.";
										cin.clear();
									}
								} while (computerChoice != 1 && computerChoice != 2 && computerChoice != 4);
							}
							else if (insideStationChoice == 2)
							{
								cout << "\nYou walk to the door in front of you. It has a 4 digit combination lock on it." << endl;

								i = 0;

								while (i < 3)
								{
									cout << "You must enter the combination to unlock it." << endl;
									cout << "Enter a 4 digit guess for the combination: ";
									cin >> combGuess;

									if (!cin)
									{
										cout << "Invalid data. Closing program..." << endl;;

										return 1;
									}
									// True ENDING / ENDING C
									if (combGuess == doorComb)
									{
										cout << "\nThe lock clicks open. You push the door open and go inside..." << endl;
										cout << "You wake up. You are in your car. You are breathing heavy. Was " << endl;
										cout << "that a nightmare? You get out of the car. There was the gas station. " << endl;
										cout << "You rush inside and see the door is open. You walk forward towards the door." << endl;
										cout << "Your head starts throbbing and feel very light headed..." << endl;

										cout << "Press 'E' to continue: ";
										cin >> cont;
										system("cls");

										cout << "You walk up. You are in your car again. You look out. There was the gas station again." << endl << endl;

										cout << "ENDING C: CIRCULAR REPLI(C)ATION" << endl << endl;

										ending = 3; // Ending C
										break; // Sends to True Ending / Close Game
									}
									else if (combGuess < 100)
									{
										cout << "\nYour input does not have enough digits." << endl;
										cout << "Please enter a 4 digit number." << endl << endl;
									}
									else if (combGuess > 10000)
									{
										cout << "\nYour input has too many digits." << endl;
										cout << "Please enter a 4 digit number." << endl << endl;
									}
									else
									{
										cout << "Invalid combination." << endl << endl;

										i++;
									}
								}
								// ENDING B
								if (i == 3)
								{
									cout << "\nYou failed to get the combination. In frustration, you start jumping up and down." << endl;
									cout << "The decaying floor gives way, and you fall into the basement. During your fall, " << endl;
									cout << "You managed to hit a gas can that had still had gas inside. Your collision with the " << endl;
									cout << "gas can caused it to get knocked over. The fumes from the gasoline managed to " << endl;
									cout << " to be set aflame by heat of the desert sun which caused an explosion." << endl << endl;

									cout << "ENDING B: MATCH(B)OX" << endl << endl;

									ending = 2; // ENDING B
									break; // Sends to Play Again Loop
								}
							}
							else if (insideStationChoice == 4)
							{
								return 1;
							}
							else
							{
								cout << "Invalid input.";
								cin.clear();
							}
						} while (insideStationChoice != 1 && insideStationChoice != 2 && insideStationChoice != 4);

					}
					else if (outsideCarChoice == 2)
					{
						cout << "\nYou walk around to the back of the gas station. You see a slightly open door." << endl;
						cout << "Type 1 to go through the door." << endl;
						cout << "Type 4 to exit the game." << endl;
						cout << "What do you do? ";
						cin >> behindStationChoice;

						do
						{
							if (!cin)
							{
								cout << "Invalid data. Closing program..." << endl;;

								return 1;
							}
							if (behindStationChoice == 1)
							{
								cout << "\nYou open the door and see a set of stairs. You go down the stairs and see a workshop." << endl;
								cout << "You see a tire and some tools. You also find a gas can. You take them and manage to fix " << endl;
								cout << "the tire on your car and fill your car with the gas. You get in the car and attempt " << endl;
								cout << "to start it. The engine starts sputtering and smoking. You get out of the car and start violently " << endl;
								cout << "kicking the side of it. You hurt your foot in the process and fall on the ground." << endl << endl;

								cout << "ENDING A: STR(A)NDED" << endl << endl;

								ending = 1; // ENDING A
								break; // Sends to Play Again Loop
							}
							else if (behindStationChoice == 4)
							{
								return 1;
							}
							else
							{
								cout << "Invalid input.";
								cin.clear();
							}
						} while (behindStationChoice != 1 && behindStationChoice != 2);
					}
					// Exit game
					else if (outsideCarChoice == 4)
					{
						return 1;
					}
					else
					{
						cout << "Invalid input.";
						cin.clear();
					}

				} while ((outsideCarChoice != 1 && outsideCarChoice != 2 && outsideCarChoice != 4));
			}
			// Stay in car / Ending E
			else if (carChoice == 3)
			{
				cout << "\nYou decided to stay in the car." << endl;
				cout << "You sit in the car, waiting for someone to come and help you." << endl;
				cout << "But no one does. You simply wither away into nothing." << endl << endl;

				cout << "ENDING E: WITH(E)RING HOPE" << endl << endl;
				ending = 5; // Ending E
				break; // Send to Play Again loop
			}
			// Exit game
			else if (carChoice == 4)
			{
				cout << endl;

				return 1;
			}
			else
			{
				cout << "Invalid input" << endl;
			}
		} while (carChoice != 1 && carChoice != 2 && carChoice != 3 && carChoice != 4);

		// Shows if true ending is reached
		if (ending == 3)
		{
			cout << "You have reached the true ending of HEADING HOME. " << endl << endl;
			cout << "Code: 03140941 | Try using this code in a future game." << endl;
			cout << "Thank you for playing." << endl;
			cout << "The game will now close." << endl;

			playAgain = 'N';

			return 0;
		}
		// Shows if true ending is not reached
		else
		{
			cout << "Thank you for playing HEADING HOME." << endl;

			cout << "Would you like to play again? \nType 'Y' for yes and any other key for no: ";
			cin >> playAgain;
			cin.ignore(100, '\n');
			cout << endl;

			system("cls");
		}
	} while (playAgain == 'Y' || playAgain == 'y');

	return 0;
}