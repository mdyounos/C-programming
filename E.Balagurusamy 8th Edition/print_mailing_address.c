// Name,Door No,Street,City,Pin Code
// John Doe,221B,Baker Street,London,NW1 6XE
// Jane Smith,742,Evergreen Terrace,Springfield,62704

#include <stdio.h>
#include <string.h>
int main()
{
    char Name[20] = "Jane Smith";
    int Door_No = 742;
    char Street[20] = "Evergreen Terrace";
    char City[20] = "Springfield";
    int Pin = 62704;
    printf("%s\n", Name);
    printf("%d,%s\n", Door_No, Street);
    printf("%s,%d", City, Pin);
    return 0;
}
