#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <unistd.h>

#define CARD_NUMBER_LENGTH 16

#define MAX_LINE_LENGTH 100

// function prototypes
 void requested_loans ();
 void open_account();
 void account_detail();
 void show_balance(float balance) ;
 float deposit ();
 float withdraw (float balance) ;
 void bank_loans();
 int get_digits(int number);
 int sum_of_odd_digits(char *cardNumber);
 int sum_of_even_digits(char *cardNumber);
 int string_length(char *str);
 float calculate_simple_interest(float amount,int time);
 int calculate_time_period(int year);
 void bank_clients();
 void generated_card_number();
 void watch(char time_string[]);
 void bank_hist();
 void view_history();
 void search_client();
 void delete_client();
 void clean_stdin(void)

{
     int c ;
     do {
        c=getchar();
     }while (c!= '\n' &&c !=EOF);
 }

struct loan_request {
    char account_name[20];
    char copy[20];
    float interest;
    char card_number [20];
    float loan_amount;
    char month[20];
    float rate;
    float payment;
    char deadline[20];
};

struct loan
{
    float loan;
}l;

struct bank_history
{
    float balance_b_n ;
    float balance_a_w ;
    float balance_a_d ;
    float deposit ;
    float withdrawal;
    char date [20];
    char name[20];
    char card_number [20];
}h;

struct account_details
{
    char account_name [20] ;
    int age ;
    char account_type[20] ;
    char occupation [20];
    char clients_card_number[CARD_NUMBER_LENGTH];
}g;


int main ()
{
    float balance ;
    int choice ;
    int a ,b,pass,c;
    char cardNumber[20];
    int results;
    char time_string[9];
    int  age ;

    do
    {
    printf("\n\n\n\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*         WELCOME TO Edge Financial             *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*************************************************\n\n\n");


    printf("\n\n\t\t>>>>For Admin access---------press 1.>>>>\n");
    printf("\n\t\t>>>>For user access----------press 2.>>>>\n");
    printf("\n\t\t>>>>About us-----------------press 3.>>>>\n");
    printf("\n\t\t>>>>To exit -----------------press 4.>>>>\n");
    printf("\n>>:");
    scanf("%d",&b);
    switch(b)
    {
    case 1:

        printf("\n Hello admin , please enter the password to continue --->") ;
        printf("\n>>:");
        for (int i = 0 ; i < 6 ; i++)
        {
            scanf("%d" ,&pass);
            if (pass == 1234)
            {
                printf("\t\tACCESS GRANTED , WELCOME!!");
                printf("\n\t\t==========================\n");
                do
                {

                printf("\n\n\t>>create a bank account.--------------press 1.");
                printf("\n\t>>Bank accounts.----------------------press 2.");
                printf("\n\t>>Bank loans.-------------------------press 3.");
                printf("\n\t>>Bank history.-----------------------press 4.");
                printf("\n\t>>search client.----------------------press 5.");
                printf("\n\t>>delete data.------------------------press 6.");
                printf("\n\t>>Exit.-------------------------------press 7.");
                printf("\n>>:");
                scanf("%d",&c);

                switch (c)
                {
                  case 1:
                    open_account();
                    break;
                  case 2:
                    bank_clients();
                    break ;
                  case 3:
                    requested_loans();
                    break ;
                  case 4 :
                    view_history();
                    break ;
                  case 5 :
                    search_client();
                    break ;
                  case 6 :
                      delete_client();
                    break ;
                  case 7 :
                   printf("***THANK YOU ADMIN, FOR USING THE SYSTEM***");
                   break ;
                  default :
                    printf("Invalid choice");
                    printf("\n>>>Choose from 1 to 6.....");

                }

                }while(c!=7);

                break ;
            }

            else
            {
               printf("\nInvalid password , please try again");
               printf("\nNumber of trials remain:%d" , 5-i-1) ;
               printf("\n>>Enter_password:");
            }

            if (i==5)
            {
                return 0 ;
            }

        }

        break ;

    case 2:
       do
    {
    printf("\n\n\t\t>>>>Apply for an account------------press 1.>>>>");
	printf("\n\t\t>>>>login with your card------------press 2.>>>>");
	printf("\n\t\t>>>>To exit ------------------------press 3.>>>>");
	printf("\n>>:");
	scanf("%d" ,&a);

	switch (a)
	{
    case 1 :
        open_account();
        break ;

    case 2 :

    for (int i = 0 ; i < 5 ;i++)
    {
    printf("\nclient's_name :");
    scanf("%s",h.name);
    printf("\nDate of entry:");
    scanf("%s",h.date);
    printf("Enter card number: ");
    scanf("%s", cardNumber);
    for (int i = 0 ; i < 16 ; i++){
        h.card_number[i] = cardNumber[i];
    }


    results = sum_of_odd_digits(cardNumber) + sum_of_even_digits(cardNumber);

    if (results % 10 == 0) {
        printf("Credit card# is valid\n");

    do {

    printf("\n\n\t\tchoose from our available programs\n");
    printf("\t\t1.Check your balance\n");
    printf("\t\t2.deposit money\n");
    printf("\t\t3.withdraw money\n");
    printf("\t\t4.Request a loan\n");
    printf("\t\t5.Exit\n");
    printf("\t\tchoose from 1 to 5:");
    scanf("%d", &choice);

    printf("\n");

    clean_stdin();


    switch (choice)
    {
    case 1:
        balance=l.loan;
        show_balance(balance) ;
        h.balance_b_n=balance;
        break ;
    case 2:
        balance += deposit();
        show_balance(balance);
        break ;
    case 3:
        balance -= withdraw(balance);
        show_balance(balance);
        h.balance_a_w=balance;
        break ;
    case 4:
        bank_loans();
        break ;
    case 5:
        printf("\t>>>:Thanks for choosing us!!!!");
        break ;
    default :
        printf("\nInvalid choice\n");
        printf("\n>>>Choose from 1 to 5....");
    }

    } while (choice!=5) ;

    bank_hist();

        break ;
    }
    else {
        printf("\nCredit card# is invalid");
        printf("\nNumber of trials left:%d\n\n" ,4-i-1);
    }



    }

    break ;

    case 3:
        printf("\nHAVE A GLORIOUS TIME!!!!");
        break ;
    default :
        printf("\nInvalid choice!!!!!");
        printf("\n>>>Choose from 1 to 3.....");
        break;

	}

       }while(a!=3);

    case 3:
        printf("\n\nWelcome to Edge Financial , where we're excited to introduce you to our banking system.");
        printf("\nOur financial institution is dedicated to providing top-notch services to our clients, ");
        printf("\nincluding a wide range of loan options, basic banking services like deposits and withdrawals.");
        printf("\nThank you for choosing Edge Financial, and we hope to see you soon!");
        printf("\n\n\t\t>>>Edge Financial, Bank with confidence.<<< ");

        break;

    case 4:
      printf("\n\t>>>:HAVE A WONDERFUL TIME!!!\n");
      printf("\n        :: >>>:YOUR TIME OF EXIST:");
      watch(time_string);
      break ;

    default :
    printf("\nInvalid choice");
    printf("\n>>>Choose from 1 to 4 .....");

    }


    }while(b!=4);


    return 0 ;

}

