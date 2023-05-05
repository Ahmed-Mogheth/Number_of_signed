#include <stdio.h>
#include <stdlib.h>


    unsigned int NumberOne=4;
    unsigned int NumberTwo=5;
    unsigned char Number1 =33;
    unsigned char Test1 ='a';
    unsigned char Test2 ='b';
    unsigned char Test3 =99;
    float EE =4.5454;

int main()
{
    printf ("NumberOne = %i \n",NumberOne);
    printf ("NumberTwo = %i \n",NumberTwo);
    printf ("NumberOne = %i \t NumberTwo =%i \n",NumberOne,NumberTwo);
    printf ("Number1 = %i\n" ,Number1);
    printf ("Test1 = %i\n",Test1);
    printf ("Test3 = %c\n",Test3);
    printf ("EE = %f \n" , EE);
    printf ("EE = % 0.2f \n " , EE);
    printf ("sizeof int %i \n", sizeof(int));
    printf("sizeof char %i \n ", sizeof (char));
    printf ("sizeof char %i \n", sizeof (long int ));
    printf ("sizeof char %i \n", sizeof (long long));

    return 0;
}
