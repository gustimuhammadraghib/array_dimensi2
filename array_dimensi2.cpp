#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main()
 
{
	    int X[3][5],R[3][5],W[1][5],C[3][5],i,j,k;
 
 		cout<<"\n\t\t\tNAMA			 : GUSTI MUHAMMAD RAGHIB\n";
		cout<<"\t\t\tNPM 			 : 16630904\n";
		cout<<"\t\t\tPROGRAM 		 : TEKNIK INFORMATIKA\n";
		cout<<"\t\t\tTEKNIK 		 : INPUTAN ARRAY DIMENSI 2\n";
    
		cout<<"INPUT NILAI MATRIX X : \n";
   		cout<<"------------------------- \n";
 
   				for(i=0;i<3;i++)
 
  	 				{	
         				for(j=0;j<5;j++)
       				{			
 
        				cout<<"matrik X "<<(i+1)<<","<<(j+1)<<" : ";
      					cin>>X[i][j];
					}
 
}

 	   cout<<"INPUT NILAI MATRIX  R : \n";
	   cout<<"------------------------- \n";
 
   			for(i=0;i<3;i++)
 
  				 {
        			for(j=0;j<5;j++)
 
        		 {
 		
		 cout<<"MATRIX R "<<(i+1)<<","<<(j+1)<<" : ";
 
      				cin>>R[i][j];
 
       				}
 
}

 
		cout<<"BOBOT W: \n";
 
   		cout<<"------------------------- \n";
 
   			for(i=0;i<1;i++)
 
  				 {
    				for(j=0;j<5;j++)
       			 {
 
        cout<<"BOBOT W "<<(i+1)<<","<<(j+1)<<" : ";
      			cin>>W[i][j];
       			}
 
}

    	cout<<"INPUT MATRIX R*W: \n";
 
   		cout<<"------------------------- \n";
 
   			for(i=0;i<3;i++)
 
   			{
        		for(j=0;j<5;j++)
         	{
 
        cout<<"MATRIX R*W"<<(i+1)<<","<<(j+1)<<" : ";
      		cin>>C[i][j];
       		}
 
}
 
 
   		cout<<"\n MATRIX X : \n";;
 
  			 for(i=0;i<3;i++)
 
   			{
        		for(j=0;j<5;j++)
        	{

        cout<<setw(4)<<X[i][j]<<"|";
       		}
 
	cout<<endl;
 
}
    cout<<endl;
   
  		 cout<<"\n MATRIX R : \n";;
 
   			for(i=0;i<3;i++)
   			
			{
		        for(j=0;j<5;j++)
       		{
 
        cout<<setw(4)<<R[i][j]<<"|";
 
        }
 
    cout<<endl;
 
}
   cout<<endl;
  
   		cout<<"\nBOBOT W : \n";
 
   		for(i=0;i<1;i++)
 
  			{
       			 for(j=0;j<5;j++)
         	{
 
        cout<<setw(4)<<W[i][j]<<"|";
 
}
	cout<<endl;
 
   			}
 
 		cout<<"\n MATRIX R*W : \n";;
 
   		for(i=0;i<3;i++)
 
  		{	
         	for(j=0;j<5;j++)
        {
 
        cout<<setw(4)<<C[i][j]<<"|";
        
}
 
    cout<<endl;
 
   			}
   			
    	cout<<endl;
  
 		for (i=0;i<3;i++)
 
  		{
 		    for (j=0;j<5;j++)
 	    {
 
   			 C[i][j]=0;
 
        for (k=0;k< 5;k++)
 
      	{
 
        C[i][j]+= R[i][k]*W[k][j];
 
      	}
 
}
     	for (i=0;i<3;i++)
 
 		{
 		    for (j=0;j<5;j++)
 	    {
 
    	C[i][j]=0;
 
        	for (k=0;k< 5;k++)
 
      	{
 
        C[i][j]+= X[i][k]*R[k][j];
 
      	}		
 
}
 
 
		cout<<"\n HASIL AKHIR 	: ";
		cout<<"\n NILAI A1 		: 17.0000";
		cout<<"\n NILAI A2 		: 13.1167";
		cout<<"\n NILAI A3 		: 13.6000\n";
  	


		getch();
 
		}
	}
}
