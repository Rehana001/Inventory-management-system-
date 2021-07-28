#include<dos.h>
#include<conio.h>
#include<iostream>
#include<string>
#include <fstream>
#include <sstream>
using namespace std;
//   declarations of functions
int search(int);
void searching();
int display();
string check(int);       //   for checking quantity
void beg();
void end();
void delPro();
void modify();
void saveOnFile();
int display();
void OldProducts();
void buy();
void loading();
void showbill();

//   build a node  

struct node {
	int ID;
	string proName;
	double prePrice;            //   product price
	int quantity;
	struct    node* next;

};
struct node *head = NULL;
// for entering(saving) 1st record in list


//Main function 
int main()
{
	cout << "       __        __  ________ _           ________      _________     _____ ____    _______    \n";
	cout << "       |          |  | ____|  |          |        |    |         |   |     |    |  | ______|    \n";
	cout << "       |          |  | |__    |          |             |         |   |     |    |  | |__         \n";
	cout << "       |          |  |  __|   |          |             |         |   |          |  |  __|         \n";
	cout << "       |     |    |  | |____  |          |             |         |   |          |  | |____         \n";
	cout << "       |____ |____|  |______  |______|   |________|    |_________|   |          |  | ______|        \n";


	cout << endl;
	cout << endl;

	system("color 0a");
	char c = ' ';
	string pass = "";
	cout << "****Please Enter the Password******" << endl;
	while (c != 13) {
		c = _getch();
		if (c != 13)
		{
			pass += c;
			cout << "*";
		}
	}


	if (pass == "pak123")
	{

		system("cls");
		loading();
		system("cls");



		cout << "<<<<<<<<<<<<<<<<<<<<<<<<   Inventory   >>>>>>>>>>>>>>>>>>>>\n";
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<   Management  >>>>>>>>>>>>>>>>>>>>\n";
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<   System      >>>>>>>>>>>>>>>>>>>>\n\n \t\t\t\t\t\t\n";  // message
																								   // cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";              //  on console
	checkpoint:



		int temp = 1;
		//while(true)
		{
			int ch;                     //            choice for below message


			cout << "******MENU*********\n\n";

			cout << "\tEnter 1 to Add a new product \n\n";

			cout << "\tEnter 2 to Display all products \n\n";

			cout << "\tEnter 3 to Modify Existing product\n\n";

			cout << "\tEnter 4 to Delete a particular product item\n\n";

			cout << "\tEnter 5 to Buy something\n\n";

			cout << "\tEnter 6 to search something\n\n";

			cout << "\tEnter 7 to show old bill record\n\n";

			cout << "\tEnter 0 to exit\n\n";
			cout << "\n******************\n\n\tYour Choice:";
			cin >> ch;


			switch (ch) {
			case 1:
				system("cls");
				if (temp == 0)
				{              //    Second time and onwarda this is only executed 
					end();
				}
				if (temp == 1) {               //    this will be executed only one time
					beg();
					temp = 0;
				}
				goto checkpoint;
				break;
			case 2:
				system("cls");
			retry:
				cout << "1>> to show old products that are saved in file\n";
				cout << "2>> to save current products on file\n";
				cout << "3>> to Show Existing Items\n";
				cout << "4>> for main menu item\n";
				int c;
				cin >> c;
				if (c == 1)
				{

					system("cls");
					OldProducts();
					goto retry;
					break;
				}
				if (c == 2)
				{
					system("cls");
					saveOnFile();
					goto retry;
					break;
				}
				if (c == 3)
				{

					system("cls");
					display();
					goto retry;
					break;
				}
				if (c == 4)
				{
					system("cls");
					goto checkpoint;
					break;
				}
			case 3:
				system("cls");
				modify();

				goto checkpoint;
				break;
			case 4:
				system("cls");
				delPro();
				goto checkpoint;
				break;
			case 5:
				system("cls");
				buy();
				char resp;
				cout << "Do you want to Go to the main menu? y/n" << endl;
				cin >> resp;
				if (resp == 'y' || resp == 'Y')
				{
					system("CLS");
					goto checkpoint;
				}
				break;

			case 6:
				system("cls");
				searching();
				char res;
				cout << "Do you want to Go to the main menu? y/n" << endl;
				cin >> res;
				if (res == 'y' || res == 'Y')
				{
					system("CLS");
					goto checkpoint;
				}
			case 7:
				system("cls");
				showbill();
				char response;
				cout << "Do you want to Go to the main menu? y/n" << endl;
				cin >> response;
				if (response == 'y' || resp == 'Y')
				{
					system("CLS");
					goto checkpoint;
				}
				break;


			case 0:

				system("cls");

				cout << "\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
				cout << "@@ ___________________________ @@\n";
				cout << "@@|                                           		                             |@@\n";
				cout << "@@|                                           		                             |@@\n";
				cout << "@@|                                           		                             |@@\n";
				cout << "@@|                               THANK YOU FOR USING                              |@@\n";
				cout << "@@|                                                                                |@@\n";
				cout << "@@|                            Inventory Managment System                             |@@\n";
				cout << "@@|                                                                                |@@\n";
				cout << "@@|                                                                               |@@\n";
				cout << "@@|                                                                               |@@\n";
				cout << "@@|                                                                               |@@\n";
				cout << "@@|                                                                               |@@\n";
				cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t";
			}
		}

	}

	else {
		cout << "sorry wrong pass";
	}
}


