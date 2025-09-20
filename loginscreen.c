#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainmenu();
void logins();
void registers();
int main()
{
    mainmenu();


    return 0;
}

void mainmenu()
{
    int chs;
    printf("----Main menu---\n");
    printf("1.Register\n");
    printf("2.Login\n");
    printf("choose 1 or 2\n");
    scanf("%d",&chs);
    switch (chs)
    {

        case 1:
            registers();
            break;
        case 2:
            logins();
            break;
        default:
            printf("Invalid choice");
    }


}

void logins()
{
    printf("Welcome to login screen");
}
void registers()
{
   char username[50];
    char pass[50];
    char conformpass[50];
     printf("---Register---\n");
        printf("Username :\n");
        scanf("%s", username);
        printf("Password :\n");
        scanf("%s", pass);
        while (1)
        {
            printf("Reenter the password again : \n");
            scanf("%s",conformpass);
        if (strcmp(pass,conformpass)==0)
        {
            printf("You are successfully registered\n");
            break;
        }
        else
        {
            printf("incorrect password.Try again\n ");
        }

        }
        mainmenu();


}
