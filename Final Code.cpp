#include<iostream>
#include<windows.h>

using namespace std;
		
		
COORD coord = {0, 0};
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
border()
{
for(int i=3;i<=79;i++) 
{
gotoxy(i,3); 
printf("%c",219);
gotoxy(78,45);
printf("%c",219);
gotoxy(i,45);
printf("%c",219);
}
for(int i=3;i<=45;i++) 
{ 
gotoxy(3,i);
printf("%c",219);
gotoxy(79,i);
printf("%c",219);
}
}
void clr()
{
	for(int i=0;i<=40;i++)
	{
		
	
	gotoxy(0,i);
	//cout<<"\n\n\n\n\t    -----------------------------------------------------------------\n\n\n";
    cout<<"\n\n\n\n\t                                                                     \n\n\n";
	
	}

}

class MedicalStore
{
	public:
		void time();
		int menu();
};
void MedicalStore::time()
{
	gotoxy(55,40);
	cout<<"Date: 02/12/2020 "<<endl;
	gotoxy(55,42);
	cout<<"Time: 01:23:54"<<endl;
}

void press()
{
	MedicalStore ob;
			 string g;
	         gotoxy(20,35);
             cout<<"Press any key to exit!!    ";
             cin>>g; 
             if(g!=".")
             { 
	            clr();
        	    border();
            	ob.menu();
	         }
}

class supplier
{
	//supplier ob1;
	public:
	long int supplier_id[100]={234,85,24,67};
	string supplier_name[100]={"labororatory","lifescience","fantom","lifesaver"};
	string supplier_city[100]={"pune","satara","sangli","mumbai"};	
	long int supplier_no[100]={8797934773,646246436,765468346,7165147574};
	string supplier_mail[100]={"labororatory@gmail.com","lifescience@yahoo.com","fantom@gmail.com","lifesaver@yahoo.com"};
		
	public:	
	     long int total_supp;
	     int loc;
    public:
    	void update_supp();
    	void delete_supp();
    	void list_supp();
    	void search_supp();

