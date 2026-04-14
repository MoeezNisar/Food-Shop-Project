#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
//           INFORMATION PAGE
int information(){
    string user_name;
	string gmail;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	cout<< "Enter Your Name: ";
	cin>>user_name;
	cout <<"\nEnter Your Gmail: ";
	cin>>gmail;
	system("cls");
	system("color 17");
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	cout<<"\n"<<endl;
	cout<<setfill(' ')<<setw(35)<<" "<<"ASSALAM-O-ALIKUM! "<<user_name<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	Sleep(1400);
	system("cls");
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	cout<<"\n\n\n"<<endl;
	cout<<setfill(' ')<<setw(40)<<" "<<"_____________________"<<endl;
	cout<<setfill(' ')<<setw(40)<<" "<<"|WELCOME TO FOOD MAX|"<<endl;
	cout<<setfill(' ')<<setw(40)<<" "<<"|___________________|"<<endl;
	cout<<"\n\n\n"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	Sleep(1500);
	system("cls");
}
//            FOR BURGER FUNTION
int burger(){
	int burger[5]={350,499,650,550,700};
	int price;
	cout<<setfill(' ')<<setw(38)<<" "<<"___________________"<<endl;
	cout<<setfill(' ')<<setw(38)<<" "<<"| TYPES OF BURGER |"<<endl;
	cout<<setfill(' ')<<setw(38)<<" "<<"|_________________|"<<endl;
	cout<<"\n"<<setfill('^')<<setw(121)<<" "<<endl;
	back:// FOR INVALID INPUT
	cout<<"1)ZINGER BURGER\n2)KARIZMA BURGER\n3)BEEF BURGER\n4)DOUBBLE BURGER\n5)CHEESE BURGER"<<endl;
	cout<<"\nEnter your order: ";
	int order;
	cin>>order;
	system("cls");
	if (order==1||order==2||order==3||order==4||order==5)
	{
	
	switch (order){
	case 1:
	system("cls");
	cout<<"price of Zinger burger is 350RS. ";
	
	int quantity;
cout<<"\nEnter your Quantity: ";
cin>>quantity;
price =burger[0]*quantity;
cout<<"\nYour total price is "<<price<<endl;	
   break;
    case 2:
    	system("cls");
	cout<<"Price of Karizma Burger is 499RS. ";
    
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =burger[1]*quantity;
cout<<"\nYour total price is "<<price<<endl;
	break;
	case 3:
		system("cls");
	cout<<"price of Beef Burger is 650RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =burger[2]*quantity;
cout<<"\nYour total price is "<<price<<endl;
	break;
	case 4:
		system("cls");
	cout<<"price of Doubble Burger is 550RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =burger[3]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	case 5:
		system("cls");
	cout<<"price of Cheese Burger is 700RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =burger[4]*quantity;
cout<<"\nYour Total price is "<<price<<endl;	
break;
}
}
else
{
		
		cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
		cout<<setfill('_')<<setw(120)<<"_"<<endl;
		goto back;
	}
}
// FOR   SHUWARMA FUNCTION
int shwarma(){
	int shwarma[5]={350,499,650,550,700};
	int price;
	    cout<<setfill(' ')<<setw(38)<<" "<<"___________________"<<endl;
		cout<<setfill(' ')<<setw(38)<<" "<<"|TYPES OF SHWARMA | "<<endl;
		cout<<setfill(' ')<<setw(38)<<" "<<"|_________________|"<<endl;
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
		back:
		cout<<"1)ZINGER SHWARMA\n2)CHIKEN SHWARMA\n3)BEEF SHWARMA\n4)MIX SHWARMA \n5)LAMP SHWARMA"<<endl;
	cout<<"Enter your Order: ";
	int order;
	cin>>order;
		system("cls");
	if (order==1||order==2||order==3||order==4||order==5)
	{
switch (order)
{   
    case 1: 
    system("cls");
	cout<<"price  of ZINGER SHWARMA is 350RS. ";
	
	int quantity;
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =shwarma[0]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
break;	
	case 2:
		system("cls");
	cout<<"price of CHIKEN SHWARMA is 499RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =shwarma[1]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
break;
	case 3:
		system("cls");
		cout<<"price of BEEF SHWARMA is 650RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =shwarma[2]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
break;
	case 4:
		system("cls");
		cout<<"price of MIX SHWARMA is 550RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =shwarma[3]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
break;	
	case 5:
		system("cls");
		cout<<"price of LAMP SHWARMA is 700RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =shwarma[4]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
break;
 }
}
 else
{
		
		cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
		cout<<setfill('_')<<setw(120)<<"_"<<endl;
		goto back;
	}	
}
// FOR PIZZA FUNCTION
int pizza(){
	int pizza[5]={1200,1599,1399,1199,1749};
	int price;
	cout<<setfill(' ')<<setw(38)<<" "<<"_________________"<<endl;
	cout<<setfill(' ')<<setw(38)<<" "<<"|TYPES OF PIZZA |"<<endl;
	cout<<setfill(' ')<<setw(38)<<" "<<"|_______________|"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	back:
	cout<<"\n1)BARBIQUE PIZZA\n2)SPECIAL PIZZA\n3)CHICKEN TIKKA PIZZA\n4)CHEESE PIZZA\n5)ROASTED VEGETABLE PIZZA"<<endl;
		cout<<"Enter your Order: ";
	int order;
	cin>>order;
		system("cls");
	if (order==1||order==2||order==3||order==4||order==5)
	{
switch (order)
	{
	case 1:
		system("cls");
	cout<<"price  of BARBIQUE PIZZA is 1200RS. ";
	
	int quantity;
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =pizza[0]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	case 2:
		system("cls");
		cout<<"price of SPECIAL PIZZA is 1599RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =pizza[1]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	case 3:
		system("cls");
		cout<<"price of CHICKEN TIKKA PIZZA is 1399RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =pizza[2]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	case 4:
	system("cls"); 
	cout<<"price of CHEESE PIZZA is 1199RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =pizza[3]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	case 5:
		system("cls");
	cout<<"price of ROASTED VEGETABLE PIZZA is 1749RS. ";
	
cout<< "\nEnter your Quantity: ";
cin>>quantity;
price =pizza[4]*quantity;
cout<<"\nYour Total price is "<<price<<endl;
	break;
	}
}
	else
{
		
		cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
		cout<<setfill('_')<<setw(120)<<"_"<<endl;
		goto back;
	}
}
//  FOR DEAL FUNCTION
int deal(){
	back:
	int deal[5]={2400, 2200, 2700,2750, 2599};
	    int price;
	    cout<<setfill(' ')<<setw(38)<<" "<<"_______________"<<endl;
		cout<<setfill(' ')<<setw(38)<<" "<<"|TYPES OF DEAL|"<<endl;
		cout<<setfill(' ')<<setw(38)<<" "<<"|_____________|"<<endl;
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
		wrong:
		cout<<"1)SPECIAL DEAL\n2)BUFFET DEAL\n3)SEAFOOD PLATTER\n4)KIDS MEAL DEAL\n5)HAPPY HOUR DEAL"<<endl;
			cout<<"To Check Specification of Deal: ";
			int Specification;
		    int order;
	        cin>>Specification;
	    system("cls");
	    	if (Specification==1||Specification==2||Specification==3||Specification==4||Specification==5)
	{
	        switch(Specification)
		{	
    case 1:
    	cout<<"1 SMALL PIZZA\n2 ZINGER BURGERS\n1 LITER COKE ";
    	invalid:
		cout<<"\nPrice of Deal is 2400RS. "<<endl;
		cout<<"\nFor Order press 1  OR  Move toward Back page press 0 ";
		cout<<"Enter your Choice: ";
		cin>>order;
		if(order==0){
			system("cls");
			goto back;
		}
		else if(order==1)
		{
		system("cls");
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	int quantity;
cout<< "Enter your Quantity of Deal: ";
cin>>quantity;
price = deal[0]*quantity;
			cout<<"\nYour Total price is "<<price<<endl;
		}
		else
		{
				system("cls");
			cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
				cout<<setfill('_')<<setw(120)<<"_"<<endl;
				goto invalid;
			
		}
	break ;
	case 2:
	    cout<<"1 SMALL PIZZA\n2 SHWARMA \n1 HALF LITER COKE"<<endl;
		cout<<"Price of Deal is 2350RS. "<<endl;
		cout<<"\nFor Order press 1 OR Move toward Back page press 0 "<<endl;
		cout<<"Enter your Choice: ";
		cin>>order;
		if(order==0){
			system("cls");
			goto back;
		}
		else if(order==1)
		{
		system("cls");
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	int quantity;
cout<< "Enter your Quantity of Deal: ";
cin>>quantity;
price =deal[1]*quantity;
			cout<<"\nYour Total price is "<<price<<endl;
		}
		else
		{
				system("cls");
			cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
				cout<<setfill('_')<<setw(120)<<"_"<<endl;
				goto invalid;
			
		}
    break;
	case 3:
	   	cout<<"4 SMALL PIZZA\n4 COKE CANE"<<endl;
		cout<<"Price of Deal is 2700RS. "<<endl;
		cout<<"\nFor Order press 1 OR Move toward Back page press 0"<<endl;
		cout<<"Enter your Choice: ";
		cin>>order;
		if(order==0){
			system("cls");
			goto back;
		}
		else if(order==1)
		{
		system("cls");
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	int quantity;
cout<< "Enter your Quantity of Deal: ";
cin>>quantity;
price =deal[2]*quantity;
			cout<<"\nYour Total price is "<<price<<endl;
		}
		else
		{
				system("cls");
			cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
				cout<<setfill('_')<<setw(120)<<"_"<<endl;
				goto invalid;
			
		}
    break;
	case 4:
		cout<<"2 PLATE FRIES\n4 SMALL PIZZA\1 LITTER COKE"<<endl;
		cout<<"Price of Deal is 2750RS. "<<endl;
		cout<<"\nFor Order press 1 OR Move toward Back page press 0"<<endl;
		cout<<"Enter your Choice: ";
		cin>>order;
		if(order==0){
			system("cls");
			goto back;
		}
		else if(order==1)
		{
			system("cls");
			cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	int quantity;
cout<< "Enter your Quantity of Deal: ";
cin>>quantity;
price =deal[3]*quantity;
			cout<<"\nYour Total price is "<<price<<endl;
		}
		else
		{
				system("cls");
			cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
				cout<<setfill('_')<<setw(120)<<"_"<<endl;
				goto invalid;
			
		}
    break;
	case 5:
		cout<<"2 MEDIUM PIZZA\n2 BURGGER \n2 HALF LITTER COKE"<<endl;
		cout<<"Price of Deal is 2599RS. "<<endl;
		cout<<"\nFor Order press 1 OR Move toward Back page press 0 "<<endl;
		cout<<"Enter your Choice: ";
		cin>>order;
		if(order==0){
			system("cls");
			goto back;
		}
		else if (order==1)
		{
			system("cls");
			cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	int quantity;
cout<< "Enter your Quantity of Deal: ";
cin>>quantity;
price =deal[4]*quantity;
			cout<<"\nYour Total price is "<<price<<"."<<endl;
		}
		else
		{
				system("cls");
			cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
				cout<<setfill('_')<<setw(120)<<"_"<<endl;
				goto invalid;
			
		}
	break;
}
}
else
{
		
		cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
		cout<<setfill('_')<<setw(120)<<"_"<<endl;
		goto wrong;
	}
}

