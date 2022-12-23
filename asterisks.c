int main()
{
    long int numOfAsterisks;
    long int i=0;
    printf("Enter a number of asterisks you would like to see: ");
    scanf("%ld", &numOfAsterisks);

    while(i<=numOfAsterisks)
    {
        printf("*");
        i--;
    }
    printf("\n");
    return 0;
}
