Scenario 3:
Payment Gateway Simulation
Answer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int method, bank;
	while (1) {
		printf("Select Payment Method (1-3):\n1 for Credit/Debit Card\n2 for UPI\n3
		       for Net Banking\n");
		       scanf("%d", &method);
		switch (method) {
		case 1:

		{
			char cardnumber[17];

				printf("Enter a 16-digit card number\n");

				scanf("%16s", cardnumber);
				if (strlen(cardnumber) != 16) {
					printf("Transaction Failed. Please try again.\n");

					break;
				}
				printf("Payment Successful!!\n");
			}
			break;
			case 2:
			{
				char upiid[50];

				printf("Enter a valid UPI ID (e.g., user@upi)\n");

				scanf("%s", upiid);
				if (strstr(upiid, "@upi") == NULL) {
					printf("Transaction Failed. Please try again.\n");

					break;
				}
				printf("Payment Successful!!\n");
			}
			break;
			case 3:
				printf("Select a bank from predefined options (e.g., 1 for SBI, 2 for
				       HDFC)\n");
				scanf("%d", &bank);
				if (bank == 1 || bank == 2) {
					printf("Payment Successful!!\n");
				} else {
					printf("Invalid bank. Please try again\n");
					break;
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid payment method. Please try again\n");
				break;
			}
	}
}
