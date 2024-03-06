#include <stdio.h>
#include <stdlib.h>
struct ipadress{
    int ip1;
    struct ipadress* next;

};
typedef struct ipadress ipad;
typedef struct bigipp{
    ipad *heads;
    ipad *headd;
    int freq;
}bigip;
ipad* ipCreate()
{
  


}
void main()
{
    for(int i=1;i<22222;i++)
    {
        bigip *tmp;
        tmp->heads = ipCreate();
        tmp->headd = ipCreate();

    }
}