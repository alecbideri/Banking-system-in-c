# Command-Line Banking System

Welcome to the Command-Line Banking System! This system simulates banking operations for both admin and user use cases.

## Features
1. **User Operations:**
   - `open_account()`: Open a new bank account.
   - `account_detail()`: View account details.
   - `show_balance(float balance)`: Display account balance.
   - `deposit()`: Deposit money into the account.
   - `withdraw(float balance)`: Withdraw money from the account.
   - `requested_loans()`: Request a loan.
   - `bank_loans()`: View available bank loans.
   - `bank_clients()`: View list of bank clients.
   - `generated_card_number()`: Generate a new card number.
   - `watch(char time_string[])`: Check time and date.
   - `bank_hist()`: View banking history.
   - `view_history()`: View transaction history.
   - `search_client()`: Search for a client.
   - `delete_client()`: Delete a client.
   - `clean_stdin()`: Clean the standard input buffer.

2. **Admin Operations:**
   - [List of user operations]

## How to Use
1. Clone or download this repository to your local machine.
2. Compile the source code using your preferred compiler.
3. Run the compiled executable file to start the Banking System.
4. Follow the on-screen instructions to perform various banking operations.

## Usage Examples
```bash
$ ./banking_system.exe

Welcome to the Command-Line Banking System!

1. User Operations
2. Admin Operations
3. Exit

Choose an option: 1

User Menu:
1. Open Account
2. Deposit
3. Withdraw
4. Request Loan
5. View Balance
6. View History
7. Exit

Choose an option: 2
Enter deposit amount: 1000
Deposit successful! Updated balance: $1000.00

