/* Adds two fractions */
# include <stdio.h>
int main(void){
	int item_numer, month, day, year;
	float unit_price;
	printf("Enter item number: \n");
	scanf("%d", &item_numer);
	printf("Enter unit price: \n");
	scanf("%f", &unit_price);
	printf("Enter purchse date(mm/dd/yyyy): \n");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%-20s%-20s%-20s\n", "Item", "Unit\nPrice", "Purchase\nDate");
	return 0;
}