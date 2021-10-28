#pragma once
	class Interval
	{
	private:
		double min;
		double max;

	public:
		Interval(double b, double a);
		double valeur_min();
		double valeur_max();
		bool operator[](double m);
		void consulter();
		Interval* operator+(Interval& z);
		Interval* operator-(Interval& z);

	};
