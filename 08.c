//w.a.p which takes marks of 5 subjects assume max marks for each subject is 100.display result as pass or fail also show obtained division.
main()
{
    int n1,n2,n3,n4,n5;
    int m_marks,scored;
    float per;
    printf("enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    m_marks=500;
    scored=n1+n2+n3+n4+n5;
    printf("total marks obtained=%d\n",scored);
    per=((float)scored/m_marks)*100;
    printf("percentage=%.2f\n",per);
    {
        if(per<33)
            printf("status=Fail");
        else
            printf("status =Pass\n");
    }
    {
        if(per>=80)
            printf("Division=First\n");
        else if(per>=60)
            printf("Division=Second\n");
        else if(per>=50)
            printf("Division=Third\n");
        else if(per>=33&&per<=49)
            printf("Division=only qualified\n");
    }
}
