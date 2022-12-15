//Kyi Lei Aye
//CS002_77215:Midterm2_Prompt_1
//Finding_areas_of_the_shapes
//Instructor:Hilario_Balajadia
//Last_Edited_Date:10/31/2022

#include <iostream>
#include <cmath>

//declaring constant double variable pi
const double PI = 3.14;

//declaring functions
void test();
double area(double);
double area(double, double);
double area(double, double, double);
double area(double, double, double, double);
double semiperimeter(double, double, double);

int main(){
    using namespace std;

    //using magic formula
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //function call
    test();

    return 0;
}
/**
 * @brief taking user input and apply the area() functions based on the shape the user choose
 * 
 */
void test(){
    using namespace std;
    double side, length, width, a;
    int option;
    char ans;

    do{
        cout << "Which shape do you want to check for its area?: " << endl;
        cout << "1.Square\n2.Rectangle\n3.Triangle\n4.Triangle with 3 sides\n5.Parallelogram\n6.Trapezoid\n7.Circle with Diameter\n8.Circle with Radius" << endl;
        cout << "Choose One: ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Side of the Square: ";
                cin >> side;
                cout << "The area of the Square is " << area(side, side) << endl;
                break;
            case 2:
                cout << "Length of the Rectangle: ";
                cin >> length;
                cout << "Width of the Rectangle: ";
                cin >> width;
                cout << "The area of the Rectangle is " << area(length, width) << endl;
                break;
            case 3:
                cout << "Base of the Triangle: ";
                cin >> length;
                cout << "Height of the Triangle: ";
                cin >> width;
                a = area(length,width)/2;
                cout << "The area of the Triangle is " << a << endl;
                break;
            case 4:
                cout << "First side of the triangle: ";
                cin >> side;
                cout << "Second side of the triangle: ";
                cin >> length;
                cout << "Third side of the triangle: ";
                cin >> width;
                cout << "The area of the Triangle is " << area(side, length, width, semiperimeter(side, length, width)) << endl;
                break;
            case 5: 
                cout << "Length of the Parallelogram: ";
                cin >> length;
                cout << "Base of the Parallelogram: ";
                cin >> width;
                cout << "The area of the Parallelogram is " << area(length, width) << endl;
                break;
            case 6:
                cout << "First length of the Trapezoid: ";
                cin >> length;
                cout << "Second length of the Trapezoid: ";
                cin >> width;
                cout << "Height of the Trapezoid: ";
                cin >> side;
                cout << "The area of the Trapezoid is " << area(side, length, width) << endl;
                break;
            case 7:
                cout << "Diameter of the Circle: ";
                cin >> side;
                cout << "The area of the Circle is " << area(side) << endl;
                break;
            case 8:
                cout << "Radius of the Circle: ";
                cin >> side;
                side = PI * area(side, side);
                cout << "The area of the Circle is " << side << endl;
                break;
            default:
                cout << "You didn't choose from the above options!" << endl;
        }
        cout << endl;
        cout << "Do you want to check area for any other shape? (Y)es or (N)o: ";
        cin >> ans;
        cout << endl;
    }while(ans == 'Y' || ans == 'y');
}
/**
 * @brief finding the area of the circle which diameter is known
 * 
 * @param x - diameter of the circle
 * @return double 
 */
double area(double x){
    return (pow((x/2),2)* PI);

}
/**
 * @brief finding the area of the shape in which area includes the multiplication of two sides or radius in circle
 * 
 * @param x length, first side, or radius of the shape
 * @param y length, second side, or radius of the shape
 * @return double 
 */
double area(double x, double y){
    return (x * y);
}
/**
 * @brief calculating the area of trapezoid
 * 
 * @param h height of the trapezoid
 * @param x length of the trapezoid
 * @param y width of the trapezoid
 * @return double 
 */
double area(double h, double x, double y){
    return (((x + y) / 2) * h);
}
/**
 * @brief calculating the area of the triangle with three known sides
 * 
 * @param x first side of the triangle
 * @param y second side of the triangle
 * @param z third side of the triangle
 * @param s semiperimeter of the triangle
 * @return double 
 */
double area(double x, double y, double z, double s){
    return sqrt(s * (s - x) * (s - y) * (s - z));
}
/**
 * @brief calculating the semiperimeter for the area of triangle with three sides
 * 
 * @param x - first side of the triangle
 * @param y - second side of the triangle
 * @param z - third side of the triangle
 * @return double 
 */
double semiperimeter(double x, double y, double z){
    return ((x + y + z)/ 2);
}