#include <iostream>
#include<windows.h>


using namespace std;

int ID=1;

/******************************************************************************************
*******************************************************************************************
                            >>>>>>>"Bus" Class Declaration<<<<<<< 
*******************************************************************************************
******************************************************************************************/

struct Bus
{
	
	string Colour,Model,Plate_No, Route;
	int fare;
	int Reserve_Seat, ID, status;
	
	
	int search(Bus arr[], int ID){		//Searching ID
		for(int i=0;i<51;i++){
			if(arr[i].ID == ID)
				return 1;
		}
		return 0;
	}
	
    Bus(){								//Constructor
    	Reserve_Seat=0;
    	Route = "NULL";
    	fare = 0;
	}
};

void Display_Screen();

/******************************************************************************************
*******************************************************************************************
                            >>>>>>>MAIN PROGRAM<<<<<<< 
*******************************************************************************************
******************************************************************************************/

int main(){
	Bus	b[50];
	
	int choice=1,c=0,l=1;
	string username="admin",password="123",Proposed_Username,Proposed_Password;
	
	
	int Bus_ID;
	string Colour,Model,Plate_No,Route;
	double fare;
	int Reserve_Seat, ID;
	
	Display_Screen();	
		while(l<4)						//Singing in Functionality
	{
		system("cls");
		cout<<"\t\t\t********************************"<<endl;
		cout<<"\t\t\t*     E-con BUS SERVICE    *"<<endl;
		cout<<"\t\t\t********************************"<<endl;
		cout<<endl;	
		
	    cout<<"\nEnter Username : ";
		cin>>Proposed_Username;
		cout<<"Enter Password : ";
		cin>>Proposed_Password;
		
		if(Proposed_Username==username && Proposed_Password== password)
		{
			c=1;
			break;
		}
			else
			cout<<"\nInvalid Usernamr or Password !!!!\n";
		system("pause");
		l++;
	}
	
	if(c==1)
	{
		while (choice!=5)
	    {
	    
		
		system("cls");
		cout<<"\t\t\t*************************"<<endl;
		cout<<"\t\t\t*      MAIN MENUE	*"<<endl;
		cout<<"\t\t\t*************************"<<endl;
		cout<<endl;	
		cout << "<1>. Manage Buses" << endl;
		cout << "<2>. Manage Customers" << endl;
	    cout << "<3>. Manage Finance " << endl;
		cout << "<4>. Manage Fares " << endl;
		cout << "<5>. Exit" << endl;
		cin >> choice;
		switch(choice)
	        {
		        case 1:								//Manage Buses
		            {
		            	int c1=0;
		            	while(c1!=7){
						system("cls");
						cout<<"\t\t\t*************************"<<endl;
						cout<<"\t\t\t*      Manage Buses	 *"<<endl;
						cout<<"\t\t\t*************************"<<endl;
						cout<<endl;	
						cout << "<1>. Add Bus" << endl;
						cout << "<2>. Delete Record" << endl;
						cout << "<3>. Modify Record" << endl;
						cout << "<4>. Define Bus Route " << endl;
						cout << "<5>. Update Bus Status " << endl;
						cout << "<6>. Update Routes " << endl;
						cout << "<7>. Exit" << endl;
						cin >> c1;
						switch(c1)
					        {
					        case 1:								//Adding Bus in List
				            	{
				            	system("cls");
				            	cout<<"\t\t\t********************************"<<endl;
					            cout<<"\t\t\t*    New Vehicle Form    *"<<endl;
					            cout<<"\t\t\t********************************"<<endl;
					            cout<<endl;
								cout<<"Enter Vehicle Model : ";
								cin>>b[ID].Model;
								cout<<"Enter Vehicle Colour : ";
								cin>>b[ID].Colour;
								cout<<"Enter Vehicle Plate No : ";
								cin>>b[ID].Plate_No;
								b[ID].ID = ID;
								ID++;
								break;
							}
				
							case 2:								//Deleting Bus
					            {
					            	int ID;
					            	string s;
									system("cls");
					            	cout<<"\t\t\t*****************************"<<endl;
						            cout<<"\t\t\t*      Deletion Pannel     *"<<endl;
						            cout<<"\t\t\t*****************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID To Delete : ";
					            	cin>>ID;
					            	cout<<"Are you sure to delete record (Y/N): ";
					            	cin>>s;
					            	if (s=="Y" || s=="y")
					            	{
						           		int c = b[ID].search(b,ID);
						            	if(c == 1)
						            	{
						            		b[ID].Colour = "NULL";
						            		b[ID].fare = 0;
						            		b[ID].Model = "NULL";
						            		b[ID].Plate_No = "NULL";
						            		b[ID].Route = "NULL";
						            		b[ID].Reserve_Seat --;
						            		
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									}
									system("pause");  
									break;
					        	}	
							case 3:								//Modifying BUs Info
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    Modification Form    *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID To Modify : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1)
						            	{
						            		cout<<"Enter Vehicle Model : ";
											cin>>b[ID].Model;
											cout<<"Enter Vehicle Colour : ";
											cin>>b[ID].Colour;
											cout<<"Enter Vehicle Plate No : ";
											cin>>b[ID].Plate_No;
											cout<<"Enter Vehicle Route : ";
											cin>>b[ID].Route;
											cout<<"Enter Vehicle Fare : ";
											cin>>b[ID].fare;
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
									}
							
							case 4:								//Setting Bus Route
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	ROUTE SETTING           *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID To Set Route : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1)
						            	{
						            		cout<<"Enter Vehicle Route : ";
											cin>>b[ID].Route;
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
									}	
				        case 5:								//Manage Buses
				            {
				            	system("cls");
				            	cout<<"\t\t\t********************************"<<endl;
					            cout<<"\t\t\t*    	Update Bus Status        *"<<endl;
					            cout<<"\t\t\t********************************"<<endl;
					            cout<<endl;
								cout<<">> Enter Bus ID to Check its Status : ";
				            	cin>>ID;
				            	int c = b[ID].search(b,ID);
					            	if(c == 1 && b[ID].Reserve_Seat==30)
					            	{
					            		cout<<"Bus ID "<<ID<<" isn't Avialabe\n . It is on Route : '"<<b[ID].Route;
									}
					            		
					            	else
					            		cout<<"\n>>>>	Bus didn't filled Completly !!!	<<<<\n\n";
								system("pause");
								break;
							}
				        
				        case 6:								//Manage Routes
				            {
				            	system("cls");
				            	cout<<"\t\t\t********************************"<<endl;
					            cout<<"\t\t\t*    	ROUTE SETTING           *"<<endl;
					            cout<<"\t\t\t********************************"<<endl;
					            cout<<endl;
								cout<<">> Enter Bus ID To Update Route : ";
				            	cin>>ID;
				            	int c = b[ID].search(b,ID);
					            	if(c == 1)
					            	{
					            		cout<<"Enter Vehicle Route : ";
										cin>>b[ID].Route;
						            }
					            		
					            	else if(c==0)
					            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
								system("pause");
								break;
				            }
				        case 7:								//Exiting From Program
				            {
								system("pause");   
				            	break;
				        	}
							
				        default:{
				            	cout<<">> Wrong Choice!!!! \n>> Enter Valid Choice"<<endl;		//Exiting From the Program
				            	system("pause");
				            	break;
							}
						}
					}
	            	break;
	            }
	        
	        case 2:								//Manage Customers
	            {
		            	int c1=0;
		            	while(c1!=4){
						system("cls");
						cout<<"\t\t\t*************************"<<endl;
						cout<<"\t\t\t*   Manage Customers    *"<<endl;
						cout<<"\t\t\t*************************"<<endl;
						cout<<endl;	
						cout << "<1>. Seat Reservation" << endl;
						cout << "<2>. Update Reservation " << endl;
						cout << "<3>. Cancel Reservation " << endl;
						cout << "<4>. Exit" << endl;
						cin >> c1;
						switch(c1)
					        {
					        case 1:								//Seat Reservation
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	Seat Reservation         *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID to Reserve Seat : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1 && b[ID].Reserve_Seat<31);
						            	{
						            		cout<<"Seat Reserved in Bus ID "<<ID;
											b[ID].Reserve_Seat++;
							            }
						            	
									system("pause");
									break;
									}
							case 2:								//Update Reservatiion
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	Update Reservation         *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID to Update Reservation : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1) 
						            	{
						            		cout<<"Reserved in Bus ID "<<ID<<" are : "<<b[ID].Reserve_Seat;
											b[ID].Reserve_Seat--;
												cout<<">> Enter Bus ID to Reserve Seat : ";
								            	cin>>ID;
								            	int c = b[ID].search(b,ID);
									            	if(c == 1) 
									            	{
									            		cout<<"Seat Reserved in Bus ID "<<ID;
														b[ID].Reserve_Seat++;
										            }
									            		
									            	else if(c==0)
									            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
										}
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
									}
									
							case 3:								//CAncel Reservation
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	Cancel Reservation         *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID to Cancel Seat : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1) 
						            	{
						            		cout<<"Seat Cancelled in Bus ID "<<ID;
											b[ID].Reserve_Seat--;
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
									}
					
					        case 4:								//Exiting From Program
					            {
									system("pause");   
					            	break;
					        	}
							
				        default:{
				            	cout<<">> Wrong Choice!!!! \n>> Enter Valid Choice"<<endl;		//Exiting From the Program
				            	system("pause");
				            	break;
							}
						}
					}
	            	break;
	            }
	        
			case 3:								//Manage Finance
	            {
		            	int c1=0;
		            	while(c1!=2){
						system("cls");
						cout<<"\t\t\t*************************"<<endl;
						cout<<"\t\t\t*      Manage Finance	 *"<<endl;
						cout<<"\t\t\t*************************"<<endl;
						cout<<endl;	
						cout << "<1>. Monthly Financial Report" << endl;
						cout << "<2>. Exit" << endl;
						cin >> c1;
						switch(c1)
					        {
					        case 1:								//Adding Bus in List
				            	{
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	Financial Report        *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									int sum =0;
									for(int i=1; i<=ID;i++){
										sum = sum + (b[i].Reserve_Seat * b[i].fare);
										
									}
									
									cout<<"\n>> Finace of Month : "<<sum<<"\n\n";
									system("pause");
									break;
							}
				
				        case 2:								//Exiting From Program
				            {
								system("pause");   
				            	break;
				        	}
							
				        default:{
				            	cout<<">> Wrong Choice!!!! \n>> Enter Valid Choice"<<endl;		//Exiting From the Program
				            	system("pause");
				            	break;
							}
						}
					}
	            	
	            	break;
	            }
	        case 4:								//Manage Fares
	            {
		            	int c1=0;
		            	while(c1!=3){
						system("cls");
						cout<<"\t\t\t*************************"<<endl;
						cout<<"\t\t\t*   Manage Fares        *"<<endl;
						cout<<"\t\t\t*************************"<<endl;
						cout<<endl;	
						cout << "<1>. Define Bus Fare " << endl;
						cout << "<2>. Update Fares " << endl;
						cout << "<3>. Exit" << endl;
						cin >> c1;
						switch(c1)
					        {
					        case 1:								//Seat Reservation
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	FARE SETTING           *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID To Set Fare : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1)
						            	{
						            		cout<<"Enter Vehicle Fare : ";
											cin>>b[ID].fare;
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
								}
							case 2:								//Update Reservatiion
					            {
					            	system("cls");
					            	cout<<"\t\t\t********************************"<<endl;
						            cout<<"\t\t\t*    	FARE SETTING           *"<<endl;
						            cout<<"\t\t\t********************************"<<endl;
						            cout<<endl;
									cout<<">> Enter Bus ID To Update Fare : ";
					            	cin>>ID;
					            	int c = b[ID].search(b,ID);
						            	if(c == 1)
						            	{
						            		cout<<"Enter Vehicle Fare : ";
											cin>>b[ID].fare;
							            }
						            		
						            	else if(c==0)
						            		cout<<"\n>>>>	Oops No Such Reg ID Exist !!!	<<<<\n\n";
									system("pause");
									break;
								}
									
							case 3:								//Exiting From Program
					            {
									system("pause");   
					            	break;
					        	}
							
				        default:{
				            	cout<<">> Wrong Choice!!!! \n>> Enter Valid Choice"<<endl;		//Exiting From the Program
				            	system("pause");
				            	break;
							}
						}
					}
	            	break;
	            
	            	
	            	break;
	            }
	        case 5:								//Exiting From program
	            {
				            	system("cls");
								cout<<"\t\t\t********************************"<<endl;
								cout<<"\t\t\t*    E-con BUS Service         *"<<endl;
								cout<<"\t\t\t********************************"<<endl;
								cout<<endl;	
				            	cout<<"\n\n>> Thanks for Using Services of Our Managment System\n\n";
								system("pause");   
				            	break;
				}
	        default:
	            {
	            	cout<<">> Wrong Choice!!!! \n>> Enter Valid Choice"<<endl;		//Exiting From the Program
	            	system("pause");
	            	break;
				}
	        }
	    }	
	}
	else
	{
		system("cls");
		cout<<"\t\t\t********************************"<<endl;
		cout<<"\t\t\t*    E-con BUS Service         *"<<endl;
		cout<<"\t\t\t********************************"<<endl;
		cout<<endl;	
	    cout<<"\n\n>> You aren't a registered User \n\n";
		system("pause");   
	}
	
	return 0;

}



