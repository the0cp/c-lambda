#include <stdio.h>

#define lambda(lambda$_ret, lambda$_args, lambda$_body)\
  ({\
    lambda$_ret lambda$__anon$ lambda$_args\
      lambda$_body\
    &lambda$__anon$;\
  })

int main(int argc, char *argv[])
{
    printf( "Sum = %d\n", lambda( int, (int x, int y){ return x + y; })(1, 2) );
    return 0;
}