void beg()

{
	char response;
	system("cls");
	int id, quant;           //  quant    for quantity
	string name;
	double pre;            //  pre for price
	struct node *t = new node;
	cout << "\t\t\tEnter product ID:-";
	cin >> id;
	t->ID = id;
	cout << "\t\t\tEnter product Name:-";
	cin >> name;
	t->proName = name;
	cout << "\t\t\tEnter product price:-";
	cin >> pre;
	t->prePrice = pre;
	cout << "\t\t\tEnter product quantity:-";
	cin >> quant;
	t->quantity = quant;
	t->next = head;
	head = t;
	system("cls");
	cout << "\n\n\t\t\t\tThis product is Inserted!\n\n\n";
}
// for entering(saving) 2nd and onward records in list
void end()

{
	system("cls");
	int id, quant;      //   quant for quantity
	string name;
	double pre;            //  pre for price
	struct node *t = new node;
	struct node *p = head;
	cout << "\t\t\tEnter product ID:-";
	cin >> id;
	t->ID = id;
	cout << "\t\t\tEnter product Name:-";
	cin >> name;
	t->proName = name;
	cout << "\t\t\tEnter product price:-";
	cin >> pre;
	t->prePrice = pre;
	cout << "\t\t\tEnter product quantity:-";
	cin >> quant;
	t->quantity = quant;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = t;
	t->next = NULL;
	system("cls");
	cout << "\n\n\t\t\t\tThis product is Inserted!\n\n\n";
}
void delPro()
{
	system("cls");
	display();
	int id;
	struct node *cur = head;
	struct node *pre = head;
	cout << "\n\nEnter ID to delete that product:\n\n";
	cin >> id;
	if (head == NULL)
	{
		system("cls");
		cout << "List is empty" << endl;
	}
	int pos = 0;
	int count = display();     //   to load no of nodes 
	pos = search(id);       //   to check weather desire node exists or not    
	while (pos <= count) {

		if (cur->ID == id) {
			break;
		}
		else
		{

			//  to delete middle area products
			pre = cur;
			cur = cur->next;
		}

	}
	if (cur == NULL)
	{
		cout << "\n<<<Product Not found>>\n\n";
	}
	else
	{
		pre->next = cur->next;
		head = pre->next;
		system("CLS");
		cout << "\n<<item is Deleted>>\n";
	}

}

// modify the name and price
void modify()
{
	int id;
	double pre;        //    pre for price
	string pName;      //   pName for new name
	if (head == NULL)
	{
		system("cls");
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "\n\nEnter ID to modify product Name and its price:\n";
		cin >> id;
		struct node *cur = head;
		int pos = 0;
		int count = display();     //   for load no of nodes 
		pos = search(id);      //   for check weather desire node is exist or not    
		if (pos <= count)
		{

			while (cur->ID != id)
			{
				cur = cur->next;
			}
			cout << "\nOld Name : " << cur->proName;
			cout << "\nOld Price : " << cur->prePrice << endl;
			cout << "Enter new Name:";
			cin >> pName;
			cur->proName = pName;
			cout << "Enter new Price:";
			cin >> pre;
			cur->prePrice = pre;
		}
		else
		{
			cout << id << " is <<<Not found>>\n\n";
		}
	}
}
// save in fili text in .text
void saveOnFile()
{
	system("cls");

	ofstream myfile("Products Record.txt");

	if (myfile.is_open())
	{
		myfile << "ID \t\t Product Name \t\t Price \t\t Quantity \n";
		struct node *p = head;
		int c = 0;          //   c for count products
		while (p != NULL)
		{
			myfile << p->ID << "\t\t" << p->proName << "\t\t\t" << p->prePrice << "\t\t" << check(p->quantity) << "\n";
			p = p->next;
			c = c + 1;
		}
		myfile << "\nTotal products in our store is : " << c;
	}
	myfile.close();
	system("cls");
	cout << "\n\n\t\t\tFile saved!\n";
}
//display all product
int display()
{
	//	setColor(14);
	system("cls");
	int c = 0;             //   c for count products
	struct node *p = head;
	cout << "Existing products are:\n";
	cout << "ID\t\tProduct Name\t\tPrice\t\tQuantity\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~`" << endl;
	while (p != NULL)
	{
		cout << p->ID << "\t\t" << p->proName << "\t\t\t\t" << p->prePrice << "\t\t" << check(p->quantity) << "\n"; //    call   check func and pass quantity
		p = p->next;
		c = c + 1;
	}
	cout << "\nTotal products in our store is : " << c << "\n\n\n";
	return c;
}

