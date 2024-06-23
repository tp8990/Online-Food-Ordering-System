#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>

using namespace std;
class one
{


public:
	void menu1();

};
void one::menu1()
{

    cout<<"\n\n\n\t\t\t======== FOOD ORDERING SYSTEM ========"<<endl;
	cout<<"\n\n\t\t\t\t== YOU CAN ORDER NOW =="<<endl;
	cout<<"\n\n\n\t============================================================="<<endl;
	cout<<"\n\t[1] Tandoori Cheese Burger(Rs.120)  [2] Cheese Cake(Rs.200)  [3] Chicken Finger with Fries(Rs.370)\n\n\t[4] Paneer 65(Rs.300)\t[5] Fried Momos(Rs.60)\t[6] Shawarma(Rs.100)\n\n\n\n\t\t\t\t   [7] Exit";
    cout<<"\n\n\t============================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int order,ch,a,b,c,d,e,f,s=0,ch1,p,pin,pay;
		 long num;
     string y,ye,id;
     public:
void menu2(){
    ofstream write;
    write.open("receipt.text");
    if(!write){
        cout<<"file can not open"<<endl;
        exit (-1);
    }
a:
    b:
        c:
   	 cout<<"\n\n\tEnter your order: ";
      cin>>ch;


  cout<<"\n\n\tDo you want to change your mind? (y/n) :";

  cin>>ye;

  if(ye=="y"|| ye=="Y"){
  	goto c;
  }else{
   switch(ch){
   	case 1:
   			cout<<"\n\n\tHow many orders? :";
   		cin>>order;

   		a=120;
   		s=s+a*order;
   		cout<<"You order Tandoori Cheese Burger: Rs.120";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Tandoori Cheese Burger. Sucessfully save order!"<<endl;
   	break;

   	case 2:
   		cout<<"\n\n\tHow many orders? :";
   		cin>>order;

        b=200;
   		s=s+b*order;
   		cout<<"You order Cheese Cake: Rs.200";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Cheese Cake. Sucessfully save order!"<<endl;
   	break;

   	case 3:
   		cout<<"\n\n\tHow many orders? :";
   		cin>>order;

   		c=370;
   		s=s+c*order;
   		cout<<"You order Chicken Finger with Fries: Rs.370";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Chicken Finger with Fries. Sucessfully save order!"<<endl;
   	break;

   	case 4:
   		cout<<"\n\n\tHow many orders? :";
   		cin>>order;

   		d=300;
   		s=s+d*order;
   		cout<<"You order Paneer 65: Rs.300";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Paneer 65. Sucessfully save order!"<<endl;
   	break;

   	case 5:
   		cout<<"\n\n\tHow many orders? :";
   		cin>>order;

   		e=60;
   		s=s+e*order;
   		cout<<"You order Fried Momos: Rs.60";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Fried Momos. Sucessfully save order!"<<endl;
   	break;

   	case 6:
   		cout<<"\n\n\tHow many orders? :";
   		cin>>order;

   		f=100;
   		s=s+f*order;
   		cout<<"You order Shawarma: Rs.100";
   		write<<"\n";
   		write<<"Number of order is: "<<order;
   		write<<"\n";
        cout<<"\n\n\n\tYou order Shawarma. Sucessfully save order!"<<endl;
   	break;

   	case 7:
   		cout<<"\n\tGoodbye.....";
   	exit(0);
   	break;

   	default:
   		cout<<"\n\n\tYou enter wrong keyword !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDo you want to order again? (yes/no) :";
   cin>>y;
   if(y=="yes")
   {
   	goto a;
   }
   else if(y=="no")
   {
   	cout<<"\n\tTHANK YOU FOR ORDERING! GENERATING BILL ";
   
   }
}

system("clear");
						cout << "\n\t\t================================================"<<endl;
						cout << "\n\t\t|              Food Ordering System            |"<<endl;
						cout << "\n\t\t================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\tBill No : STP1           Order : SPG2022"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\tCashier :  Trishita Paul"<<endl;
						cout << endl;
                        cout<<"\n\n\t\tTotal bill is : Rs."<<s<<endl;
                        write<<"\n\n";
                        write<<"Total: "<<s;
						cout << "\n\t\t================================================"<<endl;


cout<<"\n\nHow do you want to pay?\n1.Debit card /Credit card \n2.Cash on delivery  \n3.online pay\n";
cin>>ch1;
switch(ch1){
    case 1:
    cout<<"Enter 16-digit Debit card number :";
    cin>>num;
    cout<<"\nEnter CVV/CCD : ";
     cin>>p;
    cout<<"Enter Your Pin: ";
     cin>>pin;
    cout<<"\npayment successful\n\nOrder will be delivered by 40 mins";
    break;
    
    case 2:
    cout<<"Order Confirmed\n\nOrder will be delivered by 40 mins";
    break;
    
    case 3:
    cout<<"1.Google pay\n 2.Paytm\n 3.PhonePay\n";
    cin>>pay;
    cout<<"UPI id: ";
    cin>>id;
    cout<<"Enter Your Pin: ";
    cin>>pin;
    cout<<"\n\n payment successful\n\nOrder will be delivered by 40 mins";
    break;
}
  write.close();
  }

  void show1(){
  	menu1();
  	menu2();
  }

};

int main(){


    two ob;
    ob.menu1();
    ob.menu2();
    getch();

}
