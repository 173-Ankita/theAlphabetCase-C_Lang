# include <stdio.h>
# include <string.h>
int inStrLen(char str[]);
int main()  {
    int choice;
    char inStr[25];
    int l = inStrLen(inStr);
    int opStr[l-1];
    
    printf("Hello there!\n");
    printf("Enter the String which is to be transformed: ");
    gets(inStr);
    printf("In Order to Activate the Desired Functionality:\n");
    printf("[1] Press 1 to turn the entire putin text into CAPITALS.\n");
    printf("[2] Press 2 to turn the entire putin text into smallcase.");
    printf("\nGive the Functionality to be executed: ");
    scanf("%d", &choice);
    if (choice == 1 || choice == 2)    {
        if (choice == 1)    {
            int CAPCo1;
            int SMCo1 = 97;
            int j = 0;
            int i;
    
    
            for (i = 0; inStr[i] != '\0'; i++)  {
                if (inStr[i] == ' ')  {
                    opStr[j] = ' ';
                }
                else  {
                    for (CAPCo1 = 65; inStr[i] != CAPCo1; CAPCo1++)  {
                        ++SMCo1;
                    }
                    opStr[j] = SMCo1;
                }    
                j++;
                SMCo1 = 97;
            }
        }
        
        else    {
            int SMCo2;
            int CAPCo2 = 65;
            int j = 0;
            int i;
    
    
            for (i = 0; inStr[i] != '\0'; i++)  {
                if (inStr[i] == ' ')  {
                    opStr[j] = ' ';
                }
                else  {
                    for (SMCo2 = 97; inStr[i] != SMCo2; SMCo2++)  {
                        ++CAPCo2;
                    }
                    opStr[j] = CAPCo2;
                }    
                j++;
                CAPCo2 = 65;
            }
        }
        int k; 
        for(k = 0; k<l ; k++)  {
                printf("%c", opStr[k]);
        }
    }
    
    else {
        printf("Invalid Entry!! Unable to accept such a response.");
    }
    
    return 0;
}

int inStrLen(char str[])  {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        i++;
        count++;
    }
    return count;
}
