#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*EXPLANATION--
Row (i) |	Inner Loop Iterations (j < i) |  Output in Row
i=0     |	0 < 0 is false	              | (blank line due to printf("\n\n");)
i=1	    |    j=0 (<1)	                  |  * \t
i=2	    |    j=0, 1 (<2)	              |  * \t * \t
i=3	    |    j=0, 1, 2 (<3)	              |  * \t * \t * \t
i=4	    |    j=0, 1, 2, 3 (<4)	          |  * \t * \t * \t * \t
*/