//bank_account.h
class BankAccount
{

    public://access specifier-makes class function/method avaiable to users of the class
        int get_balance(){return balance;}//inline class function
        void deposit(int amount);
        void withdraw(int amount);

    private://access modifier-hides variable from users of the class
        int balance;
};//DON'T FORGET THE SEMICOLON!!!!!!!!!!!!! 