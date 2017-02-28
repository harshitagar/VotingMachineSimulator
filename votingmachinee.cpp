#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class gv
{
 public:
	char grp[15];
	int vote=0;
	int no;
	void addgrps()
	{
		cin>>grp;
		
	}
	void show()
	{
		cout<<grp;
	}
	void addvote()
	{
		vote+=1;
	}
	void showv()
	{
		cout<<vote<<endl;
	}
	void shown()
	{
		cout<<no<<endl;
	}
};
int firstpage(gv *s,int n)
{  
 	int v,retrn;
	system("cls");

	cout<<endl;

	cout<<"\t \t \t WELCOME TO THE VOTING PROCESS\t  "<<endl<<endl;

	cout<<"TYPE THE GROUP NUMBER YOU WANT TO VOTE FOR FROM THE LIST GIVEN BELOW"<<endl;

	cout<<"**********************************************************************************"<<endl;
	
	
	for(int j=1;j<=n;j++)
	{ 
	 	cout<<j<<"---";
	  	s[j-1].show();cout<<endl;
	}
	cout<<"***********************************************************************************"<<endl<<endl;
	cout<<"         ENTER YOUR CHOICE:";
	cin>>v;
  		if(v>=1&&v<=n)
		{
				
			s[v-1].addvote();

			cout<<"*************THANKS FOR VOTING***********************";

			cin>>retrn;
			return retrn;	
                
		}
		else
		{
			cout<<"sorry wrong input";
			return 12;
		}
	}
void showres(gv *s,int n)
	{    int w=0,c=0;
		cout<<"******************VOTING RESULT************************"<<endl;
	 	cout<<"groups"<<"\t"<<"vote"<<endl;
		for(int i=0;i<n;i++)
		{  
			s[i].show();cout<<"\t";	s[i].showv();
			cout<<endl;
		}
		int max=s[0].vote;
for(int i=0;i<n;i++)
	{
	    
		if(s[i].vote>max)
		{
			max=s[i].vote;
			w=i;
		}
	}
	for(int i=0;i<n;i++)
	{   
	  if(w!=i)
	  {
	
			if(max==s[i].vote)
			{	
			cout<<"groups are having  tie,equal no. of votes: "<<endl;
			s[i].show();cout<<endl;s[w].show();
			c++;
		}
     }
}
if(c==0)
{

	cout<<"winner of the voting process is:"<<endl;
	s[w].show();
}
}
	
	
	