	public:
		void add_supplier()
		{
		MedicalStore ob;	
	    gotoxy(18,8);
        printf("***************SUPPLIER ENTRY**************");
	
	    gotoxy(15,15);
	cout<<"Enter total no. of suppliers to be added..";
	cin>>total_supp;
	clr();
	border();
	int loc=4;
	for(int i=0;i<total_supp;i++)
	{
		
	
	gotoxy(5,13);
	cout<<"SUPPLIER ID :  ";
	cin>>supplier_id[loc];
	gotoxy(39,13);
    cout<<"SUPPLIER NAME : ";
    cin>>supplier_name[loc];
    gotoxy(8,18);
	cout<<"CITY : ";
	cin>>supplier_city[loc];
	gotoxy(39,18);
	cout<<"CONTACT NO. : ";
	cin>>supplier_no[loc];
	gotoxy(8,23);
	cout<<"EMAIL ID : ";
	cin>>supplier_mail[loc];
	clr();
	border();
	loc++;
	}
	string ch;
	gotoxy(29,35);
	cout<<"Want to Save??(y/n) -  ";
	cin>>ch;
	string yes="y";
	string y="Y";
	string no="n";
	string n="N";
	if(ch==yes|| ch==y)
	{
		clr();
		border();
		gotoxy(5,5);
		cout<<"Supplier Added Succefully!!!"<<endl;
		
//    	gotoxy(5,8);
//	    cout<<"------------------------------------------------------------------------"<<endl;
//    	gotoxy(5,10);
//	    cout<<"|  ID   |  supplier Name  |  city  |  phone no  |  Email  |"<<endl;
//		gotoxy(5,12);
//
//    	cout<<"------------------------------------------------------------------------"<<endl;
//
//       	for(int i=0;i<=loc-1;i++)
//	    {
//		cout<<"     ";
//		cout<<"|  "<<supplier_id[i]<<"  |  "<<supplier_name[i]<<"  |  "<<supplier_city[i]<<"  |  "<<supplier_no[i]<<"  |  "<<supplier_mail[i]<<endl<<endl;
//		cout<<endl;
//	    }
//	
      //  ob1.list_supp();
      	}
	else if(ch==no||ch==n)
	{
		clr();
		border();
		gotoxy(35,20);
		cout<<"Thank you!!!"<<endl;
		ob.menu();
		
	}
	else
	{
		clr();
		border();
		gotoxy(35,35);
		cout<<"Invalid Choice!!!"<<endl;
		ob.menu();
	
	}
    }
    
};
void supplier::search_supp()
{
	
	int last=total_supp+4;
	long int search;
	gotoxy(15,18);
	cout<<"Enter supplier id to be search..";
	cin>>search;
	
	for(int j=0;j<last-1;j++)
	{
		if(search==supplier_id[j])
		{
			clr();
			border();
			gotoxy(18,15);
			cout<<"Supplier Found!!";
			for(int k=0;k<last-1;k++)
			{
				gotoxy(15,20);
				cout<<"Supplier ID: "<<supplier_id[j];
				gotoxy(15,22);
				cout<<"Supplier Name: "<<supplier_name[j];
				gotoxy(15,24);
				cout<<"Supplier city: "<<supplier_city[j];
				gotoxy(15,26);
				cout<<"Supplier Phone no: "<<supplier_no[j];
				gotoxy(15,28);
				cout<<"Supplier Email: "<<supplier_mail[j];
				
			}
			return;
			
		}
		else
		{
			clr();
			border();
			gotoxy(18,15);
			cout<<"Supplier Not found!!";
        }
	}
	
}
void supplier::update_supp()
{
	int last=total_supp+4;
	long int update;
	gotoxy(15,18);
	cout<<"Enter supplier id to be update..";
	cin>>update;
	for(int j=0;j<last-1;j++)
	{
		if(update==supplier_id[j])
		{
			clr();
			border();
			gotoxy(20,12);
			cout<<"Supplier INFORMATION!!";
			for(int k=0;k<last-1;k++)
			{
				gotoxy(15,15);
				cout<<"Supplier ID: "<<supplier_id[j];
				gotoxy(15,17);
				cout<<"Supplier Name: "<<supplier_name[j];
				gotoxy(15,19);
				cout<<"Supplier city: "<<supplier_city[j];
				gotoxy(15,21);
				cout<<"Supplier Phone no: "<<supplier_no[j];
				gotoxy(15,23);
				cout<<"Supplier Email: "<<supplier_mail[j];
				
			}
			string up;
			gotoxy(12,26);
			cout<<"What do you want to update? ";
			gotoxy(12,27);
			cout<<"(i-id; n-name; c-city; p-phone no; e-email).. ";
			cin>>up;
			string i="i";string I="I";
			string n="n";string N="N";
            string c="c";string C="C";
			string p="p";string P="P";
		    string e="e";string E="E";
			  			
			if(up==i||up==I)
			{
				long int up_id;
				
				gotoxy(15,30);
				cout<<"Enter new ID: ";
				cin>>up_id;
				supplier_id[j]=up_id;
			}
			else if(up==n||up==N)
			{
				string name_up;
				gotoxy(15,30);
				cout<<"Enter new NAME: ";
				cin>>name_up;
				supplier_name[j]=name_up;
			}
			else if(up==c||up==C)
			{
			  	string city_up;
				gotoxy(15,30);
				cout<<"Enter new CITY: ";
				cin>>city_up;
				supplier_city[j]=city_up;
		    }
		    else if(up==p||up==P)
		    {
				long int phone_up;
				gotoxy(15,30);
				cout<<"Enter new Phone no: ";
				cin>>phone_up;
				supplier_no[j]=phone_up;
		    }
		    else if(up==e||up==E)
		    {
				string mail_up;
				gotoxy(15,30);
				cout<<"Enter new Email: ";
				cin>>mail_up;
				supplier_mail[j]=mail_up;
		    }
		    else
		    {
				gotoxy(15,30);
				cout<<"Invalid Choice!!";
				

			}
			gotoxy(19,33);
		    cout<<"Data Updated Succefully!!";
		    
			return;
			
		}
		else
		{
			clr();
			border();
			gotoxy(18,15);
			cout<<"Supplier Not found!!";
        }
	}
	
}
void supplier::list_supp()
{
	
	int last=total_supp+4;
	
	
    	gotoxy(5,8);
	    cout<<"------------------------------------------------------------------------"<<endl;
    	gotoxy(5,10);
	    cout<<"|  ID   |  supplier Name  |  city  |  phone no  |  Email  |"<<endl;
		gotoxy(5,12);

    	cout<<"------------------------------------------------------------------------"<<endl;

       	for(int i=0;i<=last-1;i++)
	    {
		cout<<"     ";
		cout<<"|  "<<supplier_id[i]<<"  |  "<<supplier_name[i]<<"  |  "<<supplier_city[i]<<"  |  "<<supplier_no[i]<<"  |  "<<supplier_mail[i]<<endl<<endl;
		cout<<endl;
	    }
	    
		
}
void supplier::delete_supp()
{
	int last=total_supp+4;
	long int del;
	gotoxy(15,18);
	cout<<"Enter supplier id to be Deleted..";
	cin>>del;
	
	for(int j=0;j<last-1;j++)
	{
		if(del==supplier_id[j])
		{
			clr();
			border();
			gotoxy(18,15);
			cout<<"Supplier Deleted Successfully!!";
     		return;
			
		}
		else
		{
			clr();
			border();
			gotoxy(18,15);
			cout<<"Supplier Not found!!";
        }
	}
	
	
}
void supplier_menu()
{

	supplier ob1;
	
	MedicalStore ob;
	gotoxy(10,5);
	cout<<"\t********************SUPPLIER********************";
	
	ob1.add_supplier();
    ob1.list_supp();
    string g;
	 gotoxy(20,35);
     cout<<"Press any key to exit!!    ";
     cin>>g;
     if(g!=".")
    {
	clr();
	border();
	}
	char ch;
	gotoxy(15,10);
	cout<<"==SUPPLIER MENU==";
	
	gotoxy(40,20);
    
	cout<<"\n          A. Update supplier"<<endl;
	cout<<"\n          B. Delete supplier"<<endl;
	cout<<"\n          C. Search supplier"<<endl;
	cout<<"\n          D. List of Exsiting supplier"<<endl;
	cout<<"\n          E. Exit to Main menu."<<endl;
	
	gotoxy(30,35);	
	cout<<"Enter your choice variable(A,B,C,D)...";
	cin>>ch;
	
	switch(ch)
	{
		case 'A' :
			clr();
			border();
			gotoxy(18,5);
			cout<<"****************UPDATE SUPPLIER****************";
			ob1.update_supp();
			press();

			break;
		case 'B' :
			clr();
			border();
			gotoxy(18,5);
			cout<<"****************DELETE SUPPLIER****************";
			ob1.delete_supp();
			press();

			break;
			
		case 'C': 
		    clr();
			border();
			gotoxy(18,5);
			//cout<<"deleted";
			cout<<"****************SEARCH SUPPLIER******************";
			ob1.search_supp();
			press();
			
			break;
			
		case 'D' :
			clr();
			border();
			gotoxy(18,5);
			cout<<"**************LIST OF SUPPLIER***************";
			ob1.list_supp();
			press();
			
			
			break;
		case 'E' :
			clr();
			border();
			gotoxy(20,20);
			ob.menu();
			break;
			
		default:
			clr();
			border();
			gotoxy(20,16);
			cout<<"Entered Invalid Choice!!"<<endl;
			supplier();
			break;		
	}
}