void account_detail()
{

    printf("Enter your name:");
    scanf("%s" ,g.account_name);
    printf("\nEnter your age:");
    scanf("%d" ,&g.age);
    printf("\nEnter your type of account:");
    scanf("%s" ,g.account_type);
    printf("\nEnter your occupation:");
    scanf("%s" ,g.occupation);
    generated_card_number(g.clients_card_number);
    printf("\n\n***congratulations %s for opening an account with us***" ,g.account_name);
    printf("\n>>>your now new card number is : %s", g.clients_card_number);



  FILE *fp = fopen ("Account details.txt" ,"a");
     if (fp==NULL)
     {
         printf("Can't open file\n");
     }
     else
     {
    fprintf(fp, "\n\t%s\t\t%d\t%s\t\t%s\t\t%s", g.account_name, g.age, g.account_type,g.occupation,g.clients_card_number);
    fclose(fp);
    printf("\n>>>Record saved successfully!");

         printf("\n>>Your data has been recorded<<");
         printf("\n\n>>Thanks for choosing us<<<");
     }

}


 void open_account()
 {
     account_detail();
 }


void bank_clients()
{
    int pass ;

        printf("\nTo see all bank_account_applications provide your password!!");

    for (int i = 0 ; i < 3 ;i++)
    {
        printf("\n>>:");
        scanf("%d" ,&pass);
        if (pass == 1234)
        {
        FILE *fp = fopen("Account details.txt", "r");

        if (fp == NULL)
        {
        printf("Error opening file.\n");
        return;
        }
        printf("\n\tLIST OF ACCOUNT AND DETAILS");
        printf("\n\t____________________________\n\n");
        printf( "\n\tAccount_name\tAge\tAccount_type\tOccupation\tCard_number");
        printf( "\n\t============\t====\t============\t==========\t============");


        char line[MAX_LINE_LENGTH];

        while (fgets(line, MAX_LINE_LENGTH, fp))
        {
        printf("%s", line);
        }

    fclose(fp);
    break ;
        }

        else
        {
           printf("\nInvalid password");
           printf("\nNumber of trials remaining:%d" ,3-i);
           printf("\nTry again");
        }

    printf ("\nHello Admin!!!");
    }

}