//   WELLCOME  PAGE
int choice(){
	char key;
	
	
back:
	cout<<setfill(' ')<<setw(45)<<" "<<" ______ "<<endl;
	cout<<setfill(' ')<<setw(45)<<" "<<"| MENU |"<<endl;
	cout<<setfill(' ')<<setw(45)<<" "<<"|______| "<<endl;
    cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	
	cout<<"\n1)BURGERS\t\t2)SHWARMA\t\t3)PIZZA\t\t4)DEAL"<<endl;

int choice;
cout<<"\n\nENTER YOUR CHOICE:";
cin>>choice;
system("cls");
// RECALING FOR FUNCTION
if(choice==1)
{
	burger();
}
else if(choice==2)
{
	shwarma();
}
else if(choice==3)
{
   pizza();		
}
else if(choice==4)
{
  deal();
}
else 
{
	system("cls");

	cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
	cout<<setfill('_')<<setw(120)<<"_"<<endl;
	goto back;
}
}
// PAYMENT FUNCTION
int payment()
{
	int method ;
	back:
	cout<<setfill(' ')<<setw(26)<<""<<"\nSir/Madam, Please Select your Payment Method."<<endl;
	cout<<"Press 1 for Cash.\nPress 2 for Online Payment."<<endl;
	cout<<"\nEnter your choice: ";
	cin>>method;
	system("cls");
	
	if(method==1)
	{  
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	cout<<"\n"<<endl;
	cout<<setfill(' ')<<setw(35)<<" "<<"WAITING SIR/MADAM PLEASE"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	Sleep(4000);
	system("cls");
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
		cout <<"\t\t\t\nYour Cash is Received.\n\n"<<endl;
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t_____________________"<<endl;
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t|THANK YOU SIR/MADAM|"<<endl;
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t|___________________|"<<endl;
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	}
	else if(method==2)
	{
		cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	cout<<"\n"<<endl;
	cout<<setfill(' ')<<setw(35)<<" "<<"WAITING SIR/MADAM PLEASE"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	Sleep(2000);
	system("cls");
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
			cout <<"Your Online Payment is Received\n\n"<<endl;
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t_____________________"<<endl;	
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t|THANK YOU SIR/MADAM|"<<endl;
		cout<<setfill(' ')<<setw(26)<<""<<"\t\t|___________________|"<<endl;
	cout<<"\n"<<setfill('*')<<setw(121)<<" "<<endl;
	}
	else 
	{
		system("cls");

	cout<<"\t\t\t\t\t\tINVALID INPUT TRY AGAIN"<<endl;
	cout<<setfill('_')<<setw(120)<<"_"<<endl;
	goto back;
	}
}
//  MAIN FINCTION
int main(){
char i;
	do{
	system("cls");
	information();
	choice();
	payment();
	cout<< "\n\n\t\t\tpress # for proceed it again"<<endl;
	cin>>i;
}while(i=='#');
}


