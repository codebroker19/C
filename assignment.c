#include <stdio.h>
#include <string.h>
struct student {
char name[50];
int regNo;
float cgpa;
} s[6];
int main() {
int i,j;
printf("Enter student details:\n");
for (i = 0; i < 5; ++i) {
scanf("%d\n", &s[i].regNo);
scanf("%s\n", s[i].name);
scanf("%f\n", &s[i].cgpa);
}
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
{
int x=strcmp(s[i].name,s[j].name);
if(x>0)
{
s[5] = s[i];
s[i] =s[j];
s[j] =s[5];
}
}
}
printf("Displaying Information:\n\n");
for (i = 0; i < 5; ++i) {
printf("\nReg no: %d\n",s[i].regNo);
printf("Name: ");
puts(s[i].name);
printf("Cgpa: %.1f", s[i].cgpa);
printf("\n");
}
printf("My name Debanshu Panda\n Regestration number-RA1911033010010\nCSE-(SWE)L2\n");
return 0;
}