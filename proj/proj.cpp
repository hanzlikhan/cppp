#include<iostream.h>
#include<conio.h>
void pasward(int num);
void main()
{
	clrscr();
	
	int n;

	cout<<"\tEnter password to login account =   ";

	cin>>n;
	pasward(n);
	getche();
}
void pasward(int num)
{
	
 
 if(num==7890)
{ 
 
 cout<<"\n\t      Congratulation you have successfully log in your acount";
 cout<<"\n\n\tAccout name is =  Aoun Shah "
        <<endl;
        cout<<"\n\n\tAccount ID no is = Aoun khan 12346    ";
        cout<<endl;
        cout<<"\n\tGmail account is =  @aounkhan1234567";
        cout<<"                     ";
        cout<<"                         ";}
  else
  {
  cout<<"\n\t Invalid pasward try again";
  cout<<endl;
  cout<<"\n \t Write correct password otherwise your account will be banned      ";
  cout<<endl;
cout<<"\n\tGmail account is =  @aounkhan1234567";
        cout<<"                     ";
        cout<<"                         ";}
  else
  {
  cout<<"\n\t Invalid pasward try again";
  cout<<endl;
  cout<<"\n \t Write correct password otherwise your account will be banned      ";
  cout<<endl;
  cout<<" \n\t Last warning   ";
  cout<<"                    ";
  cout<<"                     ";
  }


{
    double balance , deposit , withdraw ,transfer;
    int option ;
    balance =100;
    do
    {
    cout<<"\n\t**MEAN*";
    cout<<"\n\t*                 *";
    cout<<"\n\t*  1.check balance*";
    cout<<"\n\t*  2.depoit       *";
    cout<<"\n\t*  3.withdraw     *";
    cout<<"\n\t*  4.transfer     *";
    cout<<"\n\t*  5.exit         *";
    cout<<"\n\t*                 *";
    cout<<"\n\t*";
    cin>>option ;
    switch (option)
{
    case 1:
    cout<<"\n\tyour balance is:$"<<balance<<endl;
    break;
    case 2:
    cout<<"\n\t amount you want to deposit:$";
    cin>>deposit ;
    balance+=deposit ;
    cout<<"\n\t your current balance is:$"<<balance<<endl;
    break;
    case 3:
    cout<<"\n\t how much amount you want to withdraw ?";
    cin>>withdraw ;
    if(balance<withdraw)
   { cout<<"\n\t you have not enough money in your account to withdraw "<<endl;
    cout<<"\nPlease Enter money first        ";
    cout<<endl;}
    else 
    balance -=withdraw;
    cout<<"\n\t your current balance :$ "<<balance<<endl ;
    
    break ;
    case 4:
    cout<<"The amount you want to transfer   ";
    cin>>transfer;
    if(balance<transfer)
   { cout<<"\n\tYou have not enough money to    transfer    ";
    cout<<"\n\tPlease deposit first    ";}
    else
    
    balance-=transfer;
    cout<<"\n\t your current balance is $        ";
    cout<<balance<<endl;
    
    
    break ;
    default:
    if(option !=5)
    
    cout<<"\n\t invalid options please try again "<<endl;
    break;
    }
    }
     while(option !=5);
    

    getche();
}