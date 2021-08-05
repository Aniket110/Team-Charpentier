///bin/true;COMPILER_OPTIONS="-g -Wall -Wextra --std=c++14 -O1 -fsanitize=address,undefined";THIS_FILE="$(cd "$(dirname "$0")"; pwd -P)/$(basename "$0")";OUT_FILE="/tmp/build-cache/$THIS_FILE";mkdir -p "$(dirname "$OUT_FILE")";test "$THIS_FILE" -ot "$OUT_FILE" || $(which clang++ || which g++) -xc++ $COMPILER_OPTIONS "$THIS_FILE" -o "$OUT_FILE" || exit;exec "$OUT_FILE" "$@"

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
