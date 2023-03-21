#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// Create a Book structure
/*struct Book
{
    char name[40];
    float cost;
    int pages;
}b1 = {0}; //1 way to declare a struct var

struct Book b2 = {"Hairy Potter", 420.69, 900}; //declaration & definition of struct var

int main(){
    // printf("Book 1:\n%s\n%f\n%d\n\n", b1.name, b1.cost, b1.pages);
    // printf("Book 2:\n%s\n%.2f\n%d\n\n", b2.name, b2.cost, b2.pages);

    //addresses of structure, struct elements
    // printf("Address of struct var b2: %u\n", &b2);
    // printf("Address of name: %u\n", b2.name);
    // printf("Address of cost: %u\n", &b2.cost);
    // printf("Address of pages: %u\n", &b2.pages);

    struct Book b[3];
    printf("%u %u %u\n", b, b+1, b+2);
    return 0;
}//*/

/*int main(){    
    struct Book b[3]; //creating an array of Book objects

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, price & no. of pages:\n");

        scanf("%[^\n]s", b[i].name);

        scanf("%f %d", &b[i].cost, &b[i].pages);
        while (getchar() != '\n');
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
        printf("%s %.2f %d\n", b[i].name, b[i].cost, b[i].pages);
}//*/

//---------------------------------------------|
//a. Student Database
/*#pragma pack(1)
struct Student
{
    char name[29];
    char reg_no[11];
    char dept[7];
    char course[20];
    int year_of_joining;
}s[3];

void joined_in_specific_year()
{
    printf("Which year's batch list do you want? ");
    int year;
    scanf("%d", &year);
    
    printf("\nStudents who joined in %d are:\n", year);

    for (int i = 0; i < 3; ++i)
    {
        if (s[i].year_of_joining == year)
            printf("%s\n", s[i].name);
    }
}

void student_details(char *roll_no)
{
    for (register int i = 0; i < 3; ++i)
    {
        if ( !strcmp(roll_no, s[i].reg_no) )
            printf("\nName: %s\nDepartment: %s\nCourse: %s\nYear of joining: %d\n", s[i].name, s[i].dept, s[i].course, s[i].year_of_joining);
    }
    
}

int main(int argc, char const *argv[])
{
    printf("Enter students' details\n\n");

    for (int i = 0; i < 3; ++i)
    {
        printf("Name: ");
        scanf("%[^\n]28s", s[i].name);

        while (getchar() != '\n');

        printf("Reg. no.: ");
        scanf("%10s", s[i].reg_no);

        while (getchar() != '\n');

        printf("Department: ");
        scanf("%6s", s[i].dept);

        while (getchar() != '\n');

        printf("Course: ");
        scanf("%[^\n]19s", s[i].course);

        while (getchar() != '\n');

        printf("Year of joining: ");
        scanf("%4d", &s[i].year_of_joining);

        while (getchar() != '\n');
        printf("\n");
    }
    
    joined_in_specific_year();

    printf("\nEnter the roll no. of the student whose details you want: ");
    char roll_no[11];
    scanf("%10s", roll_no);
    student_details(roll_no);
    
    return 0;
}//*/

//----------------------------------------------|
//b. Bank Customer Database
/*#pragma pack(1)
struct Customer
{
    char name[20];
    int account_no;
    int account_balance;
};

void balance_below_minimum(struct Customer *c, int n) //pointer to struct, no of customers
{
    printf("\nMinimum amount required: ");
    int min_amnt, all_rich = 1;
    scanf("%d", &min_amnt);
    
    printf("\nCustomers with balance less than %d --\n", min_amnt);

    for (register int i = 0; i < n; ++i)
    {
        if (c[i].account_balance < min_amnt)
        {
            all_rich = 0;
            printf("Account number: %d\nName: %s\n\n", c[i].account_no, c[i].name);
        }        
    }

    if (all_rich)
        printf("None\n");
}

void action_of_customer(struct Customer *c, int n, int customer_action)
{
    int min_amnt = 10000;

    printf("\nEnter account no.: ");
    int acc_no;
    scanf("%d", &acc_no);
    getchar();

    for (register int i = 0; i < n; ++i)
    {
        if (c[i].account_no == acc_no)
        {
            printf("Enter amount: ");
            int amount; //for withdrawal or deposit
            scanf("%d", &amount);

            switch (customer_action)
            {
            case 0: //withdrawal
                if (c[i].account_balance >= min_amnt && c[i].account_balance >= amount)
                {
                    c[i].account_balance -= amount;
                    printf("Total available balance: %d\n", c[i].account_balance);
                }
                else
                    printf("The balance is insufficient for the specified withdrawal\n");

                break;
            
            default: //deposit
                c[i].account_balance += amount;
                printf("Total available balance: %d\n", c[i].account_balance);
            }

            break;
        }

        else
            printf("No such account number found\n");
    }    
}

int main(int argc, char const *argv[])
{
    printf("How many customers? ");
    int n;
    scanf("%d", &n);
    getchar();

    struct Customer c[n];

    for (register int i = 0; i < n; ++i)
    {
        printf("\nCustomer %d --\n", i+1);
        printf("Name: ");
        scanf("%[^\n]19s", c[i].name);

        printf("Account number: ");
        scanf("%d", &c[i].account_no);

        printf("Account balance: ");
        scanf("%d", &c[i].account_balance);

        getchar();
    }

    // balance_below_minimum(c, n);

    //customer actions
    printf("\nEnter 0 for Withdrawal, 1 for Deposit, 2 for Exit: ");
    int customer_action;
    scanf("%d", &customer_action);

    if (customer_action == 0 || customer_action == 1)
        action_of_customer(c, n, customer_action);

    return 0;
}//*/

//-------------------------------------------|
//c. Car Engine Parts
/*#pragma pack(1)
struct Engine_Part
{
    char serial_no[4];
    int year_of_manufacture;
    char material[16];
    int quantity;
};

//function to print info of parts with SNos b/w BB1 & CC6
void bb2_to_cc5(struct Engine_Part *ep, int n)
{
    printf("\nParts b/w BB1 & CC6:\n");

    for (register int i = 0; i < n; ++i)
    {
        if ((ep[i].serial_no[0] == 'B' && ep[i].serial_no[2] > '1') || 
            (ep[i].serial_no[0] == 'C' && ep[i].serial_no[2] < '6')) //if SNo falls b/w BB1 & CC6
        {
            printf("%s %d %s %d\n", ep[i].serial_no, ep[i].year_of_manufacture, ep[i].material, ep[i].quantity);
        }
    }    
}

int main(int argc, char const *argv[])
{
    printf("How many parts? ");
    int n; //no of parts
    scanf("%d", &n);
    getchar();

    struct Engine_Part ep[n];

    printf("\nEnter serial no, year of manufacture, material and quantity:");
    for (register int i = 0; i < n; ++i)
    {
        printf("\nEngine Part %d--\n", i+1);

        scanf("%3s", ep[i].serial_no);
        scanf("%4d", &ep[i].year_of_manufacture);
        scanf("%s", ep[i].material);
        scanf("%d", &ep[i].quantity);

        getchar();
    }

    bb2_to_cc5(ep, n);
    return 0;
}//*/