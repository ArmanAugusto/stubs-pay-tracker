#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

typedef struct {
	char username[100];
	char email[100];
	char firstname[100];
	char lastname[100];
	char password[100];
	bool isadmin;
} user_accounts;

void authentication_menu_actions();
//void log_in_user(user_account*);
void query_user_account();

#endif  /*  AUTHENTICATION_H  */
