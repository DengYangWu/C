#include <stdio.h>
#include <stdlib.h>

void main() {
	char SelectKey, CreditKey, DebitKey;
	while (1) {
		do {
			puts("--------------------------------------------------------");
			puts("-             1.Quary                                  -");
			puts("-             2.Credit                                 -");
			puts("-             3.Debit                                  -");
			puts("-             4.Return                                 -");
			puts("--------------------------------------------------------");
			SelectKey = _getch();
		} while (SelectKey != '1'&&SelectKey!='2'&&SelectKey!='3'&&SelectKey!='4');
		switch (SelectKey) {
		case '1':
			puts("================================");
			puts("|    Your balance is $1000.    |");
			puts("|  Press any key to return...  |");
			puts("================================");
			_getch();
			break;
		case '2':
			do {
				puts("==================================");
				puts("|   Please select Credit money:  |");
				puts("|   1. $50                       |");
				puts("|   2. $100                      |");
				puts("|   3. Return                    |");
				puts("==================================");
				CreditKey=_getch();
			} while (CreditKey!='1'&&CreditKey!='2'&&CreditKey!='3');
			switch (CreditKey) {
			case '1':
				puts("=========================================");
				puts("|  Your Credit money is $50,Thank you!  |");
				puts("|         Press any key to return...    |");
				puts("=========================================");
				_getch();
				break;
			case '2':
				puts("=========================================");
				puts("|  Your Credit money is $100,Thank you!  |");
				puts("|         Press any key to return...    |");
				puts("=========================================");
				_getch();
				break;
			case '3':
				break;
			}
			break;
		case '3':
			do {
				puts("====================================");
				puts("|   Please select Debit money:     |");
				puts("|   1. $50                         |");
				puts("|   2. $100                        |");
				puts("|   3. $500                        |");
				puts("|   4. $1000                       |");
				puts("|   5. Return                      |");
				puts("====================================");
				DebitKey = _getch();
			} while (DebitKey != '1'&&DebitKey != '2'&&DebitKey!='3'&&DebitKey!='4'&&DebitKey!='5');
			switch (DebitKey) {
			case '1':
				puts("===========================================");
				puts("|   Your Debit money is $50,Thank you!    |");
				puts("|        Press any key to return...       |");
				puts("===========================================");
				_getch();
				break;
			case '2':
				puts("===========================================");
				puts("|   Your Debit money is $100,Thank you!   |");
				puts("|        Press any key to return...       |");
				puts("===========================================");
				_getch();
				break;
			case '3':
				puts("===========================================");
				puts("|   Your Debit money is $500,Thank you!   |");
				puts("|        Press any key to return...       |");
				puts("===========================================");
				_getch();
				break;
			case '4':
				puts("===========================================");
				puts("|   Your Debit money is $1000,Thank you!  |");
				puts("|        Press any key to return...       |");
				puts("===========================================");
				_getch();
				break;
			case '5':
				break;
			}
			break;
		case '4':
			puts("================================");
			puts("|   Thank you for your using!  |");
			puts("|            Good bye!         |");
			puts("================================");
			return;
		}
	}
}