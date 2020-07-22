main()
{
    struct book
    {
        float price;
        int pages;
        char name;
    };
    struct book b1,b2,b3;
    printf("enter");
    scanf("%f %d %c",&b1.price,&b1.pages,&b1.name);
    scanf("%f %d %c",&b2.price,&b2.pages,&b2.name);
    scanf("%f %d %c",&b3.price,&b3.pages,&b3.name);
    printf("thus:");
    printf("\n%f %d %c\n",b1.price,b1.pages,b1.name);
    printf("\n%f %d %c\n",b2.price,b2.pages,b2.name);
    printf("\n%f %d %c\n",b3.price,b3.pages,b3.name);

    
}