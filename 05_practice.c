// student marks sub and rank find ...write this program in array.
#include<stdio.h>

int main (){
int students=2;
int Sub=2;
int per_a,per_b;
int marks_sub[2][2];
for(int i=0 ; i<1; i++){
    for(int j=0 ; j<Sub ; j++){
        printf("The Marks of student %d in Subject %d \n",i+1,j+1);
        scanf("%d",&marks_sub[i][j]);
    }

}
for(int i=1 ; i<2; i++){
    for(int j=0 ; j<Sub ; j++){
        printf("The Marks of student %d in Subject %d \n",i+1,j+1);
        scanf("%d",&marks_sub[i][j]);
    }

}

for(int i=0 ; i<1; i++){
    for(int j=0 ; j<Sub ; j++){
       
  per_a= (marks_sub[i][j]+marks_sub[i][j]+marks_sub[i][j])/3;
     
    }
    

}
for(int i=1 ; i<2; i++){
    for(int j=0 ; j<Sub ; j++){
       
   per_b= (marks_sub[i][j]+marks_sub[i][j]+marks_sub[i][j])/3;
     
    }
     

}
if (per_a==per_b)
{
    printf("Both Rank are Equal\n");
    }

    else if (per_a<per_b)
    {
       printf("The rank of 1 is 2 And percentage is %d And The rank of 2 is 1  and percentage is %d\n",per_a,per_b);
    }
    else{
         printf("The rank of 1 is 1 And percentage is %d And The rank of 2 is 2  percentage is %d",per_a,per_b);
    }
    



// for(int i=0 ; i<students; i++){
//     for(int j=0 ; j<Sub ; j++){
//         int per;
//         per=(marks_sub[i][j]);
//         printf("The Marks of student %d in Subject %d is %d\n",i+1,j+1,marks_sub[i][j]);
//     }
//     }
return 0;
}