class sale:public MedicalStore
{
	//medicine_data obj;
	MedicalStore ob;
   	public :
	   void purchase_med();
	   void sale_med();

    public:
    	void medicine_pur()
    	{
    		gotoxy(10,5);
	        cout<<"\t********************Add MEDICINES********************";
	        purchase_med();
	       
		}
	};
class medicine_data
{
	struct node
	{
		long int med_id,unit_cost,sale_cost,quantity;
		string med_name,company_name;
		node *next;
	}
	*start;
	public:
		medicine_data()
		{
			start=NULL;
		}
	void purchase();
 	void stock();
 	void sale_ele();
	void search();
};
void medicine_data::purchase()
{
	MedicalStore ob;
	sale ob1;
	node  *temp;
	node *curr;
	int ans;
	do
	{
		gotoxy(18,10);
	    printf("***************Medicine Entry**************");
   
		temp=new node;
		temp->next=NULL;
	    gotoxy(5,13);
		cout<<"Enter Medicine Id: ";
		cin>>temp->med_id;
		gotoxy(39,13);
        cout<<"MEDICINE NAME : ";
        cin>>temp->med_name;
		    
        gotoxy(8,18);
       	cout<<"COMPANY NAME : ";
	    cin>>temp->company_name;
	    
	    gotoxy(39,18);
		cout<<"UNIT COST Rs: ";
		cin>>temp->unit_cost;
		
		gotoxy(8,23);
	    cout<<"SALE COST Rs: ";
	    cin>>temp->sale_cost;
        
        gotoxy(39,23);
      	cout<<"QUANTITY: ";
	    cin>>temp->quantity;
	    
        
		if(start==NULL)
		{
			start=temp;
			curr=temp;
		}
		else
		{
			curr->next=temp;
			curr=temp;
			
		}
		gotoxy(15,30);
		cout<<" Do u want to add new medicine? (1-YES ; 0-NO) -   ";
		cin>>ans;
		clr();
		border();
	
	}
	while(ans==1);
	if(ans==0)
	{
		clr(); 
	    border();
			        
		}
}
void medicine_data::stock()
{
	gotoxy(18,5);
	printf("***************Medicine STOCK**************");
   
	node *t;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		gotoxy(5,8);
	    cout<<"------------------------------------------------------------------------"<<endl;
	    gotoxy(5,10);
	    cout<<"  |   ID   |  Medicine  Name  |  Quantity  |  unit cost  |"<<endl;
		gotoxy(5,12);

	    cout<<"------------------------------------------------------------------------"<<endl;
 

		t=start;
		while(t!=NULL)
		{
			cout<<"       ";
			cout<<"|    "<<t->med_id<<"    |    ";
			cout<<t->med_name<<"    |    ";
			cout<<t->quantity<<"    |    ";
			cout<<t->unit_cost<<"    |    "<<endl;
			t=t->next;
		}
	}
}
void medicine_data::sale_ele()
{
	MedicalStore obj;
	medicine_data ob;
	node *temp;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		long int id;
    	gotoxy(15,15);
      	cout<<"Medicine ID: ";
    	cin>>id;
	

		temp=start;
		while(temp!=NULL)
		{
			if(id==temp->med_id)
			{
				gotoxy(18,10);
				cout<<"Medicine is in STOCK!!"<<endl;
				
				
				int p;
				gotoxy(10,15);
				cout<<"Quantity to be purchased--- ";
				cin>>p;
				if (p<=temp->quantity)
				{
					gotoxy(15,20);
					cout<<"We succeffully delivered you medicines!!";
					gotoxy(15,23);
					cout<<"Kindly goto customer and Register!!!"<<endl;
					
					temp->quantity=temp->quantity-p;
                    gotoxy(18,25);
	       			cout<<"==Thank You=="<<endl;
	       		    press();
				}
				else
				{
					gotoxy(15,20);
					cout<<"Sorry we have not sufficient quantity of medicine"<<endl;
					gotoxy(15,22);
					cout<<"We have "<<temp->quantity<<" no of "<<temp->med_name<<" available."<<endl;
					gotoxy(18,25);
		       		cout<<"==Thank You=="<<endl;
                    press();
				}
				break;
				
				
			}
			else
			{
				clr();
				border();
				gotoxy(20,15);
				cout<<"Medicine is not AVAILABLE!";
			    press();
				break;
			}
			temp=temp->next;
		}
	}
}
void medicine_data::search()
{
	MedicalStore obj;
	gotoxy(18,5);
	printf("***************SEARCH Medicine**************");
	
	long int id;
	gotoxy(15,15);
	cout<<"Medicine ID: ";
	cin>>id;
	
	
	node *temp;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			if(id==temp->med_id)
			{
				gotoxy(18,10);
				cout<<"Medicine is FOUND!!"<<endl;
				gotoxy(15,15);
				cout<<"Medicine ID: "<<temp->med_id;
				gotoxy(15,17);
				cout<<"Medicine Name: "<<temp->med_name;
				gotoxy(15,19);
				cout<<"Company Nmae: "<<temp->company_name;
				gotoxy(15,21);
				cout<<"Cost: "<<temp->unit_cost;
				gotoxy(15,23);
				cout<<"Quantity: "<<temp->quantity;
				
				
				gotoxy(18,30);
				cout<<"Thank You!!"<<endl;
				press();
			}
			else
			{
				clr();
				border();
				gotoxy(20,15);
				cout<<"Medicine is not AVAILABLE!";
				press();
				break;
			}
			temp=temp->next;
		}
	}
   
}