void view_history()
{
    int pass ;

        printf("\nTo see all bank_account_history provide your password!!");

    for (int i = 0 ; i < 3 ;i++)
    {
        printf("\n>>:");
        scanf("%d" ,&pass);
        if (pass == 1234)
        {
        FILE *fp = fopen("Bank H_activities.txt", "r");

        if (fp == NULL)
        {
        printf("Error opening file.\n");
        return;
        }

        printf("\n\tBANK HISTORY ACTIVITIES");
        printf("\n\t_______________________\n\n");
        printf( "\n\tAccount_name \tcard_number\t\tloan\t\tdeposit \twithdrawal \tAcc_balance\tdate");
        printf( "\n\t============\t============\t\t====\t\t========\t==========\t============\t====");

        char line[MAX_LINE_LENGTH];

        while (fgets(line, MAX_LINE_LENGTH, fp))
        {
        printf("%s", line);
        }

    fclose(fp);
    break ;
        }

        else
        {
           printf("\nInvalid password");
           printf("\nNumber of trials remaining:%d" ,3-i);
           printf("\nTry again");
        }

    printf ("\nHello Admin!!!");
    }

}

void show_balance (float balance)
{
    printf("your balance:%.2f RWF\n\n", balance) ;
}

float deposit ()
{
    float amount ;
    printf("enter deposit:");
    scanf("%f",&amount);
    h.deposit=amount;

    if(amount>0)
    {
        return amount ;
    }

    else
    {
        printf("invalid amount\n");
        printf("please try again") ;
    }


}

float withdraw (float balance)
{
    float amount;
    printf("enter amount:") ;
    scanf("%f",&amount) ;
    h.withdrawal = amount ;

    if (amount>balance)
    {
        printf("you have insufficient funds\n");
        printf("please check your balance first\n") ;

    }

    else
    {
       printf("you withdrawed %.2f RWF\n",amount);
       return amount ;
    }



}

