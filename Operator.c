#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double mealCost, totalCost;
    float tip, tax;
    int tipPercent, taxPercent, total;
    scanf("%lf", &mealCost);
    scanf("%d", &tipPercent);
    scanf("%d", &taxPercent);
    tip = mealCost * tipPercent/100;
    tax = mealCost * taxPercent/100;
    totalCost = mealCost + tip + tax;
    total = totalCost;
    printf("%0.lf\n",round(totalCost));
    return 0;
}