void sale::purchase_med()
{
	MedicalStore ob;
	sale ob1;
	gotoxy(18,10);
	printf("***************Medicine Entry**************");
   
	medicine_data obj;
	obj.purchase();
	obj.stock();
	//obj.ele();
	string g;
	gotoxy(15,25);
	cout<<"Press any key to exit!!    ";
	cin>>g;
	clr();
	border();
	if(g!=".")
	{
	//	ob1.sale_menu();
	
	
	   	    gotoxy(10,8);
	        cout<<"\t********************SALE MEDICINE********************";
	        char ch;
			gotoxy(40,20);
			cout<<"\n          A. Purchase Medicine"<<endl;
			cout<<"\n          B. Search Medicine"<<endl;
			cout<<"\n          C. Exit to Main menu."<<endl;
	
	        gotoxy(30,35);
	
	        cout<<"Enter your choice variable(A,B,C)...";
	        cin>>ch;
	        
	        switch(ch)
	        {
		        case 'A' :
				    clr();
			        border();
		          	gotoxy(18,8);
	                printf("***************BUY Medicine**************");
	
		          	obj.sale_ele();
			
		        	break;
        		case 'B' :
		        	clr();
		        	border();
		           	gotoxy(20,20);
//		           	gotoxy(18,8);
//	                printf("***************SEARCH Medicine**************");
	                obj.search();
	                
	                
		           	break;
		        
	          	case 'C' :
			        clr(); 
	         		border();
			        gotoxy(20,20);
        			ob.menu();
	          		break;
		        default:
			        clr(); 
			        border();
          			gotoxy(20,16);
		         	cout<<"Entered Invalid Choice!!"<<endl; 
		           	supplier();
           			break;
            }
		
               	     
               	
    }

	
}



