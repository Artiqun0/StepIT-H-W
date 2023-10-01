using _14._1;
using System.Security.Principal;


BankAccount account = new BankAccount("Ivanov Ivan", 1000.0);

BankAccount.AccountOperation deposite = account.Deposit;
deposite(500);
account.PrintBalance();

BankAccount.AccountOperation withdraw = account.Withdraw;
withdraw(300);
account.PrintBalance();

withdraw(1500);
account.PrintBalance();