void bank_hist()
{
    FILE *fp = fopen("Bank H_activities.txt","a");

    if (fp == NULL)
    {
        printf("\nFailed to open file");
        exit(1);
    }

    else
    {
    fprintf(fp,"\n\t%s\t\t%s\t%.2fRWF\t%.2fRWF\t%.2fRWF\t%.2fRWF\t%s",h.name ,h.card_number,l.loan,h.deposit,h.withdrawal,h.balance_a_w,h.date);
    fclose(fp);
    }

    printf("\n>>>In accordance with our policy your activity has been recorded****");

}



 void bank_loans()
 {
     float amount ;
     char month [20] ;
     char deadline [63];
     char deadline_month [50];
     float total_amount ;
     int year;
     char cardNumber [20] ;
     char account_name [20];
     int results ;
     int year_int ;
     int interest;
     int age ;
     float salary ;
     float rate = 9 ;
     float balance ;
     char copy [20];

    printf("\nEnter your age>>:");
    scanf("%d",&age);

    if (age < 18 || age > 60)
    {
        printf("\nSorry , you are not eligible for a loan");
        return ;
    }

    printf("\nEnter your salary>>:");
    scanf("%f" ,&salary);

    if (salary < 25000)
    {
        printf("\nSorry , you are not eligible for a loan");
        return ;
    }

    printf("\nEnter loan amount>>:");
    scanf("%f" ,&amount);

    if(amount > salary *2)
    {
        printf("\nSorry , you are not eligible for a loan");
        return ;
    }

     printf ("\n\n***Congratulations your successfully eligible for a loan***") ;

     printf("\n\n\t\t>>Provide the details below for the approval<<") ;
     printf("\n\t\t************************************************") ;
     printf("\n\nAccount name>>:");
     scanf("%s" ,account_name);
     printf("\nEnter your age>>:");
     scanf("%d",&age);
     printf("\nEnter your salary>>:");
     scanf("%f" ,&salary);
     printf("\nEnter today's month you received the loan (e.g:January)>>:");
     scanf("%s" ,month);
     printf("\nEnter today's year>>:");
     scanf("%d" ,&year);
     if (year < 2023)
     {
         printf("\nInvalid year!!!");
         printf("Try again");
         return ;
     }
     if (strcmp(month, "January") == 0) {
        strcpy(deadline_month, "February");
    } else if (strcmp(month, "February") == 0) {
        strcpy(deadline_month, "March");
    } else if (strcmp(month, "March") == 0) {
        strcpy(deadline_month, "April");
    } else if (strcmp(month, "April") == 0) {
        strcpy(deadline_month, "May");
    } else if (strcmp(month, "May") == 0) {
        strcpy(deadline_month, "June");
    } else if (strcmp(month, "June") == 0) {
        strcpy(deadline_month, "July");
    } else if (strcmp(month, "July") == 0) {
        strcpy(deadline_month, "August");
    } else if (strcmp(month, "August") == 0) {
        strcpy(deadline_month, "September");
    } else if (strcmp(month, "September") == 0) {
        strcpy(deadline_month, "October");
    } else if (strcmp(month, "October") == 0) {
        strcpy(deadline_month, "November");
    } else if (strcmp(month, "November") == 0) {
        strcpy(deadline_month, "December");
    } else if (strcmp(month, "December") == 0) {
        strcpy(deadline_month, "January");
        year++; // increment year if deadline is in next year
    } else {
        printf("Invalid month entered.\n");
        return;
    }
    sprintf(deadline, "%s %d", deadline_month, year);
     printf("\nEnter loan amount:");
     scanf("%f" ,&amount);

     year_int = calculate_time_period(year);
     interest = calculate_simple_interest(amount,year_int);
     total_amount = amount + interest ;

    for (int i = 0 ; i < 3 ; i++)
    {
    printf("\nEnter your card number to approve your loan>>: ");
    scanf("%s", cardNumber);

    for (int i = 0 ; i<16 ; i++){
        copy[i] = cardNumber[i];
    }

    results = sum_of_odd_digits(cardNumber) + sum_of_even_digits(cardNumber);

    if (results % 10 == 0)
        {
            printf("Credit card# is valid\n");
            printf("\t\n>>>Your loan was successfully approved<<<");
            printf("\t\n>>>loan details<<<");
            printf("\nLoan Amount: %.2f", amount);
            printf("\nLoan Period: %d months", 1);
            printf("\nInterest Rate: %.2f%%", rate);
            printf("\nTotal Payment: %.2fRWF", total_amount);
            printf("\nDeadline date of payment: %s one month from the loan period", deadline);
            printf("\nWe added your loan to your account");
            printf("\nPlease check your balance ");
            printf("\nto reach us call us on our tel#:0788504040");
            printf("\n\n>>>Thanks for choosing us<<<");

            // save the loan details into the file
            FILE *fp = fopen ("loans requested.txt" ,"a" );
            if (fp==NULL)
            {
                printf("\nCan't open file");
                exit(1);
            }
        fprintf(fp,"\n\t%s\t\t%s\t%.2fRWF\t%s\t\t%.2f%%\t\t%.2fRWF\t%s" ,account_name,copy,amount,month,rate,total_amount,deadline);
        fclose(fp);
            fclose(fp);

            break ;
        }

        else
        {
            printf("\n\tInvalid card Number");
            printf("\t\nNumber of trials remain:%d" ,3-i);
            printf("\t\nPlease try again") ;
        }
    }

    l.loan = amount;


 }
float calculate_simple_interest(float amount,int time)
{
    float rate = 9;
    float interest = (amount * rate * time) / 100.0;
    return interest;
}
int calculate_time_period(int year)
{
    time_t current_time;
    struct tm *timeinfo;
    int current_year, time_period;

    time(&current_time);
    timeinfo = localtime(&current_time);
    current_year = timeinfo->tm_year + 1900;
    time_period = current_year-year;
    time_period= time_period+1;

    return time_period;
}

void requested_loans()
{
    int pass ;

    printf ("\nHello Admin!!!");
    printf("\nTo see all requested loans provide your password!!");

    for (int i = 0 ; i < 3 ;i++)
    {
        printf("\n>>:");
        scanf("%d" ,&pass);
        if (pass == 1234)
        {
        FILE *fp = fopen("loans requested.txt", "r");

        if (fp == NULL)
        {
        printf("Error opening file.\n");
        return;
        }

        printf("\n\tBANK LOANS");
        printf("\n\t__________\n\n");
        printf( "\n\tAccount_name \tcard_number\t\tloan_amount\tmonth\t\tinterest\tpayment\t\tdeadline");
        printf( "\n\t============\t============\t\t===========\t=======\t\t==========\t============\t=========");

        char line[MAX_LINE_LENGTH];

        while (fgets(line, MAX_LINE_LENGTH, fp))
        {
        printf("%s", line);
        }

    fclose(fp);
    break ;
        }

        else
        {
           printf("\nInvalid password");
           printf("\nNumber of trials remaining:%d" ,3-i);
           printf("\nTry again");
        }
    }

}