class customer
{
	struct node
	{
		string cus_name,cus_city;
		long int phone;
		node *next;
	}
	*start;
	public:
		customer()
		{
			start=NULL;
		}
	public:
		void add_cus();
	    void list_cus();
    	void search_cus();
    	void update_cus();
	
};

void customer::add_cus()
{
	MedicalStore ob;
	sale ob1;
	node  *temp;
	node *curr;
	int ans;
	do
	{
		gotoxy(18,10);
	    printf("***************Customer Entry**************");
   
		temp=new node;
		temp->next=NULL;
	    gotoxy(5,13);
        cout<<"CUSTOMER NAME : ";
        cin>>temp->cus_name;
		
		gotoxy(39,13);
        cout<<"Customer CITY : ";
	    cin>>temp->cus_city;
	    
        gotoxy(8,18);
       	cout<<"Customer PHONE NO : ";
	    cin>>temp->phone;
	    
	    
		if(start==NULL)
		{
			start=temp;
			curr=temp;
		}
		else
		{
			curr->next=temp;
			curr=temp;
			
		}
		gotoxy(15,30);
		cout<<" Do u want to add new Customer? (1-YES ; 0-NO) -   ";
		cin>>ans;
		clr();
		border();
	
	}
	while(ans==1);
	if(ans==0)
	{
		clr(); 
	    border();
			        
		}
		
	
}
void customer::list_cus()
{
	gotoxy(18,5);
	printf("***************Customer Information**************");
   
	node *t;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		gotoxy(5,8);
	    cout<<"------------------------------------------------------------------------"<<endl;
	    gotoxy(5,10);
	    cout<<"  |  Customer  Name  |  City  |   Phone no   |"<<endl;
		gotoxy(5,12);

	    cout<<"------------------------------------------------------------------------"<<endl;
 

		t=start;
		while(t!=NULL)
		{
			cout<<"       ";
			cout<<"|    "<<t->cus_name<<"    |    ";
			cout<<t->cus_city<<"    |    ";
			cout<<t->phone<<"    |    ";
			cout<<endl;
			t=t->next;
		}
	}

}
void customer::search_cus()
{
	
	MedicalStore obj;
	gotoxy(18,5);
	printf("***************SEARCH Customer**************");
	
	string name;
	gotoxy(15,15);
	cout<<"Customer name: ";
	cin>>name;
	
	
	node *temp;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			if(name==temp->cus_name)
			{
				gotoxy(18,10);
				cout<<"Customer is FOUND!!"<<endl;
				gotoxy(15,15);
	            cout<<"Customer Name: "<<temp->cus_name;

				gotoxy(15,17);
				cout<<"Customer City: "<<temp->cus_city;
				gotoxy(15,19);
				cout<<"Customer Phone No:  "<<temp->phone;
				
				
				gotoxy(18,30);
				cout<<"Thank You!!"<<endl;
				
				press();
			}
			else
			{
				clr();
				border();
				gotoxy(20,15);
				cout<<"Customer is not AVAILABLE!";
				press();
				break;
			}
			temp=temp->next;
		}
	}
   
}
void customer::update_cus()
{
	MedicalStore obj;
	gotoxy(18,5);
	printf("***************UPDATE Customer**************");
	
	string name;
	gotoxy(15,15);
	cout<<"Customer name: ";
	cin>>name;
	
	
	node *temp;
	if (start==NULL)
	{
		gotoxy(30,15);
		cout<<"STOCK IS EMPTY";
		
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			if(name==temp->cus_name)
			{
				gotoxy(18,10);
				cout<<"Customer is FOUND!!"<<endl;
				gotoxy(15,15);
	            cout<<"Customer Name: "<<temp->cus_name;

				gotoxy(15,17);
				cout<<"Customer City: "<<temp->cus_city;
				gotoxy(15,19);
				cout<<"Customer Phone No:  "<<temp->phone;
				
				string update;
				gotoxy(15,25);
				cout<<"What do you want to Update? (n-name ; c-city ; p-phone no)";
				cin>>update;
				clr();
				border();
				string n="n";
				string N="N";
				string c="c";
				string C="C";
				string p="p";
				string P="P";
				
				if(update==n||update==N)
				{
					string up_name;
					gotoxy(15,15);
					cout<<"New updated Name: ";
					cin>>up_name;
					temp->cus_name=up_name;
					
					gotoxy(18,20);
					cout<<"Name Updated Successfully!!";
				    
       				gotoxy(18,30);
	    			cout<<"Thank You!!"<<endl;
		            press();
	       	        
				}
				
				else if(update==c||update==C)
				{
					string up_city;
					gotoxy(15,15);
					cout<<"New updated City: ";
					cin>>up_city;
					temp->cus_city=up_city;
					
					gotoxy(18,20);
					cout<<"City Updated Successfully!!";
       				gotoxy(18,30);
	    			cout<<"Thank You!!"<<endl;
		     		press();
	       	     	 
				}
				
				else if(update==p||update==P)
				{
					long int up_phone;
					gotoxy(15,15);
					cout<<"New updated Phone: ";
					cin>>up_phone;
					temp->phone=up_phone;
					
					gotoxy(18,20);
					cout<<"Phone Updated Successfully!!";
				
				
				    
       				gotoxy(18,30);
	    			cout<<"Thank You!!"<<endl;
	    			press();
	       	     	 
				}
				else
				{
					gotoxy(10,10);
					cout<<"Entered Invalid Choice:(";
					obj.menu();
				}
	        }
	    }
	     
	}
	    
}
void customer_menu()
{
	MedicalStore ob1;
	gotoxy(18,10);
	printf("***************Customer Entry**************");
    customer ob;

	ob.add_cus();
	ob.list_cus();
	//obj.ele();
	string g;
	gotoxy(15,25);
	cout<<"Press any key to exit!!    ";
	cin>>g;
	clr();
	border();
	if(g!=".")
	{
	//	ob1.sale_menu();
	
	
	   	    gotoxy(10,8);
	        cout<<"\t********************Customer********************";
	        char ch;
			gotoxy(40,20);
			cout<<"\n          A. Update Customer"<<endl;
			cout<<"\n          B. Search Customer"<<endl;
			cout<<"\n          C. Exit to Main menu."<<endl;
	
	        gotoxy(30,35);
	
	        cout<<"Enter your choice variable(A,B,C)...";
	        cin>>ch;
	        
	        switch(ch)
	        {
		        case 'A' :
				    clr();
			        border();
		          	gotoxy(18,8);
	                //printf("***************Update Customer**************");
	                ob.update_cus();
	
		          	
			
		        	break;
        		case 'B' :
		        	clr();
		        	border();
		           	gotoxy(20,20);
//		           	gotoxy(18,8);
//	                printf("***************SEARCH Medicine**************");
	                ob.search_cus();
	                
	                
		           	break;
		        
	          	case 'C' :
			        clr(); 
	         		border();
			        gotoxy(20,20);
        			ob1.menu();
	          		break;
		        default:
			        clr(); 
			        border();
          			gotoxy(20,16);
		         	cout<<"Entered Invalid Choice!!"<<endl; 
		           	supplier();
           			break;
            }
		
               	     
               	
    }
}

