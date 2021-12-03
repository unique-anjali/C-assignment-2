//w.a.p. to check given no. is +ve or -ve or 0.
main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>0)
        printf("the given number is positive.");
    else if(n<0)
        printf("the given number is negative.");
    else
        printf("the given number is zero.");
}
