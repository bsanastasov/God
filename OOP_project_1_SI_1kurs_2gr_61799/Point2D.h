#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
	private:
		double x;
		double y;
	public:
		Point2D();
		Point2D(double x, double y);
		double GetX();
		double GetY();
		void SetX(double x);
		void SetY(double y);
		double distance(Point2D p);
};

#endif
