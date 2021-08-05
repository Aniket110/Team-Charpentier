#!/usr/bin/node

function hammingDist(str1, str2)
{
    let i = 0, count = 0;
    while (i < str1.length)
    {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}
    var Name = "Aniket";
    var Email = "aniket@something.com";
    var Slackusername = "@Viny_joshi";
    var Biostack = "Something";
    var Twitter = "@viny-joshi";

    console.log(Name +',' + Email +','+ Slackusername +','+ Biostack + ","+ Twitter+ ","+ hammingDist (Slackusername, Twitter));