string check(int quant) {              //        check function  
	int a = quant;
	stringstream ss;
	ss << a;
	string quantity = ss.str();

	if (quant <= 0)
		return "out of stock!";
	else
		return quantity;

	system("cls");
}
// old product fetching through filing
void OldProducts()
{
	system("cls");
	string line;
	ifstream myfile("Products Record.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << "\n";
		}
		cout << "\n\n";
		myfile.close();
	}
	else cout << "Unable to open file\n\n";
}
void showbill()
{
	system("cls");
	string line;
	ifstream myfile("billrecord.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << "\n";
		}
		cout << "\n\n";
		myfile.close();
	}
	else cout << "Unable to open file\n\n";
}
// product buying 		
void buy()
{
C:
	system("cls");
	string products[20]; //   for displaying sold items
	int pay = 0, no, c = 0, price, id, i = 1;
	if (head == NULL)
	{
		system("cls");
		cout << "No Product to Buy" << endl;
	}
	else
	{
		cout << "How many items do you want to buy!\n";
		cin >> no;
		int count = display();
		while (i <= no)
		{
			struct node *cur = head;

			int quant, cho;              //   quant   for quantity  and cho for choice
			cout << "Enter ID of item that you want to buy: ";
			int id, pos = 0;
			cin >> id;
			pos = search(id);
			if (pos <= count)
			{
				//     item is available in store
				while (cur->ID != id)
				{
					cur = cur->next;
				}

				cout << "How many quantities do you want:";
				cin >> quant;
				products[c] = cur->proName; c++;
				pay = pay + (cur->prePrice*quant);         //     calculate Bill
														   //cout<<"your bill is : "<<pay;	
				cur->quantity = cur->quantity - quant;           //    change quantity	
				char res;
				cout << "Do you want to purchase again? y/n" << endl;
				cin >> res;
				if (res == 'y' || res == 'Y')
				{
					i++;
					goto C;
				}
				else {
					system("cls");
					cout << "\n\n\n\n\t\t\tYou have bought : ";
					for (int i = 0; i < no; i++)
					{              //    show that item you have bought
						cout << products[i] << ",";
					}
					ofstream os("billrecord.txt", ios::out | ios::app);
					price = pay * (0.95);           //    with 5% discount
					cout << "\n\Product id :      " << id;
					cout << "\n\nOriginal price : " << pay;
					cout << "\n with 5% discount: " << price << "\nThank you! for the shopping\n\n";
					os << "\n\Product id :      " << id;
					os << "\n\nOriginal price : " << pay;
					os << "\n with 5% discount: " << price;

					os.close();
					char v;
					cout << "Do you want to go to the main menu? y/n " << endl;
					cin >> v;
					if (v == 'Y' || v == 'y')
					{
						break;
					}
					else {
						goto C;
					}
				}
			}
			else
			{
				cout << "\n<<<<<<<<<This item is not available in our store at this time>>>>\n\n";

			}

		}
	}

}
// searching 
int search(int id)                     //   to search item in list
{
	int count = 1;
	struct node *p = head;
	while (p != NULL)
	{
		if (p->ID == id)
			break;
		else
			count++;
		p = p->next;
	}

	return count;
}
void searching()                     //    for search item in list
{
	int id;
	double pre;        //    pre for price
	string pName;      //   pName for new name
	if (head == NULL)
	{
		system("cls");
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "\n\nEnter ID to search product Name and its price:\n";
		cin >> id;
		struct node *cur = head;
		int pos = 0;
		int count = display();     //   for load no of nodes 
		pos = search(id);      //   for check weather desire node is exist or not    
		if (pos <= count)
		{

			while (cur->ID != id)
			{
				cur = cur->next;
			}
			cout << "\n Name : " << cur->proName;
			cout << "\n Price : " << cur->prePrice << endl;
		}
		else
		{
			cout << id << " is <<<Not found>>\n\n";
		}

	}

}



void loading()
{

	system("color 0a");
	cout << "\n\n\n\t\t\t\tLoading....Please Wait!\n\n";
	char a = 177, b = 219;
	cout << "\t\t\t\t";
	for (int i = 0; i <= 15; i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t";
	for (int i = 0; i <= 15; i++)
	{
		cout << b;
		for (int j = 0; j <= 1e7; j++); //This loop is used here as a Sleep() function
	}

}
