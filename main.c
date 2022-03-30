#include<stdio.h>

int acc(int kokong[3][2], int user, int passw) {

    int tan=0;

          for(int i=0;i<3;i++)
            {

              if(user==kokong[i][0] && passw==kokong[i][1]){

                tan=1;}

            }
              return tan;
}
     int main(){

           int kokong[3][2]=
           {{1111,2222},
           {3333,4444},
           {5555,6666}};

                              int user, passw;

                                    printf("Welcome people of new earth\n");

                                    printf("USER:");

                                    scanf("%d",&user);

                                    printf("\nPASSWORD:");

                                    scanf("%d",&passw);



           if(acc(kokong,user,passw))
         {
              printf("\nHELLO USER:%d\n",user);
         }


           else {

              printf("\nSOMETHING'S WRONG\n");
         }



    return 0;
}

