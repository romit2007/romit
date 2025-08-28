#include <stdio.h>

int main() {
    char candidate[] = {'A', 'B', 'C'};
    int votes[3] = {0, 0, 0};
    int choice, i;

    for(i = 1; i <= 5; i++) 
    {
        printf("\n-- ELECTION --");
        printf("\n Vote for A");
        printf("\n Vote for B");
        printf("\n Vote for C");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                votes[0]++;
                break;
            case 2:
                votes[1]++;
                break;
            case 3:
                votes[2]++;
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    

    
    printf("\n Voting Results:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Candidate %c: %d votes\n", candidate[i], votes[i]);
    }
    
    if (votes[0] > votes[1] && votes[0] > votes[2]) 
    {
    printf("The winner is Candidate A with %d votes \n", votes[0]);
    }
      else if (votes[1] > votes[0] && votes[1] > votes[2]) {
    printf("The winner is Candidate B with %d votes \n", votes[1]);
    }
    else if (votes[2] > votes[0] && votes[2] > votes[1]) 
   {
    printf("The winner is Candidate C with %d votes \n", votes[2]);
   }
   else 
   {
    printf("There is a tie between candidates \n");
   }


    return 0;
}
