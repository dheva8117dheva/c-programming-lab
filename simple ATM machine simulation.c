#include<stdio.h>

int main()
{
    int choice;
    float balance=1000.00,amount;

    while(1){
        printf("\n===ATM MENU===\n");
        printf("1.View Balance\n");
        printf("2.Deposite Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exite\n");
        printf("Enter your choice:");
        scanf("%d",&choice:);

        switch(coice){
      case 1:
        printf("Your balance:Rs%.2f\n",balance);
        break;
        case2:
        print("Enter amount to deposite:Rs");
        scanf("%f",&amount);
        balance+=amount;
        printf("Deposite Sucessful!\n");
      break;
        case 3:
            printf("Enter amount to withdraw:Rs");
            scanf("%f",&amount);
            if(amount<=balance){
                balance-=amount;
                print("Withdrawal Sucessful!\n");

            } else{
            pritf("Insuffi9cient Balance!\n");
            }
            break;
        case 4:
            printf("Thank you!Visit Again\n");
            retrun 0;// ends the program
        default:
            print("Invalid Coice!\n");
        }
    }
    return 0;
}
