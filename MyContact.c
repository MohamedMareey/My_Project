#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Login_db.h"
int main()
{
	char user[40];
	char pass[30];
	LOGIN_STATUS_t myflag ;
	static int error_counter = 0;
	char chances_num = 2;
	error: 
	printf("User Name : ");
	scanf("%40s",&user);
	printf("Password  : ");
	scanf("%30s",&pass);
	myflag = Login_Database(user,pass);
	switch(myflag)
	{
		case success: puts("You are Successfully logged in.....");break;
		case error : if(chances_num==0)printf("User Name or Password Invalid , you have %d more chances System Exit.....\n",chances_num);
					 else printf("User Name or Password Invalid , you have %d more chances try again.....\n",chances_num);chances_num--;
					 puts("------------------------------------------------------------------------");error_counter++;
					 if(error_counter<3)goto error;else break;
	}
	return 0 ;
}