//bank_account.h
class BankAccount
{

    public://access specifier-makes class function/method avaiable to users of the class
        BankAccount() : balance(0){} // user defined default constructor
        BankAccount(int b) : balance(b){}//user created constructor
        int get_balance(){return balance;}//inline class function
        void deposit(int amount);
        void withdraw(int amount);
        static int get_bank_balance(){return bank_balance}

    private://access modifier-hides variable from users of the class
        int balance;
    
    //DON'T FORGET THE SEMICOLON!!!!!!!!!!!!! 


    //THESE ARE NOT BANK ACCOUNT CLASSES! They are free classes
    void display_bank_account(BankAccount& account);

    BankAccount get_bank_account();

};