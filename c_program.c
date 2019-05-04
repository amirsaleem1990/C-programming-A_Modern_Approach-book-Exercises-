/* Adds two fractions */
# include <stdio.h>
int main(void){
	int item_number, month, day, year;
	float unit_price;
	printf("Enter item number: \n");
	scanf("%d", &item_number);
	printf("Enter unit price: \n");
	scanf("%f", &unit_price);
	printf("Enter purchse date(mm/dd/yyyy): \n");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("\n%-30s%-30s%-30s%14s%29s", "Item", "Unit", "Purchase\n", "Price", "Date");
	printf("\n%-30d$%-29.2f%d/%d/%d\n", item_number, unit_price, month, day, year);
	return 0;
}