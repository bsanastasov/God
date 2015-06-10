#include "Point2D.h"
#include <math.h>

Point2D::Point2D() : x(0), y(0) {
}

Point2D::Point2D(double x, double y) : x(x), y(y) {
}

double Point2D::GetX() {
	return x;
}

double Point2D::GetY() {
	return y;
}

void Point2D::SetX(double x) {
	this->x = x;
}

void Point2D::SetY(double y) {
	this->y = y;
}

double Point2D::distance(Point2D p) {
	return sqrt((x - p.GetX()) * (x - p.GetX()) + (y - p.GetY()) * (y- p.GetY()));
}
