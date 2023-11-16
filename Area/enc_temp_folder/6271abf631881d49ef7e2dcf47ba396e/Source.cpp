

#include <iostream>

void area(float t_length, float t_width);
float area2(float t_length, float t_width);


int main()
{
	float ans = 10.0f;

	ans = area2(3.3f, 4.5f);
	area2(0.0f, 4.5f);
	area2(3.3f, 0.0f);
	

	return 1;
}


/// <summary>
/// work out area using w*b
/// </summary>
/// <param name="t_length">lenght of box</param>
/// <param name="t_width">width of box</param>
void area(float t_length, float t_width)
{
	float answer = 0.0f; // answer to area problem
	answer = t_length * t_width;
	std::cout << "The length is " << t_length << "  the width is " << t_width ;
	std::cout << " the area is: " << answer << std::endl;

}

float area2(float t_length, float t_width)
{
	float area = t_length * t_width;
	return area;
}