/******************************************************************************************
*******************************************************************************************
                            >>>>>>>WELCOME SCREEN<<<<<<< 
*******************************************************************************************
******************************************************************************************/

void Display_Screen()				//WELCOME SCREEN
{
	int count=0;
     
cout<<endl;
cout<<"\t\t\t\t\t******************************\n"; 
cout<<"\t\t\t\t\t*         Wel Come           *\n";
cout<<"\t\t\t\t\t*            To              *\n"; 
cout<<"\t\t\t\t\t*    E-con BUS SERVICE       *\n";
cout<<"\t\t\t\t\t******************************\n";
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"\t\t\t\t\tLoading ";
   Sleep(100);
   cout<<"<"; 
   Sleep(100);
   cout<<">"; 
   Sleep(100);  
   cout<<"<"; 
      Sleep(100); 
   cout<<">"; 
   Sleep(100);
   cout<<"<"; 
   Sleep(100);
   cout<<">"; 
   Sleep(100);  
   cout<<"<"; 
      Sleep(100); 
   cout<<">"; 
   Sleep(100);
   cout<<"<"; 
      Sleep(100); 
   cout<<">"; 
   Sleep(100);
   cout<<"<"; 
      Sleep(100); 
   cout<<">"; 
   Sleep(100);
   cout<<"<"; 
      Sleep(100); 
   cout<<">"; 
   Sleep(100);
   cout<<"\n\n\t SUCCESSFULL\n";

   Sleep(2000);
   system("CLS");

}