int MedicalStore::menu()
{
	MedicalStore ob1;
	sale ob;
	gotoxy(30,8);
	printf("** ONIC MEDICAL STORE **",219);
	printf("\n\n");
	gotoxy(35,15);
	printf("==Main menu==");
	printf("\n\n");
	gotoxy(15,20);
	printf("\n        1. Supplier.");
	printf("\n\n");
	printf("\n        2. Purchase");
	printf("\n\n");
	printf("\n        3. Customer.");
	printf("\n\n");
	printf("\n        4. Exit.");
	printf("\n\n");
	gotoxy(30,35);
	int choice;
	cout<<"Enter your choice number...";
	cin>>choice;
	switch(choice)
	{
		case 1:
			clr();
			border();
			gotoxy(20,20);
			//cout<<"hii";
			supplier_menu();
			break;
		case 2:
			
			clr();
			border();
			gotoxy(20,20);
			ob.medicine_pur();
			break;
		case 3:
			clr();
			border();
			gotoxy(20,20);
			customer_menu();
			break;
		case 4:
			clr();
			border();
			gotoxy(35,35);
			cout<<"Thank you!!";
			gotoxy(50,50);
			cout<<" ";
			break;
			return 0;
		default:
			clr();
			border();
			gotoxy(20,20);
			cout<<"Enter Correct choice :("<<endl;
			ob1.menu();
			break;
	}
    
	
	
}

int main()
{
	system("color 70");
	border();
	MedicalStore ob;
	ob.time();
	border();
//	clr();
//	border();
    ob.menu();
    
	return 0;
}