int main()
	{   int no;
		long dov;
	    string passcode;
	  firstt:  cout<<"************WELCOME TO THE VOTING MACHINE STIMULATOR************"<<endl;
	    cout<<"\t\t PLEASE ENTER THE PASSWORD:";
	    cin>>passcode;
	    while(passcode!="7575")
    	{ 
        	cout<<"WRONG PASSWORD PLEASE ENTER IT AGAIN:";
        	cin>>passcode;
		}
		system("cls");
		cout<<" \t\t\t WELCOME ADMINISTRATOR "<<endl<<endl;
	
		cout<<"****************************************************************"<<endl;	
			cout<<"MAIN MENU::"<<endl;
		cout<<"1--Start new voting process"<<endl;
		cout<<"2--Previous year history"<<endl;
	    cout<<"****************************************************************"<<endl;	
		cout<<"Enter your choice:";
		int c;
		cin>>c;
		if(c==1)
		{   gv voter[16];	
				system("cls");
				cout<<"\t\t 1--add all new groups"<<endl;
				cout<<"\t\t 2--use previous year group names"<<endl;
				cout<<"=============================================================================";
				cout<<"\t\t Enter your choice:";
				cin>>c;
				if(c==1)
				{	
		
						
				GROUPS:	cout<<"enter the total no. of groups present this time in voting process : ";
					cin>>no;
			        if(no>16||no<=1)
			         	{
					
			        		cout<<"Sorry only 16 groups are allowed for voting and enter more than one group "<<endl;
			        		
							goto GROUPS;
						}
				    else
				    {
						
			
						for(int i=0;i<no;i++)
						{		
			     			cout<<"enter the name of group "<<i+1;
			      			voter[i].addgrps();
			      			voter[i].no=no; 	
						}	
					LABEL:	cout<<"========================================================="<<endl;
						cout<<" \t \t \t PRESS 1 TO CONTINUE "<<endl;
						cout<<"\t \t \t PRESS 2 TO EDIT THE NAMES OF GROUPS"<<endl;
						cout<<"\t \t \t PRESS 3 TO ADD NEW GROUP"<<endl;
						cout<<"\t \t \t PRESS 4 TO DELETE GROUP"<<endl;
						int c;
						cin>>c;
		
						if(c==2)
						{ 
		 					int d;
							cout<<"please enter the group number whose name you want to change";
		     				cin >>d;
		     				cout<<"enter the new name for the group "<<d;
		     				voter[d-1].addgrps();
		     				cout<<endl;
		     				cout<<"if you are satisfied with the group names type 1 or if u want to make further changes type 2";
		     				cin>>c;
		     				if(c==3)
		     					goto LABEL;
						}
						else if(c==3)
						{   int no1=0;
							cout<<"NUMBER OF GROUPS YOU WANT TO ADD -";
							cin>>no1;
							if(no+no1>16)
							{
						      cout<<"sorry groups are exceeding the limit taking you bck to main menu";
						      goto LABEL;
						    
						}
							else
							{
								for(int i=no;i<no+no1;i++)
								{
									cout<<"enter the name of group "<<i+1;
			      					voter[i].addgrps();
			      					voter[0].no=no+no1;; 
			        	        }    
									no=no+no1;
									cout<<"if you are satisfied with the group names type 1 or if u want to make further changes type 3 :-";
		    		 				cin>>c;
		    		 				if(c==3)
	                                goto LABEL;						
								
							}	
						}
						else if(c==4)
						{  int no2;
							cout<<"Enter the group no. you want to delete from the voting process :-";
							cin>>no2;
							
							if(no2>no)
							{
								cout<<"sorry group not present";
								goto LABEL;
							}
							else
							{
								for(int i=no2-1;i<no-1;i++)
								{
									strcpy(voter[i].grp,voter[i+1].grp);
								}
								voter[0].no=no-1;
								no=no-1;
								cout<<"if you are satisfied with the group names type 1 or if u want to make further changes type 3 :-";
		    		 			cin>>c;
		    		 			if(c==3)
	                            goto LABEL;						
								
							}	
						}
		
						cout<<"setting up the voting ballet to vote.........."<<endl;
		
						cout<<" \t \t \t PLEASE WAIT";
						for(int i=0;i<=1000000000;i++)
		  				{
			
		   				}			
						int v=12;
						while(v==12)
						{
		
		 					v=firstpage(voter,no);
							while(v!=12&&v!=13)
							{   
								cin>>v;
							}
						}	
						showres(voter,no);
						fflush(stdin);
		
						ofstream fout;
						fout.open("votingm.dat",ios::out|ios::binary	);
						for(int i=0;i<no;i++)
						{
				
							fout.write((char *)&voter[i],sizeof(voter[i]));
						}
						fout.close();
					}
				}
				else if(c==2)
				{
					 gv ps;
					ifstream fin;
					fin.open("votingm.dat",ios::in|ios::binary);
			
			
			
					fin.read((char *)&ps,sizeof(ps));
					 no=ps.no;
			         cout<<"GROUPS FROM THE DATA BASE ARE:";
					for(int i=0;i<no;i++)
					{   
			    		fin.seekg((i)*sizeof(ps));
				
						fin.read((char *)&ps,sizeof(ps));
                		strcpy(voter[i].grp,ps.grp);
                		cout<<endl;
			            	cout<<"Group "<<i+1<<":";
							voter[i].show();
							cout<<endl;
					}
					goto LABEL;	
				}
			}	
		else if(c==2) 
		{  	 gv voter;
			ifstream fin;
			fin.open("votingm.dat",ios::in|ios::binary);
			
			
			
			fin.read((char *)&voter,sizeof(voter));
			 no=voter.no;
			//cout<<no;
			
			cout<<"groups";cout<<"\t";cout<<"votes";
                
			for(int i=0;i<no;i++)
			{   
			    fin.seekg((i)*sizeof(voter));
				
				fin.read((char *)&voter,sizeof(voter));
				
				cout<<endl;
				
				voter.show();cout<<"\t";voter.showv();			
			}
		   cout<<"press 0 to continue press 1 to exit :-";
		   string dd;
		   cin>>dd;
		   if(dd=="0")
		   {
		   system("cls");
		   goto firstt;
	}
		}	
}
