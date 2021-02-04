/* Overloaded comparison operator */

bool Date::operator < (const Date &D) const
{
    if ((year<D.getYear())||
        (year==D.getYear() && month<D.getMonth())||
        (year==D.getYear() && month==D.getMonth() && day<D.getDay()))
        return true;
    else
        return false;
}
​
/* Overloaded equals operator */

bool Date::operator == (const Date &D) const
{
    if(year==D.getYear() && month==D.getMonth() && day==D.getDay())
        return true;
    else
        return false;
}

/* Overloaded equals operator 2 */

//HEADER FILE
bool operator==(const Person& otherPerson) const;
​
//IMPLEMETATION FILE
bool Person::operator==(const Person& otherPerson) const
{
    if (lastName == otherPerson.lastName && middleName == otherPerson.middleName && firstName == otherPerson.firstName)
        return true;
    else
        return false;
}

/* Overloaded print operator */

ostream& operator << (ostream &os, const Date &D)
{
    os<<D.day<<"-"<<D.month<<"-"<<D.year<<endl;
    
    return os;
}
