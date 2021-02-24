#include "MyVector2.h"

// name


/// <summary>
/// get length of vector using sqrt of the sum of the squares
/// </summary>
/// <param name="t_vector">input vector</param>
/// <returns>length</returns>
float vectorLength(const sf::Vector2f t_vectorA)
{
	float sumOfSquares = (t_vectorA.x * t_vectorA.x ) + (t_vectorA.y * t_vectorA.y);
	const float length = std::sqrt(sumOfSquares);
	return length;
}

float vectorLengthSquared(const sf::Vector2f t_vectorA)
{
	return 0.0f;
}

float vectorCrossProduct(const sf::Vector2f t_vectorA, const sf::Vector2f t_VectorB)
{
	return 0.0f;
}

float vectorDotProduct(const sf::Vector2f t_vectorA, const sf::Vector2f t_VectorB)
{
	return 0.0f;
}

float vectorAngleBetween(const sf::Vector2f t_vectorA, const sf::Vector2f t_VectorB)
{
	return 0.0f;
}

sf::Vector2f vectorRotateBy(const sf::Vector2f t_vectorA, const  float t_angleRadians)
{
	return sf::Vector2f();
}


sf::Vector2f vectorProjection(const sf::Vector2f t_vectorA, const  sf::Vector2f t_onto)
{
	return sf::Vector2f();
}

sf::Vector2f vectorRejection(const sf::Vector2f t_vectorA, const  sf::Vector2f t_onto)
{
	return sf::Vector2f();
}

float vectorScalarProjection(const sf::Vector2f t_vector, const  sf::Vector2f t_onto)
{
	return 0.0f;
}

sf::Vector2f vectorUnitVector(const sf::Vector2f t_vectorA)
{
	return sf::Vector2f();
}
