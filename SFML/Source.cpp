#include<iostream>
#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>
#include<windows.h>
#include <ctime>
#include <filesystem>
using namespace std;
void displayLineFor5Seconds(const string& line) {
	cout << line << endl;
	this_thread::sleep_for(chrono::seconds(5));
}
void displayLineFor2Seconds(const string& line) {
	cout << line << endl;
	this_thread::sleep_for(chrono::seconds(2));
}
void Bill_Generator(int total_price, int cake_array[], int decor_array[], int dinner[], int  cake_selection, int decor_selection, int  dinner_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Cake Price: Rs " << cake_array[cake_selection];
	cout << "\nDecor Price: Rs " << decor_array[decor_selection];
	cout << "\nDinner Price: Rs " << dinner[dinner_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total_price << " \n\n";
}
void Bill_Generator1(int total, int ent[], int flo[], int dinner[], int stag[], int  stage_selection, int entrance_selection, int  flower_selection, int dinner_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Flowers Price: Rs " << flo[flower_selection];
	cout << "\nStage decor Price: Rs " << stag[stage_selection];
	cout << "\nDinner Price: Rs " << dinner[dinner_selection];
	cout << "\nEntrance decor Price: Rs " << ent[entrance_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total << " \n\n";
}
void Bill_Generator2(int total_1, int the[], int dance_stage[], int flo[], int flo_jew[], int dand_st[], int meh_pl[], int dinner[], int the_selection, int ds_selection, int  flower_selection, int fj_selection, int das_selection, int mp_selection, int dinner_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Decor Price: Rs " << the[the_selection];
	cout << "\nDance Stage decor Price: Rs " << dance_stage[ds_selection];
	cout << "\nFlowers Price: Rs " << flo[flower_selection];
	cout << "\nFlowers Jewellery Price: Rs " << flo_jew[fj_selection];
	cout << "\nDandiya Sticks Price: Rs " << dand_st[das_selection];
	cout << "\nMehandi Plates Price: Rs " << meh_pl[mp_selection];
	cout << "\nDinner Price: Rs " << dinner[dinner_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total_1 << " \n\n";
}
void Bill_Generator3(int total_2, int the[], int dance_stage[], int flo[], int flo_jew[], int dand_st[], int dho[], int sn[], int sw[], int be[], int mac[], int the_selection, int ds_selection, int  flower_selection, int fj_selection, int das_selection, int dho_selection, int sn_selection, int sw_selection, int be_selection, int mac_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Decor Price: Rs " << the[the_selection];
	cout << "\nDance Stage decor Price: Rs " << dance_stage[ds_selection];
	cout << "\nFlowers Price: Rs " << flo[flower_selection];
	cout << "\nFlowers Jewellery Price: Rs " << flo_jew[fj_selection];
	cout << "\nDandiya Sticks Price: Rs " << dand_st[das_selection];
	cout << "\nDhol Price: Rs " << dho[dho_selection];
	cout << "\nSnacks Price: Rs " << sn[sn_selection];
	cout << "\nSweets Price: Rs " << sw[sw_selection];
	cout << "\nBeverages Price: Rs " << be[be_selection];
	cout << "\nMain Course Price: Rs " << mac[mac_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total_2 << " \n\n";
}
void Bill_Generator4(int total_4, int ballooon[], int ballooon_selection, int flow[], int flo_selection, int cand[], int cand_selection, int sp[], int sp_selection, int din[], int din_selection, int ck[], int ck_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Balloon Price: Rs " << ballooon[ballooon_selection];
	cout << "\nFlower Price: Rs " << flow[flo_selection];
	cout << "\nCandles Price: Rs " << cand[cand_selection];
	cout << "\nSpecial offer Price: Rs " << sp[sp_selection];
	cout << "\nDinner Price: Rs " << din[din_selection];
	cout << "\nCake Price: Rs " << ck[ck_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total_4 << " \n\n";
}
void Bill_Generator5(int total_5, int entry[], int entry_selection, int mosic[], int mosic_selection, int lght[], int lght_selection, int specials[], int specials_selection, int dinners[], int dinners_selection, int sweeto[], int sweeto_selection)
{
	cout << endl << "------------Your Bill------------";
	cout << "\n Selected Items: \n";
	cout << "Entry Price: Rs " << entry[entry_selection];
	cout << "\nMusic Price: Rs " << mosic[mosic_selection];
	cout << "\nLight Price: Rs " << lght[lght_selection];
	cout << "\nSpecial offer Price: Rs " << specials[specials_selection];
	cout << "\nDinner Price: Rs " << dinners[dinners_selection];
	cout << "\nSweets Price: Rs " << sweeto[sweeto_selection];
	cout << "\n-------------------------------------";
	cout << "\nTotal bill: Rs. " << total_5 << " \n\n";
}

int main() {
	sf::RenderWindow window(sf::VideoMode(1500, 2000), "SFML PNG Image");

	// Load the PNG image
	sf::Texture texture;
	if (!texture.loadFromFile("11111.png"))
	{
		// Handle loading error
		return -1;
	}

	// Create a sprite and set its texture
	sf::Sprite sprite;
	sprite.setTexture(texture);

	// Main loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear the window
		window.clear();

		// Draw the sprite
		window.draw(sprite);

		// Display the content
		window.display();
	}



	system("color 57");
	cout << endl << endl << endl << endl << endl;
	string line1 = "                              WELCOME TO EVENTIFY*";
	displayLineFor5Seconds(line1);

	string line2 = "                                          (:we serve what you deserve:)";
	displayLineFor2Seconds(line2);
	cout << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                                                            Contact Us 051-9260227" << endl;
	cout << "                                                                            Email[] eventify@gmail.com" << endl;
	cout << endl << endl << " Events create opportunities for people to connect with an area, spend time together,celebrate and";
	cout << endl << "experience the diversity of cultures and foster creativity and innovation.They allow a community to come";
	cout << endl << "alive and provide an opportunity for a destination to showcase its tourism experience  and increase economic";
	cout << endl << "activity.Events contribute significantly to community building, lifestyle and leisure enhancement, cultural";
	cout << endl << "development, tourism promotion and increased visitation,volunteer participation, fundraising and economic ";
	cout << endl << "development.Most importantly,events create a sense of fun and vibrancy, resulting in a strong sense of fun";
	cout << endl << "and vibrancy, resulting in a strong sense of community connectivity, pride and a sense of place.";
	int total = 0;
	int cake_array[12] = { 4000,3000,2000,1500,4000,3000,2000,1500,4000,3000,2000,1500 };
	int decor_array[8] = { 15000,25000,40000,50000,4000,3000,2000,15000 };
	int dinner[4] = { 2600,2500,2000,2800, };
	int cake_selection = 0;
	int decor_selection = 0;
	int dinner_selection = 0;
	int total_price = 0;
	int flo[11] = { 2600,2500,2000,2800,200,300,400,500,600,1000,500 };
	int ent[3] = { 2600,2500,2000 };
	int stag[3] = { 2600,2500,2000 };
	int flower_selection = 0;
	int entrance_selection = 0;
	int stage_selection = 0;
	int total_1 = 0;
	int the[10] = { 400000,500000,300000,400000,300000,450000,350000,400000,550000,600000 };
	int dance_stage[9] = { 100000,150000,50000,75000,85000,90000,45000,55000,20000 };
	int flo_jew[1] = { 5000 };
	int dand_st[1] = { 2000 };
	int meh_pl[10] = { 10000,15000,14000,9000,8000,85000,13000,12000,14000,7000 };
	int the_selection = 0;
	int ds_selection = 0;
	int fj_selection = 0;
	int das_selection = 0;
	int mp_selection = 0;
	int total_2 = 0;
	int dho[1] = { 5000 };
	int sn[7] = { 50,200,400,400,200,200,250 };
	int sw[6] = { 200,300,400,300,200,300 };
	int be[10] = { 200,200,200,200,200,200,100,300,100,100 };
	int mac[7] = { 300,300,500,300,900,900,300 };
	int dho_selection = 0;
	int sn_selection = 0;
	int sw_selection = 0;
	int be_selection = 0;
	int mac_selection = 0;
	int total_4 = 0;
	int ballooon[5] = { 1500,1500,1500,1500,1500 };
	int flow[4] = { 2000,2000,2000,2000 };
	int cand[4] = { 500,500,500,500 };
	int sp[3] = { 1500,2000,2500 };
	int din[7] = { 10000,10000,10000,10000,10000,10000,10000 };
	int ck[1] = { 8000 };
	int ballooon_selection = 0;
	int flo_selection = 0;
	int cand_selection = 0;
	int sp_selection = 0;
	int din_selection = 0;
	int ck_selection = 0;
	int total_5 = 0;
	int entry[5] = { 80000,75000,80000,70000,75000 };
	int mosic[2] = { 10000,15000 };
	int lght[2] = { 15000,15000 };
	int specials[5] = { 80000,80000,80000,80000,80000 };
	int dinners[15] = { 8000,8000,8000,8000,8000,8000,8000,8000,8000,8000,8000,8000,8000,8000,8000 };
	int sweeto[5] = { 8000,8000,8000,8000,8000 };
	int entry_selection = 0;
	int mosic_selection = 0;
	int lght_selection = 0;
	int specials_selection = 0;
	int dinners_selection = 0;
	int sweeto_selection = 0;
	int choice;
	cout << endl << endl << endl << "Press 1 for WEDDING" << endl;
	cout << "Press 3 for BIRTHDAY" << endl;
	cin >> choice;
#ifdef _WIN32
	system("cls"); // For Windows
#else
	system("clear"); // For Unix-like systems
#endif
	system("color 37");
	switch (choice) {
	case 1:cout << "WEDDING"; break;
	case 3:cout << "BIRTHDAY" << endl;
#ifdef _WIN32
		system("cls"); // For Windows
#else
		system("clear"); // For Unix-like systems
#endif
		system("color 17");
		char gender;
		cout << "      * WELCOME TO BIRTHDAY EVENT MANAGEMENT COMPANY*" << endl;
		cout << "A birthday marks another year of life." << endl;
		cout << "Celebrating it each year will convey to the child the concept of growth, age and time." << endl;
		cout << "This learning along with a unique and positive experience shows that growth is something to be celebrated." << endl;
		cout << "Enter gender (Press F for female and M for male)" << endl;
		cin >> gender;
		cout << endl;
		if (gender == 'M' || gender == 'm') {
			cout << "Which flavour of cake do you want? " << endl;
			cout << "Press 1 for Chocolate" << endl;
			cout << "Press 2 for Icecream " << endl;
			cout << "Press 3 for Vanilla" << endl;
			cout << "Press 4 for Dry fruit cake" << endl;
			cout << "press 5 for Chocolate celebration cake" << endl;
			cout << "press 6 for Chocolate fudge cake" << endl;
			cout << "press 7 for Black velvet cake" << endl;
			cout << "press 8 for Oreo cake" << endl;
			cout << "press 9 for Banoffee birthday cake" << endl;
			cout << "press 10 for Biscoff cake" << endl;
			cout << "press 11 for Ferrero Rocher cake" << endl;
			cout << "press 12 for Red velvet cake" << endl;
			int cake;
			cin >> cake;
			switch (cake) {
			case 1: {cout << "Chocolate cake ";
				total_price += cake_array[0];
				cake_selection = 0; break; }
			case 2: {cout << "Icecream cake ";
				total_price += cake_array[1];
				cake_selection = 1; break; }
			case 3: {cout << "Vanilla cake ";
				total_price += cake_array[2];
				cake_selection = 2; break; }
			case 4: {cout << "Dryfruit cake ";
				total_price += cake_array[3];
				cake_selection = 3; break; }
			case 5: {cout << "Chocolate celebration cake";
				total_price += cake_array[4];
				cake_selection = 4; break; }
			case 6: {cout << "Chocolate fudge cake";
				total_price += cake_array[5];
				cake_selection = 4; break;
			}
			case 7: {cout << "Black velvet cake";
				total_price += cake_array[6];
				cake_selection = 4; break;
			}
			case 8: {cout << "Oreo cake";
				total_price += cake_array[7];
				cake_selection = 4; break;
			}
			case 9: {cout << "Banoffee birthday cake";
				total_price += cake_array[8];
				cake_selection = 4; break;
			}
			case 10: {cout << "Biscoff cake";
				total_price += cake_array[9];
				cake_selection = 4; break; }
			case 11: {cout << "Ferrero Rocher cake";
				total_price += cake_array[10];
				cake_selection = 4; break; }
			case 12: {cout << "Red velvet cake.";
				total_price += cake_array[11];
				cake_selection = 4; break; }

			}
			cout << endl;
			cout << "Which type of decor do you want " << endl;
			cout << "Press 1 for Simple decor" << endl;
			cout << "Press 2 for Cartoonish background " << endl;
			cout << "Press 3 for Car background decor" << endl;
			cout << "Press 4 for Colourful lights decor " << endl;
			cout << "Press 5 for banners(those banners will be customize according to your choice)" << endl;
			cout << "Press 6 for baloons(those baloon will be colourful or of your choice)" << endl;
			cout << "Press 7 for helium baloon " << endl;
			cout << "Press 8 for Alphabet Foil Balloons. One of the another necessary decoration items names are Foil Balloons " << endl;
			int decor;
			cin >> decor;
			switch (decor) {
			case 1: {cout << "Simple decor ";
				total_price += decor_array[0];
				decor_selection = 0;
				break; }
			case 2: {cout << "Cartonish decor ";
				total_price += decor_array[1];
				decor_selection = 1;
				break; }
			case 3: {cout << "Car background decor ";
				total_price += decor_array[2];
				decor_selection = 2;
				break;
			}
			case 4: {cout << "Colourful lights decor ";
				total_price += decor_array[3];
				decor_selection = 3;
				break;
			}
			case 5: {cout << "banners(those banners will be customize according to your choice)";
				total_price += decor_array[4];
				decor_selection = 4;
				break; }
			case 6: {cout << "baloons(those baloon will be colourful or of your choice)";
				total_price += decor_array[5];
				decor_selection = 5;
				break; }
			case 7: {cout << "helium baloon  ";
				total_price += decor_array[6];
				decor_selection = 6;
				break; }
			case 8: {cout << "Alphabet Foil Balloons. One of the another necessary decoration items names are Foil Balloons ";
				total_price += decor_array[7];
				decor_selection = 7;
				break; }
			}
			cout << endl;
			cout << "Do you want us to arrange dinner or not?" << endl;
			char choice;
			cin >> choice;

			if (choice == 'n' || choice == 'N') {
				Bill_Generator(total_price, cake_array, decor_array, dinner, cake_selection, decor_selection, dinner_selection);
				exit(0);
			}
			else {
				cout << "Which one of the deal do you want " << endl << endl;;
				cout << "Press 1 for WINTER SPECIAL DEALS    RS 2600/-" << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) CHICKEN CORN SOUP" << endl;
				cout << "2) WILD BEEF STEAK" << endl;
				cout << "3) FISH & CHIPS" << endl;
				cout << "4) TEMPURA PRAWN" << endl;
				cout << "5) MAC N CHEESE PASTA" << endl;
				cout << "6) FISH CHILLI DRY" << endl;
				cout << "7) CHICKEN & VEGETABLE CHOW MEIN" << endl;
				cout << "8) MINT MARGARITA" << endl << endl;
				cout << "Press 2 for ITALIAN PLATTER 1       RS 2500/- " << endl << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) CHEF SP BEEF STEAK" << endl;
				cout << "2) MOROCCAN CHICKEN" << endl;
				cout << "3) FISH & FRIES" << endl;
				cout << "4) PENNE ALL ARRABIATA PASTA" << endl;
				cout << "5) MASHED POTATO" << endl;
				cout << "6) TARTAR SAUCE" << endl;
				cout << "7) SAUTEED VEGETABLES" << endl;
				cout << "8)  FRESH LEMONADE" << endl << endl;
				cout << "Press 3 for ITALIAN PLATTER 2      RS 2000/-" << endl << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) ALFREDO PASTA" << endl;
				cout << "2) MEXICAN STEAK" << endl;
				cout << "3) TARRAGON CHICKEN" << endl;
				cout << "4) HONEY MUSTARD WINGS" << endl;
				cout << "5) FRESH LEMONADE" << endl;
				cout << "Press 4 for CHINESE PLATTER       RS 2000/-" << endl;
				cout << "1) SZECHUAN CHICKEN" << endl;
				cout << "2) VEGETABLE CHOW MEIN" << endl;
				cout << "3) CHICKEN CHILLI DRY" << endl;
				cout << "4) VEGETABLE FRIED RICE" << endl;
				cout << "5) FRESH LEMONADE" << endl << endl;
				int din;
				cin >> din;
				switch (din) {
				case 1: {cout << "WINTER SPECIAL DEALS will be served " << endl;
					total_price += dinner[0];
					dinner_selection = 0;
					break;
				}
				case 2: {cout << "ITALIAN PLATTER 1 will be served " << endl;
					total_price += dinner[1];
					dinner_selection = 1;
					break;
				}
				case 3: {cout << "ITALIAN PLATTER 2 will be served " << endl;
					total_price += dinner[2];
					dinner_selection = 2;
					break;
				}
				case 4: {cout << "CHINESE PLATTER will be served " << endl;
					total_price += dinner[3];
					dinner_selection = 3;
					break;
				}
				}

			}
			cout << endl << endl;
			Bill_Generator(total_price, cake_array, decor_array, dinner, cake_selection, decor_selection, dinner_selection);
			cout << endl;
			cout << "Thanks for making us a part of your happiness." << endl;
		}

		else if (gender == 'F' || gender == 'f') {
			cout << "Which flavour of cake do you want " << endl;
			cout << "Press 1 for Chocolate" << endl;
			cout << "Press 2 for Icecream " << endl;
			cout << "Press 3 for Vanilla" << endl;
			cout << "Press 4 for Dry fruit cake" << endl;
			cout << "press 5 for Chocolate celebration cake" << endl;
			cout << "press 6 for Chocolate fudge cake" << endl;
			cout << "press 7 for Black velvet cake" << endl;
			cout << "press 8 for Oreo cake" << endl;
			cout << "press 9 for Banoffee birthday cake" << endl;
			cout << "press 10 for Biscoff cake" << endl;
			cout << "press 11 for Ferrero Rocher cake" << endl;
			cout << "press 12 for Red velvet cake" << endl;

			int cake1;
			cin >> cake1;
			switch (cake1) {
			case 1: {cout << "Chocolate cake ";
				total_price += cake_array[0];
				cake_selection = 0; break;
			}
			case 2: {cout << "Icecream cake ";
				total_price += cake_array[1];
				cake_selection = 0; break;
			}
			case 3: {cout << "Vanilla cake ";
				total_price += cake_array[2];
				cake_selection = 0; break;
			}
			case 4: {cout << "Dryfruit cake ";
				total_price += cake_array[3];
				cake_selection = 0; break;
			}
			case 5: {cout << "Chocolate celebration cake";
				total_price += cake_array[4];
				cake_selection = 0; break;
			}
			case 6: {cout << "Chocolate fudge cake";
				total_price += cake_array[5];
				cake_selection = 0; break;
			}
			case 7: {cout << "Black velvet cake";
				total_price += cake_array[6];
				cake_selection = 0; break;
			}
			case 8: {cout << "Oreo cake";
				total_price += cake_array[7];
				cake_selection = 0; break;
			}
			case 9: {cout << "Banoffee birthday cake";
				total_price += cake_array[8];
				cake_selection = 0; break;
			}
			case 10: {cout << "Biscoff cake";
				total_price += cake_array[9];
				cake_selection = 0; break;
			}
			case 11: {cout << "Ferrero Rocher cake";
				total_price += cake_array[10];
				cake_selection = 0; break;
			}
			case 12: {cout << "Red velvet cake.";
				total_price += cake_array[11];
				cake_selection = 0; break;
			}
			}
			cout << endl;
			cout << endl;
			cout << "Which type of decor do you want " << endl;
			cout << "Press 1 for Simple decor" << endl;
			cout << "Press 2 for Cartoonish background " << endl;
			cout << "Press 3 for Car background decor" << endl;
			cout << "Press 4 for Colourful lights decor " << endl;
			cout << "Press 5 for banners(those banners will be customize according to your choice)" << endl;
			cout << "Press 6 for baloons(those baloon will be colourful or of your choice)" << endl;
			cout << "Press 7 for helium baloon " << endl;
			cout << "Press 8 for Alphabet Foil Balloons. One of the another necessary decoration items names are Foil Balloons " << endl;
			int deco;
			cin >> deco;
			switch (deco) {
			case 1: {cout << "Simple decor ";
				total_price += decor_array[0];
				decor_selection = 0;
				break; }
			case 2: {cout << "Cartonish decor ";
				total_price += decor_array[1];
				decor_selection = 1;
				break; }
			case 3: {cout << "Car background decor ";
				total_price += decor_array[2];
				decor_selection = 2;
				break; }
			case 4: {cout << "Colourful lights decor ";
				total_price += decor_array[3];
				decor_selection = 3;
				break; }
			case 5: {cout << "banners(those banners will be customize according to your choice)";
				total_price += decor_array[4];
				decor_selection = 4;
				break; }
			case 6: {cout << "baloons(those baloon will be colourful or of your choice)";
				total_price += decor_array[5];
				decor_selection = 5;
				break; }
			case 7: {cout << "helium baloon  ";
				total_price += decor_array[6];
				decor_selection = 6;
				break; }
			case 8: {cout << "Alphabet Foil Balloons. One of the another necessary decoration items names are Foil Balloons ";
				total_price += decor_array[7];
				decor_selection = 7;
				break; }
			}
			cout << endl;
			cout << "Do you want us to arrange dinner or not?" << endl;
			char choice1;
			cin >> choice1;

			if (choice1 == 'n' || choice1 == 'N') {
				exit(0);
			}
			else {
				cout << "Which one of the deal do you want " << endl;
				cout << "Press 1 for WINTER SPECIAL DEALS   RS 2600/-" << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) CHICKEN CORN SOUP" << endl;
				cout << "2) WILD BEEF STEAK" << endl;
				cout << "3) FISH & CHIPS" << endl;
				cout << "4) TEMPURA PRAWN" << endl;
				cout << "5) MAC N CHEESE PASTA" << endl;
				cout << "6) FISH CHILLI DRY" << endl;
				cout << "7) CHICKEN & VEGETABLE CHOW MEIN" << endl;
				cout << "8) MINT MARGARITA" << endl << endl;
				cout << "Press 2 for ITALIAN PLATTER 1     RS 2500/-" << endl << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) CHEF SP BEEF STEAK" << endl;
				cout << "2) MOROCCAN CHICKEN" << endl;
				cout << "3) FISH & FRIES" << endl;
				cout << "4) PENNE ALL ARRABIATA PASTA" << endl;
				cout << "5) MASHED POTATO" << endl;
				cout << "6) TARTAR SAUCE" << endl;
				cout << "7) SAUTEED VEGETABLES" << endl;
				cout << "8)  FRESH LEMONADE" << endl << endl;
				cout << "Press 3 for ITALIAN PLATTER 2     RS 2000/-" << endl << endl;
				cout << "it will include following dishes" << endl;
				cout << "1) ALFREDO PASTA" << endl;
				cout << "2) MEXICAN STEAK" << endl;
				cout << "3) TARRAGON CHICKEN" << endl;
				cout << "4) HONEY MUSTARD WINGS" << endl;
				cout << "5) FRESH LEMONADE" << endl;
				cout << "Press 4 for CHINESE PLATTER      RS 2800/-" << endl;
				cout << "1) SZECHUAN CHICKEN" << endl;
				cout << "2) VEGETABLE CHOW MEIN" << endl;
				cout << "3) CHICKEN CHILLI DRY" << endl;
				cout << "4) VEGETABLE FRIED RICE" << endl;
				cout << "5) FRESH LEMONADE" << endl << endl;
				int din5;
				cin >> din5;
				switch (din5) {
				case 1: {cout << "WINTER SPECIAL DEALS will be served " << endl;
					total_price += dinner[0];
					dinner_selection = 0;
					break;
				}
				case 2: {cout << "ITALIAN PLATTER 1 will be served ";
					total_price += dinner[1];
					dinner_selection = 1;
					break;
				}
				case 3: {cout << "ITALIAN PLATTER 2 will be served ";
					total_price += dinner[2];
					dinner_selection = 2;
					break;
				}
				case 4: {cout << "CHINESE PLATTER will be served ";
					total_price += dinner[3];
					dinner_selection = 3;
					break;
				}
				}
			}
			cout << endl << endl;

			Bill_Generator(total_price, cake_array, decor_array, dinner, cake_selection, decor_selection, dinner_selection);
			cout << "Thanks for coming!" << endl;
		}
		break;
	}
	cout << endl;
	int choice2;
	int themes, flower, fp, decor1, decor2, decor3, color, snacks, sweets, beverages, mc;
	char  ds, fj, dhol, location, mp;
	string theme, fc, yc, flowers, colors;
	while (true) {

		system("color 27");
		if (choice == 1) {
			cout << "Press 1 for Mehandi" << endl;
			cout << "Press 2 for Dholki" << endl;
			cout << "Press 3 for Barat" << endl;
			cout << "Press 4 for Walima" << endl;
			cout << "Press 5 for Bridal Shower" << endl;
			cout << "Press 0 to Exit" << endl;
			cin >> choice2;
			if (choice2 == 0) {
				break;
			}
			switch (choice2) {
			case 5: {
				system("color 27");
				cout << "BRIDAL SHOWER" << endl;
				string name;
				cout << endl;
				cout << "          ----------WELCOME TO BRIDAL SHOWER SERVICES----------          " << endl;
				cout << endl << endl << endl;
				cout << "Enter the bride name: " << endl;
				cin >> name;
				cout << endl << endl;
				cout << "          Hey!" << "  " << name << "  " << "Congratulations on becoming a future bride " << endl << endl << endl;
				cout << "The balloons option: " << endl;
				cout << " 1.Pink " << endl;
				cout << " 2.White " << endl;
				cout << " 3.Purple " << endl;
				cout << " 4.Brown " << endl;
				cout << " 5.Gold " << endl;
				int bo;
				cout << " Choose balloons colour (Enter option numbers , Press 0 to finish) " << endl;
				while (true)
				{
					cin >> bo;
					if (bo == 0)
						break;
					if (bo >= 1 && bo <= 5)
					{
						switch (bo)
						{
						case 1:cout << "Pink";
							total_4 += ballooon[0];
							ballooon_selection = 0;
							break;
						case 2:cout << "White";
							total_4 += ballooon[1];
							ballooon_selection = 1;
							break;
						case 3:cout << "Purple";
							total_4 += ballooon[2];
							ballooon_selection = 2;
							break;
						case 4:cout << "Brown";
							total_4 += ballooon[3];
							ballooon_selection = 3;
							break;
						case 5:cout << "Gold";
							total_4 += ballooon[4];
							ballooon_selection = 4;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}
				cout << endl;
				cout << "The flower options: " << endl;
				cout << " 1.Roses " << endl;
				cout << " 2.Lilies " << endl;
				cout << " 3.Orchid " << endl;
				cout << " 4.Carnation " << endl;
				int fo;
				cout << " Choose flowers option (Enter option numbers , Press 0 to finish) " << endl;
				while (true)
				{
					cin >> fo;
					if (fo == 0)
						break;
					if (fo >= 1 && fo <= 4)
					{
						switch (fo)
						{
						case 1:cout << "Roses";
							total_4 += flow[0];
							flo_selection = 0;
							break;
						case 2:cout << "Lilies";
							total_4 += flow[1];
							flo_selection = 1;
							break;
						case 3:cout << "Orchid";
							total_4 += flow[2];
							flo_selection = 2;
							break;
						case 4:cout << "Carnation";
							total_4 += flow[3];
							flo_selection = 3;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}cout << endl;
				cout << "The Candle options are: " << endl;
				cout << " 1.Scented " << endl;
				cout << " 2.Pillar " << endl;
				cout << " 3.Votive " << endl;
				cout << " 4.Tealight " << endl;
				int co;
				cout << " Choose candles options (Enter option numbers , press 0 to finish) " << endl;
				while (true)
				{
					cin >> co;
					if (co == 0)
						break;
					if (co >= 1 && co <= 4)
					{
						switch (co)
						{
						case 1:cout << "Scented";
							total_4 += cand[0];
							cand_selection = 0;
							break;
						case 2:cout << "Pillar";
							total_4 += cand[1];
							cand_selection = 1;
							break;
						case 3:cout << "Votive";
							total_4 += cand[2];
							cand_selection = 2;
							break;
						case 4:cout << "Tealight";
							total_4 += cand[3];
							cand_selection = 3;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}
				cout << endl;
				cout << " Some special options:" << endl;
				cout << " 1.Bridal Shower Picture props " << endl;
				cout << " 2.Pack of (Bride-to-be cake topper, Badge for the Bride, Bride Sash, Bride-to-be banner)" << endl;
				cout << " 3.Table Centerpieces " << endl;
				int ss;
				cout << " Choose options (Enter option numbers , press 0 to finish) " << endl;
				while (true)
				{
					cin >> ss;
					if (ss == 0)
						break;
					if (ss >= 1 && ss <= 3)
					{
						switch (ss)
						{
						case 1:cout << "Bridal Shower Picture props";
							total_4 += sp[0];
							sp_selection = 0;
							break;
						case 2:cout << "Pack of (Bride-to-be cake topper, Badge for the Bride, Bride Sash, Bride-to-be banner)";
							total_4 += sp[1];
							sp_selection = 1;
							break;
						case 3:cout << "Table Centerpieces";
							total_4 += sp[2];
							sp_selection = 2;
							break;

						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}
				cout << endl;
				cout << "Food Options: " << endl;
				cout << " 1.Chocolates " << endl;
				cout << " 2.Cupcakes " << endl;
				cout << " 3.Finger sandwiches" << endl;
				cout << " 4.Pastries" << endl;
				cout << " 5.Pancakes" << endl;
				cout << " 6.Brownies" << endl;
				cout << " 7.Drinks" << endl;
				cout << " 8.Cake" << endl;


				int fd;
				cout << " Choose food options (Enter option numbers , press 0 to finish) " << endl;
				while (true)
				{
					cin >> fd;
					if (fd == 0)
						break;
					if (fd >= 1 && fd <= 7)
					{
						switch (fd)
						{
						case 1:cout << "Chocolates";
							total_4 += din[0];
							din_selection = 0;
							break;
						case 2:cout << "Cupcakes";
							total_4 += din[1];
							din_selection = 1;
							break;
						case 3:cout << "Finger sandwiches";
							total_4 += din[2];
							din_selection = 2;
							break;
						case 4:cout << "Pastries";
							total_4 += din[3];
							din_selection = 3;
							break;
						case 5:cout << "Pancakes";
							total_4 += din[4];
							din_selection = 4;
							break;
						case 6:cout << "Brownies";
							total_4 += din[5];
							din_selection = 5;
							break;
						case 7:cout << "Drinks";
							total_4 += din[6];
							din_selection = 6;
							break;
						case 8:cout << "Cake";
							total_4 += ck[7];
							ck_selection = 7;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}

				}
				cout << endl<<endl<<endl;
			
				 
				Bill_Generator4(total_4, ballooon, ballooon_selection, flow, flo_selection, cand, cand_selection, sp, sp_selection, din, din_selection, ck, ck_selection);
				cout << "          ---------- Order complete! Enjoy your bridal shower!----------          " << endl;
				cout << "                              Thank You!                                                    " << endl;
				cout << "If you want to do another event then choose from the following option." << endl;
				break;
			}
			case 1: {
				system("color 57");
				cout << " MEHNDI ARRANGEMENT " << endl << endl;
				cout << "Henna symbolises positive spirits and good luck. Muslim and Indian Wedding tradition calls for a Mehndi ceremony" << endl;
				cout << "to be held the night before the wedding as a way of wishing the bride good health and prosperity as she makes her" << endl;
				cout << "journey on to marriage." << endl << endl;
				cout << " Press 1 for EXTRAVAGANT MEHNDI SPECIAL theme " << endl;
				cout << " Press 2 for FLORAL MEHNDI DECOR " << endl;
				cout << " Press 3 for BRIGHT HANGINGS FOR MEHNDI DECOR " << endl;
				cout << " Press 4 for DREAMCATCHERS " << endl;
				cout << " Press 5 for CLASSY WHITE " << endl;
				cout << " Press 6 for GENDA PHOOL " << endl;
				cout << " Press 7 for BOHO THEME " << endl;
				cout << " Press 8 for MORROCAN/ARABIC THEME " << endl;
				cout << " Press 9 if you want any other theme " << endl;
				cout << " Press 10 if you want customized decor  " << endl;
				cin >> themes;
				switch (themes)
				{
				case 1: {cout << " EXTRAVAGANT MEHNDI SPECIAL ";
					total_1 += the[0];
					the_selection = 0;
					break; }
				case 2: {cout << " FLORAL MEHNDI DECOR ";
					total_1 += the[1];
					the_selection = 1;
					break; }
				case 3: {cout << " BRIGHT HANGINGS FOR MEHNDI DECOR ";
					total_1 += the[2];
					the_selection = 2;
					break; }
				case 4: {cout << " DREAMCATCHERS ";
					total_1 += the[3];
					the_selection = 3;
					break; }
				case 5: {cout << " CLASSY WHITE ";
					total_1 += the[4];
					the_selection = 4;
					break; }
				case 6: {cout << " GENDA PHOOL ";
					total_1 += the[5];
					the_selection = 5;
					break; }
				case 7: {cout << " BOHO THEME ";
					total_1 += the[6];
					the_selection = 6;
					break; }
				case 8: {cout << " MORROCAN/ARABIC THEME ";
					total_1 += the[7];
					the_selection = 7;
					break; }
				case 9:
				{ cout << " Enter your theme choice ";
				cin >> theme;
				total_1 += the[8];
				the_selection = 8;
				break; }
				case 10:cout << " CUSTOMIZED DECOR "; break;
				}
				if (themes == 10)
				{
					cout << endl << "---- ENTRANCE DECOR---- " << endl;
					cout << " Press 1 for Lighting it up with bulbs and fairylights theme " << endl;
					cout << " Press 2 for Keeping it simple yet elegant with drapes and only drapes " << endl;
					cout << " Press 3 for Creating some magic with cherry blossom trees theme " << endl;
					cout << " Press 4 for Infuse 'em dreamy feels with wonderland arches theme " << endl;
					cout << " Press 5 for Adding Shimmer and Shine with metallic tassels theme " << endl;
					cout << " Press 6 for Freshening up the path with cascading mogra adornments theme " << endl;
					cout << " Press 7 for Glam up your entrance decor with a perfect blend of lights and florals " << endl;
					cin >> decor1;
					switch (decor1)
					{
					case 1:cout << " Lighting it up with bulbs and fairylights theme "; break;
					case 2:cout << " Keeping it simple yet elegant with drapes and only drapes "; break;
					case 3:cout << " Creating some magic with cherry blossom trees theme "; break;
					case 4:cout << " Infuse 'em dreamy feels with wonderland arches theme "; break;
					case 5:cout << " Adding Shimmer and Shine with metallic tassels theme "; break;
					case 6:cout << " Freshening up the path with cascading mogra adornments theme "; break;
					case 7:cout << " Glam up your entrance decor with a perfect blend of lights and florals "; break;
					}
					cout << endl << " ----STAGE DECOR---- " << endl;
					cout << " Press 1 for Go Floral " << endl;
					cout << " Press 2 for Square Flower Background " << endl;
					cout << " Press 3 for Whole Filled Wall With Flowers And Accessories " << endl;
					cout << " Press 4 for Ring Decor For Mehndi " << endl;
					cout << " Press 5 for Floral Canopy For Mehndi " << endl;
					cout << " Press 6 for Multi-Color Decoration For Mehndi Stage " << endl;
					cin >> decor2;
					switch (decor2)
					{
					case 1:cout << " Go Floral "; break;
					case 2:cout << " Square Flower Background "; break;
					case 3:cout << " Whole Filled Wall With Flowers And Accessories  "; break;
					case 4:cout << " Ring Decor For Mehndi "; break;
					case 5:cout << " Floral Canopy For Mehndi "; break;
					case 6:cout << " Multi-Color Decoration For Mehndi Stage "; break;
					}
					total_1 += the[9];
					the_selection = 9;
				}
				char c2;
				cout << endl << " Do you want a dance stage?(y/n) " << endl;
				cin >> c2;
				if (c2 == 'y')
				{
					cout << " ----DECOR ON DANCE STAGE---- " << endl;
					cout << " Press 1 for Bollywood Extravaganza " << endl;
					cout << " Press 2 for Punjabi Bhangra Bash " << endl;
					cout << " Press 3 for Arabian Nights " << endl;
					cout << " Press 4 for Floral Fanntasy " << endl;
					cout << " Press 5 for Mughal Elegance " << endl;
					cout << " Press 6 for Fairy Tale Garden " << endl;
					cout << " Press 7 for Tropical Paradise " << endl;
					cout << " Press 8 for Cultural Potpourri " << endl;
					cout << " Press 9 if You Just Want Us To Arrange A Dance Stage " << endl;
					cin >> decor3;
					switch (decor3)
					{
					case 1: {cout << " Bollywood Extravaganza ";
						total_1 += dance_stage[0];
						ds_selection = 0;
						break; }
					case 2: {cout << " Punjabi Bhangra Bash ";
						total_1 += dance_stage[1];
						ds_selection = 1;
						break; }
					case 3: {cout << " Arabian Nights ";
						total_1 += dance_stage[2];
						ds_selection = 2;
						break; }
					case 4: {cout << " Floral Fantasy ";
						total_1 += dance_stage[3];
						ds_selection = 3;
						break; }
					case 5: {cout << " Mughal Elegance ";
						total_1 += dance_stage[4];
						ds_selection = 4;
						break; }
					case 6: {cout << " Fairy Tale Garden ";
						total_1 += dance_stage[5];
						ds_selection = 5;
						break; }
					case 7: {cout << " Tropical Paradise ";
						total_1 += dance_stage[6];
						ds_selection = 6;
						break; }
					case 8: {cout << " Cultural Potpourri ";
						total_1 += dance_stage[7];
						ds_selection = 7;
						break; }
					case 9: {cout << " Just Arrange A Dance Stage ";
						total_1 += dance_stage[8];
						ds_selection = 8;
						break; }
					}
					cout << endl << " Enter flower choices from the following choices and press 0 to finish " << endl;
					cout << " Press 1 for Marigold ( Genda ) " << endl;
					cout << " Press 2 for Daisy " << endl;
					cout << " Press 3 for White roses " << endl;
					cout << " Press 4 for Yellow roses " << endl;
					cout << " Press 5 for Lily " << endl;
					cout << " Press 6 for Camelia " << endl;
					cout << " Press 7 if you want any other flower " << endl;
					int pa4;
					cout << " How many flowers do you want? ";
					cin >> pa4;
					while (true)
					{
						cin >> flower;
						cout << endl;
						if (flower == 0)
						{
							break;
						}
						if (flower >= 1 && flower <= 7)
						{
							switch (flower)
							{
							case 1: {cout << " MARIGOLD ";
								flo[4] = flo[4] * pa4;
								total_1 += flo[4];
								flower_selection = 4;
								break; }
							case 2: {cout << " DAISY ";
								flo[5] = flo[5] * pa4;
								total_1 += flo[5];
								flower_selection = 5;
								break; }
							case 3: {cout << " WHITE ROSES ";
								flo[6] = flo[6] * pa4;
								total_1 += flo[6];
								flower_selection = 6;
								break; }
							case 4: {cout << " YELLOW ROSES ";
								flo[7] = flo[7] * pa4;
								total_1 += flo[7];
								flower_selection = 7;
								break; }
							case 5: {cout << " LILY ";
								flo[8] = flo[8] * pa4;
								total_1 += flo[8];
								flower_selection = 8;
								break; }
							case 6: {cout << " CAMELIA ";
								flo[9] = flo[9] * pa4;
								total_1 += flo[9];
								flower_selection = 9;
								break; }
							case 7:
							{	cout << " Enter your flower choice ";
							cin >> flowers;
							flo[10] = flo[10] * pa4;
							total_1 += flo[10];
							flower_selection = 10;
							break;
							}
							}
						}
					}
					cout << endl << " Do you want us to arrange flower jewellery?(y/n) " << endl;
					cin >> fj;
					int pa3;
					if (fj == 'y')
					{
						cout << " How many jewellery sets do you want? ";
						cin >> pa3;
						cout << " Enter flower choice: ";
						cin >> fc;
						cout << endl << " We Will Arrange It ";
						flo_jew[0] = flo_jew[0] * pa3;
						total_1 += flo_jew[0];
						fj_selection = 0;
					}
					cout << endl << " Do you want us to arrange dandiya sticks for dance?(y/n) " << endl;
					cin >> ds;
					int pa2;
					if (ds == 'y')
					{
						cout << endl << " How many sticks do you want? ";
						cin >> pa2;
						cout << endl << " Do You Want Heavy Designed Dandiya Sticks Or Light Designed Dandiya Stcks? " << endl;
						cin >> yc;
						cout << endl << " Of Which Color Do You Want The Dandiya Sticks?(Press 0 for stop choosing and for choosing press the following) " << endl;
						cout << " Press 1 for Yellow " << endl;
						cout << " Press 2 for Purple " << endl;
						cout << " Press 3 for Pink " << endl;
						cout << " Press 4 for Orange " << endl;
						cout << " Press 5 for Green " << endl;
						cout << " Press 6 for Blue " << endl;
						cout << " Press 7 if you want sticks of any other color " << endl;
						while (true)
						{
							cin >> color;
							cout << endl;
							if (color == 0)
							{
								break;
							}
							if (color >= 1 && color <= 7)
							{
								switch (color)
								{
								case 1:cout << " YELLOW "; break;
								case 2:cout << " PURPLE "; break;
								case 3:cout << " PINK "; break;
								case 4:cout << " ORANGE "; break;
								case 5:cout << " GREEN "; break;
								case 6:cout << " BLUE "; break;
								case 7:
								{	cout << " Enter Your Color Choice " << endl;
								cin >> colors; break;
								}
								}
							}
						}
						dand_st[0] = dand_st[0] * pa2;
						total_1 += dand_st[0];
						das_selection = 0;
					}
					cout << " Do You Want Us To Arrange Mehandi Plates?(y/n) " << endl;
					cin >> mp;
					int pa1;
					if (mp == 'y')
					{
						cout << endl << " How many plates do you want? ";
						cin >> pa1;
						cout << " MEHANDI PLATES THEMES " << endl;
						int mpt;
						cout << " Press 1 for Traditional Elegance " << endl;
						cout << " Press 2 for Floral Delight " << endl;
						cout << " Press 3 for Rajasthani Splendor " << endl;
						cout << " Press 4 for Ethnic Fusion " << endl;
						cout << " Press 5 for Bollywood Glamour " << endl;
						cout << " Press 6 for Pastel Pretty " << endl;
						cout << " Press 7 for Festive Colors " << endl;
						cout << " Press 8 for Minimalistic Chic " << endl;
						cout << " Press 9 for Nature Inspired " << endl;
						cout << " Press 10 for Personalized Touch " << endl;
						cin >> mpt;
						switch (mpt)
						{
						case 1: {cout << " Traditional Elegance ";
							meh_pl[0] = meh_pl[0] * pa1;
							total_1 += meh_pl[0];
							mp_selection = 0;
							break; }
						case 2: {cout << " Floral Delight ";
							meh_pl[1] = meh_pl[1] * pa1;
							total_1 += meh_pl[1];
							mp_selection = 1;
							break; }
						case 3: {cout << " Rajasthani Splendor ";
							meh_pl[2] = meh_pl[2] * pa1;
							total_1 += meh_pl[2];
							mp_selection = 2;
							break; }
						case 4: {cout << " Ethnic Fusion ";
							meh_pl[3] = meh_pl[3] * pa1;
							total_1 += meh_pl[3];
							mp_selection = 3;
							break; }
						case 5: {cout << " Bollywood Glamour ";
							meh_pl[4] = meh_pl[4] * pa1;
							total_1 += meh_pl[4];
							mp_selection = 4;
							break; }
						case 6: {cout << " Pastel Pretty ";
							meh_pl[5] = meh_pl[5] * pa1;
							total_1 += meh_pl[5];
							mp_selection = 5;
							break; }
						case 7: {cout << " Festive Colors ";
							meh_pl[6] = meh_pl[6] * pa1;
							total_1 += meh_pl[6];
							mp_selection = 6;
							break; }
						case 8: {cout << " Minimalistic Chic ";
							meh_pl[7] = meh_pl[7] * pa1;
							total_1 += meh_pl[7];
							mp_selection = 7;
							break; }
						case 9: {cout << " Nature Inspired ";
							meh_pl[8] = meh_pl[8] * pa1;
							total_1 += meh_pl[8];
							mp_selection = 8;
							break; }
						case 10: {cout << " Personalized Touch ";
							meh_pl[9] = meh_pl[9] * pa1;
							total_1 += meh_pl[9];
							mp_selection = 9;
							break; }
						}
					}
					int pa;
					cout << endl << endl << " SELECT FOOD PACKAGE " << endl;
					cout << " Press 1 for package 1 " << endl;
					cout << " Press 2 for package 2 " << endl;
					cout << " Press 3 for package 3 " << endl;
					cout << " How many packages do you want? ";
					cin >> pa;
					cout << endl;
					cin >> fp;
					switch (fp)
					{
					case 1:
					{ cout << " Biryani " << endl << " Korma " << endl << " Seekh Kebab " << endl;
					cout << " Naan " << endl << " Raita " << endl << " Salad " << endl << " Kheer ";
					dinner[0] = dinner[0] * pa;
					total_1 += dinner[0];
					dinner_selection = 0;
					break; }
					case 2:
					{ cout << " Biryani " << endl << " Palak Paneer " << endl << " Tikka Pieces " << endl;
					cout << " Naan " << endl << " Raita " << endl << " Salad " << endl << " Zarda ";
					dinner[1] = dinner[1] * pa;
					total_1 += dinner[1];
					dinner_selection = 1;
					break; }
					case 3:
					{ cout << " Biryani " << endl << " Handi " << endl << " Malai Boti " << endl;
					cout << " Naan " << endl << " Raita " << endl << " Salad " << endl << " Lab-e-Shireen ";
					dinner[2] = dinner[2] * pa;
					total_1 += dinner[2];
					dinner_selection = 2;
					break; }
					}
				}
				Bill_Generator2(total_1, the, dance_stage, flo, flo_jew, dand_st, meh_pl, dinner, the_selection, ds_selection, flower_selection, fj_selection, das_selection, mp_selection, dinner_selection);
				cout << endl << "If you want to do another event then choose from the following options." << endl;
				break;
			}
			case 2: {
				system("color 67");
				cout << " DHOLKI ARRANGEMENT " << endl << endl;
				cout << "Dholki is basically a home-based celebration in which relatives and friends get together, sing songs," << endl;
				cout << "practice dances for the wedding, and so on.Usually, no specific planning is required for it.However," << endl;
				cout << "you still need to manage a few things, i.e., menu, décor, lighting, etc., if you are going to have" << endl;
				cout << "guests at home.So, here are some creative suggestions that can help you make your Dholki celebrations" << endl;
				cout << "rememberable and appreciable. " << endl << endl;
				cout << " Do you want the arrangement to be done in your home(a) or in any hall(h)? " << endl;
				cin >> location;
				cout << " Press 1 for COLORFUL AND VIBRANT theme " << endl;
				cout << " Press 2 for BOLLYWOOD GLAM theme " << endl;
				cout << " Press 3 for CULTURAL ELEGANCE " << endl;
				cout << " Press 4 for RUSTIC CHARM " << endl;
				cout << " Press 5 for PERSONALIZED TOUCH " << endl;
				cout << " Press 6 if you want any other theme " << endl;
				cout << " Press 7 if you want customized decor  " << endl;
				cin >> themes;
				switch (themes)
				{
				case 1: {cout << " COLORFUL AND VIBRANT theme  ";
					total_2 += the[0];
					the_selection = 0;
					break; }
				case 2: {cout << " BOLLYWOOD GLAM theme ";
					total_2 += the[1];
					the_selection = 1;
					break; }
				case 3: {cout << " CULTURAL ELEGANCE ";
					total_2 += the[2];
					the_selection = 2;
					break; }
				case 4: {cout << " RUSTIC CHARM ";
					total_2 += the[3];
					the_selection = 3;
					break; }
				case 5: {cout << " PERSONALIZED TOUCH ";
					total_2 += the[4];
					the_selection = 4;
					break; }
				case 6:
				{ cout << " Enter your theme choice ";
				cin >> theme;
				total_2 += the[5];
				the_selection = 5;
				break; }
				case 7: {cout << " CUSTOMIZED DECOR ";
					total_2 += the[9];
					the_selection = 9;
					break; }
				}
				if (themes == 7)
				{
					cout << endl << "---- ENTRANCE DECOR---- " << endl;
					cout << " Press 1 Floral Extravaganza " << endl;
					cout << " Press 2 Traditional Elegance " << endl;
					cout << " Press 3 Lights and Lanterns " << endl;
					cout << " Press 4 Cultural Theme " << endl;
					cout << " Press 5 Personalized Entrance " << endl;
					cout << " Press 6 Fabric and Drapery " << endl;
					cout << " Press 7 Music and Welcoming " << endl;
					cin >> decor1;
					switch (decor1)
					{
					case 1:cout << " Floral Extravaganza "; break;
					case 2:cout << " Traditional Elegance "; break;
					case 3:cout << " Lights and Lanterns "; break;
					case 4:cout << " Cultural Theme "; break;
					case 5:cout << " Personalized Entrance "; break;
					case 6:cout << " Fabric and Drapery "; break;
					case 7:cout << " Music and Welcoming "; break;
					}
					cout << endl << " ----STAGE DECOR---- " << endl;
					cout << " Press 1 for Themed Decor Elements " << endl;
					cout << " Press 2 for Balloon and Fabric Decor " << endl;
					cout << " Press 3 for Vintage Charm " << endl;
					cout << " Press 4 for Bollywood Themed " << endl;
					cout << " Press 5 for Lights and Glamour " << endl;
					cout << " Press 6 for Bright and Vibrant " << endl;
					cin >> decor2;
					switch (decor2)
					{
					case 1:cout << " Themed Decor Elements "; break;
					case 2:cout << " Balloon and Fabric Decor "; break;
					case 3:cout << " Vintage Charm "; break;
					case 4:cout << " Bollywood Themed "; break;
					case 5:cout << " Lights and Glamour "; break;
					case 6:cout << " Bright and Vibrant "; break;
					}
				}
				char c1;
				cout << endl << " Do you want a dance stage?(y/n) " << endl;
				cin >> c1;
				if (c1 == 'n')
				{
					break;
				}
				if (c1 == 'y')
				{
					cout << " ----DECOR ON DANCE STAGE---- " << endl;
					cout << " Press 1 for Bollywood Extravaganza " << endl;
					cout << " Press 2 for Glitter and Glam " << endl;
					cout << " Press 3 for Retro Disco Fever " << endl;
					cout << " Press 4 for Colorful Carnival " << endl;
					cout << " Press 5 for Street Style Vibes " << endl;
					cout << " Press 6 for Garden Party " << endl;
					cout << " Press 7 for Cultural Fusion " << endl;
					cout << " Press 8 for Personalized Dance Floor " << endl;
					cout << " Press 9 if You Just Want Us To Arrange A Dance Stage " << endl;
					cin >> decor3;
					switch (decor3)
					{
					case 1: {cout << " Bollywood Extravaganza ";
						total_2 += dance_stage[0];
						ds_selection = 0;
						break; }
					case 2: {cout << " Glitter and Glam ";
						total_2 += dance_stage[1];
						ds_selection = 1;
						break; }
					case 3: {cout << " Retro Disco Fever ";
						total_2 += dance_stage[2];
						ds_selection = 2;
						break; }
					case 4: {cout << " Colorful Carnival ";
						total_2 += dance_stage[3];
						ds_selection = 3;
						break; }
					case 5: {cout << " Street Style Vibes ";
						total_2 += dance_stage[4];
						ds_selection = 4;
						break; }
					case 6: {cout << " Garden Party ";
						total_2 += dance_stage[5];
						ds_selection = 5;
						break; }
					case 7: {cout << " Cultural Fusion ";
						total_2 += dance_stage[6];
						ds_selection = 6;
						break; }
					case 8: {cout << " Personalized Dance Floor ";
						total_2 += dance_stage[7];
						ds_selection = 7;
						break; }
					case 9: {cout << " You Just Want Us To Arrange A Dance Stage ";
						total_2 += dance_stage[8];
						ds_selection = 8;
						break; }
					}
					int p5;
					cout << endl << " Enter flower choices from the following choices and press 0 to finish " << endl;
					cout << " Press 1 for Marigold ( Genda ) " << endl;
					cout << " Press 2 for Daisy " << endl;
					cout << " Press 3 for White roses " << endl;
					cout << " Press 4 for Yellow roses " << endl;
					cout << " Press 5 for Lily " << endl;
					cout << " Press 6 for Camelia " << endl;
					cout << " Press 7 if you want any other flower " << endl;
					cout << " How many flowers do you want? ";
					cin >> p5;
					cout << endl;
					while (true)
					{
						cin >> flower;
						cout << endl;
						if (flower == 0)
						{
							break;
						}
						if (flower >= 1 && flower <= 7)
						{
							switch (flower)
							{
							case 1: {cout << " MARIGOLD ";
								flo[4] = flo[4] * p5;
								total_2 += flo[4];
								flower_selection = 4;
								break; }
							case 2: {cout << " DAISY ";
								flo[5] = flo[5] * p5;
								total_2 += flo[5];
								flower_selection = 5;
								break; }
							case 3: {cout << " WHITE ROSES ";
								flo[6] = flo[6] * p5;
								total_2 += flo[6];
								flower_selection = 6;
								break; }
							case 4: {cout << " YELLOW ROSES ";
								flo[7] = flo[7] * p5;
								total_2 += flo[7];
								flower_selection = 7;
								break; }
							case 5: {cout << " LILY ";
								flo[8] = flo[8] * p5;
								total_2 += flo[8];
								flower_selection = 8;
								break; }
							case 6: {cout << " CAMELIA ";
								flo[9] = flo[9] * p5;
								total_2 += flo[9];
								flower_selection = 9;
								break; }
							case 7:
							{	cout << " Enter your flower choice ";
							cin >> flowers;
							flo[10] = flo[10] * p5;
							total_2 += flo[10];
							flower_selection = 10;
							break;
							}
							}
						}
					}
					int p6;
					cout << endl << " Do you want us to arrange flower jewellery?(y/n) " << endl;
					cin >> fj;
					cout << endl << " How many sets do you want? ";
					cin >> p6;
					cout << endl;
					if (fj == 'y')
					{
						cout << " Enter flower choice: ";
						cin >> fc;
						cout << endl << " We Will Arrange It " << endl;
						flo_jew[0] = flo_jew[0] * p6;
						total_2 += flo_jew[0];
						fj_selection = 0;
					}
					int p7;
					cout << endl << " Do you want us to arrange dandiya sticks for dance?(y/n) " << endl;
					cin >> ds;
					if (ds == 'y')
					{
						cout << " How many dandiya sticks do you want? ";
						cin >> p7;
						cout << endl << " Do You Want Heavy Designed Dandiya Sticks Or Light Designed Dandiya Stcks? " << endl;
						cin >> yc;
						cout << endl << " Of Which Color Do You Want The Dandiya Sticks?(Press 0 for stop choosing and for choosing press the following) " << endl;
						cout << " Press 1 for Yellow " << endl;
						cout << " Press 2 for Purple " << endl;
						cout << " Press 3 for Pink " << endl;
						cout << " Press 4 for Orange " << endl;
						cout << " Press 5 for Green " << endl;
						cout << " Press 6 for Blue " << endl;
						cout << " Press 7 if you want sticks of any other color " << endl;
						while (true)
						{
							cin >> color;
							cout << endl;
							if (color == 0)
							{
								break;
							}
							if (color >= 1 && color <= 7)
							{
								switch (color)
								{
								case 1: {cout << " YELLOW ";
									break; }
								case 2: {cout << " PURPLE "; break; }
								case 3: {cout << " PINK "; break; }
								case 4: {cout << " ORANGE "; break; }
								case 5: {cout << " GREEN "; break; }
								case 6: {cout << " BLUE "; break; }
								case 7:
								{	cout << " Enter Your Color Choice " << endl;
								cin >> colors; break;
								}
								}
							}
						}
						dand_st[0] = dand_st[0] * p7;
						total_2 += dand_st[0];
						das_selection = 0;
					}
					int p8;
					cout << " Do You Want Us To Arrange dhol?(y/n) " << endl;
					cin >> dhol;
					if (dhol == 'y')
					{
						cout << " How many dhol do you want? ";
						cin >> p8;
						dho[0] = dho[0] * p8;
						total_2 += dho[0];
						dho_selection = 0;
					}
					int p9;
					cout << endl << " For how many people do you want the food? ";
					cin >> p9;
					cout << endl << " Enter food choices from the following choices and press 0 to finish " << endl;
					cout << " ---FOR SNACKS---" << endl;
					cout << " Press 1 for Samosas " << endl;
					cout << " Press 2 for Chaat " << endl;
					cout << " Press 3 for Tikka " << endl;
					cout << " Press 4 for Kebabs " << endl;
					cout << " Press 5 for Pakoras " << endl;
					cout << " Press 6 for Sandwiches " << endl;
					cout << " Press 7 for Speghattis " << endl;
					while (true)
					{
						cin >> snacks;
						cout << endl;
						if (snacks == 0)
						{
							break;
						}
						if (snacks >= 1 && snacks <= 7)
						{
							switch (snacks)
							{
							case 1: {cout << " Samosa ";
								sn[0] = sn[0] * p9;
								total_2 += sn[0];
								sn_selection = 0;
								break; }
							case 2: {cout << " Chaat ";
								sn[1] = sn[1] * p9;
								total_2 += sn[1];
								sn_selection = 1;
								break; }
							case 3: {cout << " Tikka ";
								sn[2] = sn[2] * p9;
								total_2 += sn[2];
								sn_selection = 2;
								break; }
							case 4: {cout << " Kebabs ";
								sn[3] = sn[3] * p9;
								total_2 += sn[3];
								sn_selection = 3;
								break; }
							case 5: {cout << " Pakoras ";
								sn[4] = sn[4] * p9;
								total_2 += sn[4];
								sn_selection = 4;
								break; }
							case 6: {cout << " Sandwiches ";
								sn[5] = sn[5] * p9;
								total_2 += sn[5];
								sn_selection = 5;
								break; }
							case 7: {cout << " Spaghettis ";
								sn[6] = sn[6] * p9;
								total_2 += sn[6];
								sn_selection = 6;
								break; }
							}
						}
					}
					cout << " ---FOR SWEETS--- " << endl;
					cout << " Press 1 for Barfi " << endl;
					cout << " Press 2 for Gulab Jamun " << endl;
					cout << " Press 3 for Ladoo " << endl;
					cout << " Press 4 for Rasgulla " << endl;
					cout << " Press 5 for Kheer " << endl;
					cout << " Press 6 for Gajar halwa " << endl;
					while (true)
					{
						cin >> sweets;
						cout << endl;
						if (sweets == 0)
						{
							break;
						}
						if (sweets >= 1 && sweets <= 5)
						{
							switch (sweets)
							{
							case 1: {cout << " Barfi ";
								sw[0] = sw[0] * p9;
								total_2 += sw[0];
								sw_selection = 0;
								break; }
							case 2: {cout << " Gulab Jamun ";
								sw[1] = sw[1] * p9;
								total_2 += sw[1];
								sw_selection = 1;
								break; }
							case 3: {cout << " Ladoo ";
								sw[2] = sw[2] * p9;
								total_2 += sw[2];
								sw_selection = 2;
								break; }
							case 4: {cout << " Rasgulla ";
								sw[3] = sw[3] * p9;
								total_2 += sw[3];
								sw_selection = 3;
								break; }
							case 5: {cout << " Kheer ";
								sw[4] = sw[4] * p9;
								total_2 += sw[4];
								sw_selection = 4;
								break; }
							case 6: {cout << " Gajar halwa ";
								sw[5] = sw[5] * p9;
								total_2 += sw[5];
								sw_selection = 5;
								break; }
							}
						}
					}
					cout << " ---FOR BEVERAGES--- " << endl;
					cout << " Press 1 for Pomegrenate Juice " << endl;
					cout << " Press 2 for Peach Juice " << endl;
					cout << " Press 3 for Apple Juice " << endl;
					cout << " Press 4 for Mango Juice " << endl;
					cout << " Press 5 for Pineapple Juice " << endl;
					cout << " Press 6 for Orange Juice " << endl;
					cout << " Press 7 for Tea " << endl;
					cout << " Press 8 for Coffee " << endl;
					cout << " Press 9 for Water " << endl;
					cout << " Press 10 for Softdrinks " << endl;
					while (true)
					{
						cin >> beverages;
						cout << endl;
						if (beverages == 0)
						{
							break;
						}
						if (beverages >= 1 && beverages <= 10)
						{
							switch (beverages)
							{
							case 1: {cout << " Pomegrenate Juice ";
								be[0] = be[0] * p9;
								total_2 += be[0];
								be_selection = 0;
								break; }
							case 2: {cout << " Peach Juice ";
								be[1] = be[1] * p9;
								total_2 += be[1];
								be_selection = 1;
								break; }
							case 3: {cout << " Apple Juice ";
								be[2] = be[2] * p9;
								total_2 += be[2];
								be_selection = 2;
								break; }
							case 4: {cout << " Mango Juice ";
								be[3] = be[3] * p9;
								total_2 += be[3];
								be_selection = 3;
								break; }
							case 5: {cout << " Pineapple Juice ";
								be[4] = be[4] * p9;
								total_2 += be[4];
								be_selection = 4;
								break; }
							case 6: {cout << " Orange Juice ";
								be[5] = be[5] * p9;
								total_2 += be[5];
								be_selection = 5;
								break; }
							case 7: {cout << " Tea ";
								be[6] = be[6] * p9;
								total_2 += be[6];
								be_selection = 6;
								break; }
							case 8: {cout << " Coffee ";
								be[7] = be[7] * p9;
								total_2 += be[7];
								be_selection = 7;
								break; }
							case 9: {cout << " Water ";
								be[8] = be[8] * p9;
								total_2 += be[8];
								be_selection = 8;
								break; }
							case 10: {cout << " Softdrinks ";
								be[9] = be[9] * p9;
								total_2 += be[9];
								be_selection = 9;
								break; }
							}
						}
					}
					cout << " ---FOR MAIN COURSE--- " << endl;
					cout << " Press 1 for Biryani " << endl;
					cout << " Press 2 for Pulao " << endl;
					cout << " Press 3 for Handi " << endl;
					cout << " Press 4 for Mixed Vegetable " << endl;
					cout << " Press 5 for Korma " << endl;
					cout << " Press 6 for Achaar Gosht " << endl;
					cout << " Press 7 for Palak " << endl;
					while (true)
					{
						cin >> mc;
						cout << endl;
						if (mc == 0)
						{
							break;
						}
						if (mc >= 1 && mc <= 7)
						{
							switch (mc)
							{
							case 1: {cout << " Biryani ";
								mac[0] = mac[0] * p9;
								total_2 += mac[0];
								mac_selection = 0;
								break; }
							case 2: {cout << " Pulao ";
								mac[1] = mac[1] * p9;
								total_2 += mac[1];
								mac_selection = 1;
								break; }
							case 3: {cout << " Handi ";
								mac[2] = mac[2] * p9;
								total_2 += mac[2];
								mac_selection = 2;
								break; }
							case 4: {cout << " Mixed Vegetable ";
								mac[3] = mac[3] * p9;
								total_2 += mac[3];
								mac_selection = 3;
								break; }
							case 5: {cout << " Korma ";
								mac[3] = mac[3] * p9;
								total_2 += mac[3];
								mac_selection = 3;
								break; }
							case 6: {cout << " Achaar Gosht ";
								mac[4] = mac[4] * p9;
								total_2 += mac[4];
								mac_selection = 4;
								break; }
							case 7: {cout << " Palak ";
								mac[6] = mac[6] * p9;
								total_2 += mac[6];
								mac_selection = 6;
								break; }
							}
						}
					}
					Bill_Generator3(total_2, the, dance_stage, flo, flo_jew, dand_st, dho, sn, sw, be, mac, the_selection, ds_selection, flower_selection, fj_selection, das_selection, dho_selection, sn_selection, sw_selection, be_selection, mac_selection);
					cout << "If you want to do another event then choose from the following options." << endl; break;
				}
			case 3: {
				system("color 97");
				cout << " BARAT " << endl;
				string name;
				cout << endl;
				cout << "          ----------WELCOME TO BARAAT EVENT SERVICES----------          " << endl << endl << endl;
				cout << "Enter the Groom's name: " << endl;
				cin >> name;
				cout << endl << endl;
				cout << "          Congratulations" << "  " << name << "  " << "on your baraat event!Enjoy with our services!" << endl << endl << endl;
				cout << "Choose the entry style option: " << endl;
				cout << " 1.White horses " << endl;
				cout << " 2.Decorated horses " << endl;
				cout << " 3.Bikers club " << endl;
				cout << " 4.Chariot " << endl;
				cout << " 5.Jeep " << endl;
				int eo;
				cout << "  Enter option number for entry style(press 0 to finish): " << endl;
				while (true)
				{
					cin >> eo;
					if (eo == 0)
						break;
					if (eo >= 1 && eo <= 5)
					{
						switch (eo)
						{
						case 1:cout << "White horses ";
							total_5 += entry[0];
							entry_selection = 0;
							break;
						case 2:cout << "Decorated horse";
							total_5 += entry[1];
							entry_selection = 1;
							break;
						case 3:cout << "Bikers club";
							total_5 += entry[2];
							entry_selection = 2;
							break;
						case 4:cout << "Chariot";
							total_5 += entry[3];
							entry_selection = 3;
							break;
						case 5:cout << "Jeep";
							total_5 += entry[4];
							entry_selection = 4;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}
				cout << endl;
				cout << "Choose the music system: " << endl;
				cout << " 1.Traditional Dhol " << endl;
				cout << " 2.Live Band " << endl;
				int mo;
				cout << " Enter option number for music system(press 0 to finish): " << endl;
				while (true)
				{
					cin >> mo;
					if (mo == 0)
						break;
					if (mo >= 1 && mo <= 2)
					{
						switch (mo)
						{
						case 1:cout << "Traditional Dhol";
							total_5 += mosic[0];
							mosic_selection = 0;
							break;
						case 2:cout << "Live Band";
							total_5 += mosic[1];
							mosic_selection = 1;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}cout << endl;
				cout << "Choose the lights: " << endl;
				cout << " 1.Fairy lights " << endl;
				cout << " 2.LED String lights " << endl;
				int lo;
				cout << " Enter option number for lights(press 0 to finish): " << endl;
				while (true)
				{
					cin >> lo;
					if (lo == 0)
						break;
					if (lo >= 1 && lo <= 4)
					{
						switch (lo)
						{
						case 1:cout << "Fairy light";
							total_5 += lght[0];
							lght_selection = 0;
							break;
						case 2:cout << "LED String lights";
							total_5 += lght[1];
							lght_selection = 1;
							break;
						}
					}
					else
					{
						cout << " You have enter an invalid option. Choose again: " << endl;
					}
				}cout << endl;
				char op;
				cout << "Do you want Special items(Y/N)";
				cin >> op;
				switch (op)
				{
					if (op == 'n' || op == 'N')
						break;
				}
				if (op == 'y' || op == 'Y')
				{
					cout << endl;
					cout << "1.Our Special Services include following: " << endl;
					cout << "2.Royal Baraat Entry with Vintage Car" << endl;
					cout << "3.Royal Baraat Entry on Elephant" << endl;
					cout << "4.Tropical baraat theme at outdoor" << endl;
					cout << "5.Photography services" << endl;
					int so;
					cout << "Choose the special deal you want to add in your event(choose option numbers,press 0 to finish): " << endl;
					while (true)
					{
						cin >> so;
						if (so == 0)
							break;
						if (so >= 1 && so <= 5)
						{
							switch (so)
							{
							case 1:cout << "Our Special Services include following ";
								total_5 += specials[0];
								specials_selection = 0;
								break;
							case 2:cout << "Royal Baraat Entry with Vintage Car";
								total_5 += specials[1];
								specials_selection = 1;
								break;
							case 3:cout << "Royal Baraat Entry on Elephant";
								total_5 += specials[2];
								specials_selection = 2;
								break;
							case 4:cout << "Tropical baraat theme at outdoor";
								total_5 += specials[3];
								specials_selection = 3;
								break;
							case 5:cout << "Photography services";
								total_5 += specials[4];
								specials_selection = 4;
								break;
							}
						}
						else
						{
							cout << " You have enter an invalid option. Choose again: " << endl;
						}
					}
				}cout << endl;
				cout << "Do you want us to arrange dinner or you will arrange it?(Y/N): ";
				char choice;
				cin >> choice;
				switch (choice) {
					if (choice == 'n' || choice == 'N') {
						break;
					}
				}
				if (choice == 'y' || choice == 'Y') {
					cout << "Our menu include: " << endl;
					cout << "1. Chicken Biryani" << endl;
					cout << "2. Mutton Qorma" << endl;
					cout << "3. Mutton Karahi" << endl;
					cout << "4. Chicken Karahi" << endl;
					cout << "5. Chicken Seekh Kabab" << endl;
					cout << "6. Fish Fry" << endl;
					cout << "7. Finger Fish" << endl;
					cout << "8. Mix Naan" << endl;
					cout << "9. Freshly Baked Roghani Naan" << endl;
					cout << "10. Shami Kabab " << endl;
					cout << "11. Salad Russian style" << endl;
					cout << "12. Fresh Green Salad" << endl;
					cout << "13. Bean Salad" << endl;
					cout << "14. Pasta Salad" << endl;
					cout << "15. Mix Drinks" << endl;
					int fo;
					cout << "Choose the Dishes you want to add in menu(enter option numbers,enter 0 to terminate):  " << endl;
					while (true)
					{
						cin >> fo;
						if (fo == 0)
							break;
						if (fo >= 1 && fo <= 15)
						{
							switch (fo)
							{
							case 1:cout << "Chicken Biryani";
								total_5 += dinners[0];
								dinners_selection = 0;
								break;
							case 2:cout << "Mutton Qorma";
								total_5 += dinners[1];
								dinners_selection = 1;
								break;
							case 3:cout << "Mutton Karahi";
								total_5 += dinners[2];
								dinners_selection = 2;
								break;
							case 4:cout << "Chicken Karahi";
								total_5 += dinners[3];
								dinners_selection = 3;
								break;
							case 5:cout << "Chicken Seekh Kabab";
								total_5 += dinners[4];
								dinners_selection = 4;
								break;
							case 6:cout << " Fish Fry";
								total_5 += dinners[5];
								dinners_selection = 5;
								break;
							case 7:cout << "Finger Fish";
								total_5 += dinners[6];
								dinners_selection = 6;
								break;
							case 8:cout << " Mix Naan";
								total_5 += dinners[7];
								dinners_selection = 7;
								break;
							case 9:cout << "Freshly Baked Roghani Naan";
								total_5 += dinners[8];
								dinners_selection = 8;
								break;
							case 10:cout << " Shami Kabab";
								total_5 += dinners[9];
								dinners_selection = 9;
								break;
							case 11:cout << "Salad Russian style";
								total_5 += dinners[10];
								dinners_selection = 10;
								break;
							case 12:cout << "Fresh Green Salad";
								total_5 += dinners[11];
								dinners_selection = 11;
								break;
							case 13:cout << "Bean Salad";
								total_5 += dinners[12];
								dinners_selection = 12;
								break;
							case 14:cout << "Pasta Salad";
								total_5 += dinners[13];
								dinners_selection = 13;
								break;
							case 15:cout << "Mix Drinks";
								total_5 += dinners[14];
								dinners_selection = 14;
								break;
							}
						}
						else
						{
							cout << " You have enter an invalid option. Choose again: " << endl;
						}
					}
					cout << endl;
					cout << "Our Sweet Dishes include: " << endl;
					cout << "1. Gajar Halwa" << endl;
					cout << "2. Rasmalai" << endl;
					cout << "3. Kheer" << endl;
					cout << "4. Cupcakes" << endl;
					cout << "5. Ice cream" << endl;
					int sw;
					cout << "Choose the Sweet Dishes you want to add in menu(enter option numbers,enter 0 to terminate):  " << endl;
					while (true)
					{
						cin >> sw;
						if (sw == 0)
							break;
						if (sw >= 1 && sw <= 5)
						{
							switch (sw)
							{
							case 1:cout << "Gajar Halwa";
								total_5 += sweeto[0];
								sweeto_selection = 0;
								break;
							case 2:cout << "Rasmalai";
								total_5 += sweeto[1];
								sweeto_selection = 1;
								break;
							case 3:cout << "Kheer";
								total_5 += sweeto[2];
								sweeto_selection = 2;
								break;
							case 4:cout << "Cupcakes";
								total_5 += sweeto[3];
								sweeto_selection = 3;
								break;
							case 5:cout << "Ice cream";
								total_5 += sweeto[4];
								sweeto_selection = 4;
								break;
							}
						}
						else
						{
							cout << " You have enter an invalid option. Choose again: " << endl;
						}
					}

				}
				Bill_Generator5(total_5, entry, entry_selection, mosic, mosic_selection, lght, lght_selection, specials, specials_selection, dinners, dinners_selection, sweeto, sweeto_selection);

				cout << endl << endl;

				cout << "          ----------Decoration order complete! Enjoy your baraat event!----------          " << endl;
				cout << "                              Thank You!                                                    ";
				cout << "If you want to do another function then choose from the following options." << endl; break;
			}
			case 4:system("color 77"); {cout << " WALIMA" << endl;
				cout << "WELCOME TO WALIMA EVENT MANAGEMENT COMPANY" << endl;
				cout << "In your walima function" << endl;
				cout << "we will arrange the whole decor" << endl;
				cout << "and the food for you" << endl;
				cout << "1. Flowers decor on tables and chairs" << endl;

				cout << "Which type of flowers do you want on table and chair? " << endl;
				cout << "Press 1 for tulips, white lily " << endl;
				cout << "Press 2 for white orchid, white Gerbera daisy" << endl;
				cout << "Press 3 for white carnation and  white roses" << endl;
				cout << "Press 4 for white and pink roses" << endl;
				int flowers;
				cin >> flowers;
				switch (flowers) {
				case 1: {cout << "Whole decoration of tables and chairs will be done with tulips and white lily" << endl;
					total += flo[0];
					flower_selection = 0;
				}
					  break;
				case 2: {cout << "Whole decoration of tables and chairs will be done with white orchid and white gerbera daisy" << endl;
					total += flo[1];
					flower_selection = 1; } break;
				case 3: {cout << "Whole decoration of tables and chairs will be done with white carnation and white roses" << endl;
					total += flo[2];
					flower_selection = 2; } break;
				case 4: {cout << "Whole decoration of tables and chairs will be done with white and pink roses" << endl;
					total += flo[3];
					flower_selection = 3; break; }
				}
				cout << endl;
				cout << "2. Entrance decor" << endl;
				cout << "Which type of decor do you want on entrance?" << endl;
				cout << "Press 1 for  floral arches and Suspended flower arrangements" << endl;
				cout << "Press 2 for garlands ,chandeliers and floral hoops " << endl;
				cout << "Press 3 for garlands and aisle adorned with flowers" << endl;

				int entrance;
				cin >> entrance;
				switch (entrance) {
				case 1: {cout << "Floral arches and Suspended flower arrangement" << endl;
					total += ent[0];
					entrance_selection = 0; break; }
				case 2: {cout << "garlands ,chandeliers and floral hoops " << endl;
					total += ent[1];
					entrance_selection = 1; break; }
				case 3: {cout << " garlands and aisle adorned with flowers " << endl;
					total += ent[2];
					entrance_selection = 2; break; }
				}
				cout << endl;

				cout << "2. Stage decor" << endl;
				cout << "Which type of decor do you want on stage?" << endl;
				cout << "Press 1 for cascading floral garlands" << endl;
				cout << "Press 2 for lush flower walls " << endl;
				cout << "Press 3 for intricate floral arches" << endl;

				int stage;
				cin >> stage;
				switch (stage) {
				case 1: {cout << " Cascading floral garlands decor ";
					total += stag[0];
					stage_selection = 0; break; }
				case 2: {cout << " Lush flower walls ";
					total += stag[1];
					stage_selection = 1; break; }
				case 3: {cout << " Intricate floral arches ";
					total += stag[2];
					stage_selection = 2; break; }
				}
				cout << endl;
				cout << "Do you want us to arrange dinner or you will arrange it " << endl;
				char choice;
				cin >> choice;

				if (choice == 'n' || choice == 'N') {
					exit(0);
				}
				else {
					cout << "Which one of the deal do you want " << endl;
					cout << "Press 1 for WINTER SPECIAL DEALS   RS 2600/-" << endl;
					cout << "it will include following dishes" << endl;
					cout << "1) CHICKEN CORN SOUP" << endl;
					cout << "2) WILD BEEF STEAK" << endl;
					cout << "3) FISH & CHIPS" << endl;
					cout << "4) TEMPURA PRAWN" << endl;
					cout << "5) MAC N CHEESE PASTA" << endl;
					cout << "6) FISH CHILLI DRY" << endl;
					cout << "7) CHICKEN & VEGETABLE CHOW MEIN" << endl;
					cout << "8) MINT MARGARITA" << endl << endl;
					cout << "Press 2 for ITALIAN PLATTER 1     RS 2500/-" << endl << endl;
					cout << "it will include following dishes" << endl;
					cout << "1) CHEF SP BEEF STEAK" << endl;
					cout << "2) MOROCCAN CHICKEN" << endl;
					cout << "3) FISH & FRIES" << endl;
					cout << "4) PENNE ALL ARRABIATA PASTA" << endl;
					cout << "5) MASHED POTATO" << endl;
					cout << "6) TARTAR SAUCE" << endl;
					cout << "7) SAUTEED VEGETABLES" << endl;
					cout << "8)  FRESH LEMONADE" << endl << endl;
					cout << "Press 3 for ITALIAN PLATTER 2     RS 2000/-" << endl << endl;
					cout << "it will include following dishes" << endl;
					cout << "1) ALFREDO PASTA" << endl;
					cout << "2) MEXICAN STEAK" << endl;
					cout << "3) TARRAGON CHICKEN" << endl;
					cout << "4) HONEY MUSTARD WINGS" << endl;
					cout << "5) FRESH LEMONADE" << endl;
					cout << "Press 4 for CHINESE PLATTER      RS 2800/-" << endl;
					cout << "1) SZECHUAN CHICKEN" << endl;
					cout << "2) VEGETABLE CHOW MEIN" << endl;
					cout << "3) CHICKEN CHILLI DRY" << endl;
					cout << "4) VEGETABLE FRIED RICE" << endl;
					cout << "5) FRESH LEMONADE" << endl << endl;
					int din0;
					cin >> din0;
					switch (din0) {
					case 1: {cout << "WINTER SPECIAL DEALS will be served " << endl;
						total_price += dinner[0];
						dinner_selection = 0;
						break;
					}
					case 2: {cout << "ITALIAN PLATTER 1 will be served ";
						total_price += dinner[1];
						dinner_selection = 1;
						break;
					}
					case 3: {cout << "ITALIAN PLATTER 2 will be served ";
						total_price += dinner[2];
						dinner_selection = 2;
						break;
					}
					case 4: {cout << "CHINESE PLATTER will be served ";
						total_price += dinner[3];
						dinner_selection = 3;
						break;
					}
					}
					cout << endl;
					Bill_Generator1(total, ent, flo, dinner, stag, stage_selection, entrance_selection, flower_selection, dinner_selection)
						;
				}
				cout << endl;
				cout << "Thanks for making us a part of your happiness." << endl;

				cout << "If you want to do another event then choose from the following options." << endl;
				break; }
			}
			}
		}

	}
	return 0;
}