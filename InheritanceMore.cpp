#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 60000; 
   int misno=99; 
   void sal()
   {
   	cout<<"Salary  :"<<salary<<endl;
   } 
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;
   void bon()
   {
   	cout<<"Mis No: "<<misno<<endl;
   	cout<<"Salary :"<<salary<<endl;
   	cout<<"Bonus :"<<bonus<<endl;
   }    
   };       
   class Admin: public Programmer {  
   public:  
   char name[20];
   char city[20];
   char mobile[10];
   void location()
   {
   	cout<<"Name: ";cin>>name;
   	cout<<"City :";cin>>city;
   	cout<<"Mobile :";cin>>mobile;
   }    
   };       
int main(void) {  
     Admin a; 
     
	 a.sal();  
	 cout<<"Programmer :  "<<endl;
	 a.bon(); 
	 cout<<"Admin :"<<endl;
	 a.location();
    return 0;  
}

