#include<stdio.h>
#include<string.h>
#include"Login_db.h"
LOGIN_STATUS_t Login_Database(char user_name[],char password[])
{
	LOGIN_STATUS_t flag = error ;
	if(strcmp(user_name,"Mohamed")==0)
	{
		if(strcmp(password,"123abc")==0)
		{
			flag = success;
		}
	}
	return flag;
	
}