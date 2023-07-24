#ifndef DATABASE_H
#define DATABASE_H

typedef enum
{
	error , success 
}LOGIN_STATUS_t;
LOGIN_STATUS_t Login_Database(char user_name[],char password[]);



#endif
