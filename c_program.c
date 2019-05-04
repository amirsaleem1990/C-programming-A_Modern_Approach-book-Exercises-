/* Adds two fractions */
# include <stdio.h>
int main(void){
	int item_number=583, month, day, year;
	float unit_price=13.5;
	// printf("Enter item number: \n");
	// scanf("%d", &item_number);
	// printf("Enter unit price: \n");
	// scanf("%f", &unit_price);
	// printf("Enter purchse date(mm/dd/yyyy): \n");
	// scanf("%d/%d/%d", &month, &day, &year);
	printf("%-30s%-30s%-30s%14s%29s\n", "Item", "Unit", "Purchase\n", "Price", "Date");
	printf("%-30d$  %-30.2f", item_number, unit_price);
	return 0;
}