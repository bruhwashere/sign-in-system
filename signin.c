#include <stdio.h>
#include <string.h>

int main()
{
    char name [50];
    char password [50];
    char confirm_password [50];
    int age;
    int phone_number;

    int age2;
    int phone_number2;
    char name2 [50];

    printf("welcome to the sign in page.\n");
    
    printf("enter your name: ");
    scanf("%s", name); 

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 100 || age <18)
    {
        printf("you are not allowed to sign in because you are either above 100 years old or below 18 years old.\n");
        goto end;
    }
    else if (age >= 18)
    {
        printf("you are allowed to sign in because you are above 18 years old.\n");
    }

    printf("enter your phone number: ");    
    scanf("%d", &phone_number);

    if (phone_number < 1000000000 || phone_number > 9999999999)
    {
        printf("you are not allowed to sign in because you have entered an invalid phone number.\n");

        goto end;
    }
    else if (phone_number >= 1000000000 && phone_number <= 9999999999)
    {
        printf("you are allowed to sign in because you have entered a valid phone number.\n");
    }

    printf("enter your password: ");
    scanf("%s", password);  
    
    if (password[0] == '\0') 
    {
        printf("Error: Password cannot be empty.\n");
        goto end;
    }

    char decision;
    
    printf("is anything wrong in the given information?\n(if yes = y, if no = n): ");
    scanf(" %c", &decision);

    if (decision == 'y')
    {
        char what;

        printf("what is wrong in the given information?\n (for name = n, for age = a, for phone number = p): ");
        scanf(" %c", &what);

        if (what == 'n')
        {
            printf("you have entered the wrong name.\n");

            printf("enter your name again: ");
            scanf("%s", name2);

            printf("your name is : %s\n", name2);
            printf("your age is : %d\n", age);
            printf("your phone number is : %d\n", phone_number);

        }
        else if (what == 'a')
        {
            
            printf("you have entered the wrong age.\n");
            printf("enter your age again: \n\n");
            scanf("%d", &age2);

            printf("your name is : %s\n", name);
            printf("your age is : %d\n", age2); 
            printf("your phone number is : %d\n", phone_number);

        }
        else if (what == 'p')
        {
            
            printf("you have entered the wrong phone number.\n");
            printf("enter your phone number again: \n\n");
            scanf("%d", &phone_number2);

            printf("your name is : %s\n", name);
            printf("your age is : %d\n", age);
            printf("your phone number is : %d\n", phone_number2);
        }
        else
        {
            printf("Invalid input for what is wrong.\n");
        }
    }
    else if (decision == 'n')
    {
        printf("thank you for providing the correct information.\n\n");

        printf("your name is: %s\n", name);
        printf("your age is: %d\n", age);   
        printf("your phone number is: %d\n", phone_number);

    }
    else
    {
        printf("Invalid input for decision.\n");
    }
    
end:
    printf("thank you for using this program.\n");
    return 0;
}