//
// Created by msumi on 28/06/2023.
//

#ifndef REVOLUTION_GAME_VECTOR2D_H
#define REVOLUTION_GAME_VECTOR2D_H
#include <cmath>

template <typename T>
class Vector2d {
public:
    T x;
    T y;

    Vector2d();
    Vector2d(T x_, T y_);
    Vector2d operator-(const Vector2d& other) const;
    Vector2d operator+(const Vector2d& other) const ;
    Vector2d<T> operator*(T scalar) const;
    Vector2d<T> operator/(T scalar) const;
    T modulo() const;
    Vector2d vUnitario();
    T getX() const;
    void setX(T x);
    T getY() const;
    void setY(T y);
};
template <typename T>
Vector2d<T>::Vector2d(){x = 0; y = 0;}
template <typename T>
Vector2d<T>::Vector2d(T x_, T y_) : x(x_), y(y_) {}
template <typename T>
Vector2d<T> Vector2d<T>::operator-(const Vector2d<T>& other) const {
    return Vector2d(x - other.x, y - other.y);
}
template <typename T>
Vector2d<T> Vector2d<T>::operator+(const Vector2d& other) const {
    return Vector2d(x + other.x, y + other.y);
}
template <typename T>
Vector2d<T> Vector2d<T>::operator*(T scalar) const {
    return Vector2d<T>(x * scalar, y * scalar);
}
template <typename T>
Vector2d<T> Vector2d<T>::operator/(T scalar) const {
    assert(scalar != 0);
    return Vector2d<T>(x / scalar, y / scalar);
}
template <typename T>
T Vector2d<T>::modulo() const {
    return std::sqrt(x * x + y * y);
}
template <typename T>
Vector2d<T> Vector2d<T>::vUnitario() {
    return *this / modulo();
}
template <typename T>
T Vector2d<T>::getX() const {
    return x;
}
template <typename T>
void Vector2d<T>::setX(T x) {
    this->x = x;
}
template <typename T>
T Vector2d<T>::getY() const {
    return y;
}
template <typename T>
void Vector2d<T>::setY(T y) {
    this->y = y;
}

#endif //REVOLUTION_GAME_VECTOR2D_H
