#include<stdio.h>
#include<stdlib.h>

int main(){
    int unit;
    float amt, total_amt,sur_charges;

    printf("Enter total unit consumed : ");
    scanf("%d", &unit);

    if (unit<=50){
        amt = unit * 0.50;
    }
    else if (unit<=150){
        amt = 25 + ((unit-50)*0.75);
    }
    else if(unit<=250){
        amt = 100 + ((unit-150) * 1.20);
    }
    else{
        amt = 220 + ((unit-250) * 1.50);
    }
    sur_charges = amt * 0.20;
    total_amt = amt + sur_charges;

    printf("Electric bill = Rs. %.2f",total_amt);
    return 0;
}

/*Logic to calculate net electricity bill
Step by step descriptive logic to compute electricity bill.
Input unit consumed by customer in some variable say unit.
If unit consumed less or equal to 50 units. Then amt = unit * 0.50.
If unit consumed more than 50 units but less than 100 units. Then add the first 50 units amount i.e. 25 to final amount and compute the rest 50 units amount. Which is given by amt = 25 + (unit-50) * 0.75. I have used units-50, since I already calculated first 50 units which is 25.
Similarly check rest of the conditions and calculate total amount.
After calculating total amount. Calculate the surcharge amount i.e. sur_charge = total_amt * 0.20. Add surcharge amount to net amount. Which is given by net_amt = total_amt + sur_charge.*/