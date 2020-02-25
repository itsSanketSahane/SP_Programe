#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	int i,j=0,count=0;
	char c,key[10];
	ifstream fp;
	fp.open("/home/oslab-17/myfile.txt",ios::in);
	string keyword[5]={"START","READ","STOP","END","ADD"};
	
	
	if(fp==NULL)
	{
		cout<<"\nFile Can't be open\n"; 
	}
	else
	{
		while(!fp.eof())
		{
			fp.get(c);
			if (c==' ' || c=='\n')
			
			{
				for(i=0;i<5;i++)
				{
					if(strcmp(keyword[i].c_str(),key)==0)
					{
						count++;	
						key[0]='\n';
						j=0;	
						break;			
					}
					else
					{
						
						continue;
					}
				
				}
				
				//key[0]='\n';
				//j=0;
							
			
			}
			else
			{
				key[j]=c;
				j++;
			
			}
		}
	
	}
	fp.close();
	
	if(count>0)
	{
		cout<<"\nRight Input\n";
			
	}	
	else
	{
		cout<<"\nWrong Input\n";
	}

}
