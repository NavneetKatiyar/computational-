#include<stdio.h>
#include<math.h>
double f(double x){          //funciton
    return x*x-4 ;           //equation
}
main(){
    int iter=1,maxiter;
    double x1,x2,x3,accuracy;
    printf("Enter the accuracy desired: \n");
    scanf("%lf",&accuracy);
    printf("Enter the intial guesses: \n x1 = ");
    scanf("%lf",&x1);
    printf("x2 = ");
    scanf("%lf",&x2);
    printf("Enter the max number of iterations to be performed: ");
    scanf("%d",&maxiter);
    printf("iter\tx1\t\tx2\t\tx3\t\tf(x3)\n");
    printf("___________________________________________________________________\n");
    do{
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        printf("%d\t%lf\t%lf\t%lf\t%lf\n",iter,x1,x2,x3,f(x3));
        x1=x2;
        x2=x3;
        iter++;
    }while(fabs(f(x3))>accuracy&&iter<=maxiter);
    printf("\nOne of the roots is: %lf",x3);
}
