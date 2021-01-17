//line_reading_fragment.cpp

/* Fragment 1 */

while (!input.eof())
{
​
}
​
/* Fragment 2 */

while (isdigit(input.peek())!=true)
{
    //skip line if it does not start with a digit
    // uses #include<cctype>
}

/* Fragment 3 */

while (getline(input, line))
{
    //Returns true if a line of data is present
    //Returns false if there is no data in the line
}

/* Fragment 4 */

 static int THRESHOLD = 10;
//stores minimum number of characters that must exist in a line for the program to read the line
​
ifstream infile (IN_FILE_NAME);
// construct an input file stream
​
while (getline(infile,line,'\n'))
// while lines of data exist, read in each line
{
    // checks for line breaks
    if (line.length()<THRESHOLD) //skips the line if length does not meet minimum requirement
    {
        // Do Nothing (do not read line)
    }
    else
    {
        //Read contents of the line
    }
}
