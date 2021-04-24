#include<stdio.h>
int main()
{
    int totalcost1,tipcent,taxcent;
    float mealcost,totalcost,tip,tax;
    scanf("%f",&mealcost);
    scanf("%d",&tipcent);
    scanf("%d",&taxcent);
    tax=(mealcost*taxcent)/100;
    tip=(mealcost*tipcent)/100;
    totalcost=mealcost+tax+tip;
    totalcost1=totalcost*1;
    totalcost1=totalcost1/1;
    printf("%d",totalcost1);
    
    return 0;
}
int main(){
    int q; 
    scanf("%d",&q);
    char h[] = "hackerrank";
    int i,j=0;
    for(int a0 = 0; a0 < q; a0++)
    {
        j=0;
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if(h[j]==s[i])
            {
                j++;
            }
        }
        if(j==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}