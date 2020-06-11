#include <stdio.h>
#define length 3
//define is precomiler directive which substitutes the defined name with its value
//format #define <name> <value>
//in this example #define will substitute every length in the program code with 3
//note define works before actual compilation


float calculatePayment(int itemNum[], float itemPrice[]){//calculatePayment is taking two array as arguments
    int i;  //i will be used in the loop
    float payment=0;    //payment is defined as float value and initialised to 0
    for (i=0;i<length;i++){
        payment += itemNum[i] * itemPrice[i]; // this will look like payment = payment + itemNum[i] * itemPrice[i]
    }
    return payment; //return payment to the called function in this case only to setArray()
}

float setArray(){
    float price[length];    //price array of float type
    int quantity[length];   // quantity array of int type
    int i;
    printf("Item Price\tQuantity\n");
    for (i=0;i<length;i++){
        scanf("%f %d",&price[i], &quantity[i]); //taking input in a single scanf
    }
    return calculatePayment(quantity, price); // returning the value returned from calculatePayment
}

int main(){
    float toPay = setArray();
    printf("RM %.2f to be paid\n", toPay);  //in this %.2f means toPay will be displayed only upto 2nd decimal place
    return 0;
}