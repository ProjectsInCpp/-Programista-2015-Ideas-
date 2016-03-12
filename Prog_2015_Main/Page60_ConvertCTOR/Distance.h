#pragma once
class Distance
{
	double _distance;
public:
	Distance(double distance) : _distance(distance) {};
	Distance(Distance* distance) : _distance(distance->_distance) {}; // risk

	double inKilometers() const
	{
		return _distance;
	}
};

