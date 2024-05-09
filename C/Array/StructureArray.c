
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int rollno;
} s[10];

int main()
{
    int ch, f, h, x, cha, newroll, i, vb, cv, w;
    int r = 0;
    int v = 0;
    char zz[20];
    char emt[20];
    printf("Enter Number of Student \n");
    scanf("%d", &ch);
    printf("Enter Data of %d Students\n", ch);
    for (int i = 0; i < ch ; i++)
    {
        printf("Enter Details of Student -%d\n", i+1);
        printf("Enter Your Name \n");
        scanf("%s", s[i].name);
        printf("Enter Your Roll number \n");
        scanf("%d", &s[i].rollno);
    }
    do
    {
        printf("\t\tOperation Menu : \n\t\t1.Inseration of Record\n\t\t2.Deletion of Record \n\t\t3.Updation of Record\n\t\t4.Display Records\n");
        printf("Enter Your Choice\n");
        scanf("%d", &f);
        switch (f)
        {
        case 1: //inseration of Record
        
            printf("Enter Number of Student Data to been Inserted \n");
            scanf("%d", &cha);
            if(cha+ch<10){
            printf("Enter Data of %d Students\n", cha);

            for (int i = ch ; i < cha + ch; i++)
            {
                printf("Enter Details of Student -%d\n", i+1);
                printf("Enter Your Name \n");
                scanf("%s", s[i].name);
                printf("Enter Your Roll number \n");
                scanf("%d", &s[i].rollno);
            }
            ch += cha;
            printf("Record Updated !!!!!\n");
            }
            else{
            printf("DATA LIMIT REACHED !!!!!!!! [Data Limit : 10] \n");
            }      
            break;
        case 2: //Deletion of record
            r = 0;
            v = 0;
            printf("Enter Your Roll Number\n");
            scanf("%d", &h);
            for (int i = 0; i < ch ; i++)
            {
                if (h == s[i].rollno)
                {
                    r++;// flag variable
                   v=i; //storing index of flag varible 
                    break;
                }
            }
            if (r != 0)
            {
                for (i=v; i <=ch; i++)
                {
                    s[i] = s[i + 1];
                    strcpy(s[i].name, s[i + 1].name);
                    
                }
                printf("Record Deleted!!!!!\n");
                ch--;
            }

            else
            {
                printf("Invalid Roll Number\n ");
            }

            break;
        case 3: //Upadation of Record
            printf("\t\t:"
                   "Upadation Menu : \n\t\t1.Update Roll Number \n\t\t2.Update Name\n ");
            printf("Enter Your Choice\n");
            scanf("%d", &x);
            switch (x)
            {
            case 1: //upadte roll no
                r = 0;
                v = 0;
                printf("Enter Your Current Roll Number\n");
                scanf("%d", &cv);
                for (int i = 0; i < ch; i++)
                {
                    if (cv == s[i].rollno)
                    {
                        r++;// flag variable
                        v = i;//storing index of flag varible 
                    }
                }
                if (r != 0)
                {
                    printf("Enter Your New Roll Number \n");
                    scanf("%d", &newroll);
                    s[v].rollno = newroll;

                    printf("Record Updated!!!!! \n");
                    break;
                }
                else
                {
                    printf("Invalid Roll Number\n ");
                }

                break;
            case 2: //update name
                r = 0;//flag and index storing variable 
                v = 0;
                printf("Enter Your Current Name \n");
                scanf("%s", emt);
                for (int i = 0; i < ch; i++)
                {
                    vb = strcmp(emt, s[i].name);
                    if (vb == 0)
                    {
                        r+=5;// flag variable
                        v = i;//storing index of flag varible
                        break;
                    }
                }
                if (r!= 0)
                {
                     printf("Enter Your New Name ");
                    scanf("%s", zz);
                    strcpy(s[v].name, zz);
                    printf("Name Updated!!!");
                }
                else
                {
                  
                   
                    printf("Name Not Found ");
                }
                break;
            default:
                printf("Invalid Choice\n");
            }
            break;
        case 4: //display Reocrd
            for (int i = 0; i < ch ; i++)
            {
                printf("Data of Student - %d", i+1);
                printf("\n\tName :%s\n\tRoll number :%d\n", s[i].name, s[i].rollno);
            }
            break;
        default:
            printf("Invalid Choice");
        }
        printf("\nIf You want To Continue with Opration [PRESS 1]");
        scanf("%d", &w);
    } while (w == 1);
     return 0 ;
}
