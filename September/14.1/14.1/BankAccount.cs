using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14._1
{
    public class BankAccount
    {
        private double balance;
        private string accountName;

        public delegate void AccountOperation(double amount);

        public BankAccount(string accountName, double initialBalance)
        {
            this.accountName = accountName;
            this.balance = initialBalance;
        }
        public void PrintBalance()
        {
            Console.WriteLine($"Current account balance {accountName}: {balance}");
        }

        public void Deposit(double amount)
        {
            balance += amount;
        }

        public void Withdraw(double amount)
        {
            if (balance >= amount)
            {
                balance -= amount;
            }
            else
            {
                Console.WriteLine($"Error: Insufficient funds in account {accountName}");
            }
        }
    }
}
