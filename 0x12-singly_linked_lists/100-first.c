#include "lists.h"
/**
 * myStartupFun - prints before main function is called.
 * Apply the constructor attribute to myStartupFun() so that it
 * is executed before main() myCleanupFun - prints/executes
 * after main function is called Apply the destructor attribute
 * to myCleanupFun() so that it is executed after main()
 * void myStartupFun (void) __attribute__ ((constructor));
 * void myCleanupFun (void) __attribute__ ((destructor));
 */
void myStartupFun(void)
{
char *str1, *str2;
str1 = "You're beat! and yet, you must allow,";
str2 =  "I bore my house upon my back!";
printf("%s\n%s\n", str1, str2);
}
