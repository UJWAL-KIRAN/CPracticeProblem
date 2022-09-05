char utol(char in)
{
    char result;
    result = in + 32;
    return result;

}

double areaofcircle(double radius)
{
    double area;
    area = 3.1412*radius;
    return area;
}
double simpleinterest(double principle,double RoI, double Time)
{
    double result;
    result = (principle*RoI*Time)/100;
    return result;
}
double compoundinterest(double principle,double RoI, double Time)
{
    double result;
    result = (principle*(1+RoI)*Time)-principle;
    return result;
}
int eveorodd(int var)
{
   int result;
    result = ((var%2)==0)?1:0;
    return result;
}
int leap(int year)
{
    int result;
    result = (year%100)==0?((year%400)==0?(1):(0)):((year%4)==0?(1):(0));
    return result;
}
int leftie(int leftirevari)
{

    int result;
    result = leftirevari<<2;
    return result;
}
