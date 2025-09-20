#include <stdio.h>



#include <stdlib.h>



#include <string.h>



void mainmenu();

void logins();

void registers();

int chs;

char username[50];

char pass[50];

int main()

{

    mainmenu();





    return 0;

}



void mainmenu()

{

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

  char inputuser[50];

  char inputpass[50];

    printf("---Login---\n");

    printf("Enter username :\n");

    scanf("%s",inputuser);

    printf("Enter password :\n");

    scanf("%s",inputpass);

    while(1){

if (strcmp(inputuser, username) == 0 && strcmp(inputpass, pass) == 0)

    {

      printf("successfully logged in");

      break;

    }

    else

    {

      printf("Wrong credentials.Try again or go back to main menu.\n");

      printf("1.Try again  2.Mainmenu");

      scanf("%d",&chs);

      if (chs == 1)

      {

      logins();

      }

      else if (chs == 2)

      {

        mainmenu();

      }

      else 

      {

        printf("invalid choice");

      }

      }

      }

    }



void registers()

{

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