int string_length(char *str)
{
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int get_digits(int number)
{
    return number = number % 10 + number / 10 % 10;
}

int sum_of_odd_digits(char *cardNumber)
{
    int sum = 0;
    int len = string_length(cardNumber);

    for (int i = len - 1; i >= 0; i -= 2) {
        sum += get_digits(cardNumber[i] - '0');
    }

    return sum;
}

int sum_of_even_digits(char *cardNumber)
{
    int sum = 0;
    int len = string_length(cardNumber);

    for (int i = len - 2; i >= 0; i -= 2) {
        sum += get_digits((cardNumber[i] - '0') * 2);
    }

    return sum;
}


void generated_card_number(char cardNumber[])
{
    int i, sum = 0;
    srand(time(NULL)); // initialize the random seed

    // generate random digits for the first 15 digits of the card number
    for (i = 0; i < CARD_NUMBER_LENGTH - 1; i++)
    {
        cardNumber[i] = '0' + rand() % 10;
    }

    // set the first digit to 4 (for Visa cards)
    cardNumber[0] = '4';

    // calculate the checksum digit using the Luhn algorithm
    for (i = 0; i < CARD_NUMBER_LENGTH - 1; i++)
    {
        int digit = cardNumber[i] - '0';

        if (i % 2 == 0)
        {
            digit *= 2;

            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
    }

    cardNumber[CARD_NUMBER_LENGTH - 1] = '0' + ((10 - (sum % 10)) % 10);
    cardNumber[CARD_NUMBER_LENGTH] = '\0';
}
void watch(char time_string[])
{
    while(1)
    {
        time_t current_time;
        struct tm * time_info;

        time(&current_time);
        time_info = localtime(&current_time);

        strftime(time_string, 9, "%H:%M:%S", time_info);

        printf("%s\r", time_string);

        fflush(stdout);

        sleep(1);
    }
}

void search_client() {
    char search_name[20];
    int found = 0;

    printf("Enter account name to search for: ");
    scanf("%s", search_name);

    FILE *fp = fopen("Account details.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char line[100];

    printf("\n\tACCOUNT DETAILS");
    printf("\n\t_______________\n\n");
    printf("\n\tAccount_name\tAge\tAccount_type\tOccupation\tClient's_card_number");
    printf("\n\t____________\t___\t____________\t__________\t___________________\n");

    while (fgets(line, 100, fp)) {
        if (strstr(line, search_name) != NULL) {
            printf("%s", line);
            found = 1;
        }
    }

    if (!found) {
        printf("Account name not found.\n");
    }

    fclose(fp);
}


void delete_client() {
    char filename[50];
    char name_to_delete[20];
    int found = 0;

    // Prompt user to choose file to delete from
    printf("Choose file to delete from:\n");
    printf("1. Account details.txt\n");
    printf("2. Loans requested.txt\n");
    printf("3. Bank H_activities.txt\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            strcpy(filename, "Account details.txt");
            break;
        case 2:
            strcpy(filename, "Loans requested.txt");
            break;
        case 3:
            strcpy(filename, "Bank H_activities.txt");
            break;
        default:
            printf("Invalid choice!\n");
            return;
    }

    printf("Enter the name to delete: ");
    scanf("%s", name_to_delete);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE *temp_fp = fopen("temp.txt", "w");
    if (temp_fp == NULL) {
        printf("Error creating temporary file.\n");
        fclose(fp);
        return;
    }

    char line[100];

    while (fgets(line, 100, fp)) {
        // Check if the name matches the one to delete
        if (strstr(line, name_to_delete) != NULL) {
            found = 1;
            continue; // Skip writing this line to the temporary file
        }

        // Write the line to the temporary file
        fputs(line, temp_fp);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found) {
        // Replace the original file with the temporary file
        remove(filename);
        rename("temp.txt", filename);
        printf("\n>>>Record deleted successfully!<<<");
    } else {
        // Delete the temporary file if no matching name was found
        remove("temp.txt");
        printf("\n>>>Record not found!<<<");
    }
}













