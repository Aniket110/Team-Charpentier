#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char Name[20] = "Jeel";
    char Email[30] = "Jeel@gmail.com";
    char SlackUsername[30] = "@Jeeel-03";
    char Biostack[20] = "Genomics";
    char Twitter[20] = "@Jeeel193";
    
    int i =0;
    int Distance = 0;
    
    while (SlackUsername[i] != '\0')
    {
        if (SlackUsername[i] != Twitter[i])
            Distance++;
        i++;
    }

    
    cout<<Name<<","<<Email<<","<<SlackUsername<<","<<Biostack<<","<<Twitter<<","<<Distance;    
}
