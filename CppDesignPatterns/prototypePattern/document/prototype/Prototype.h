#pragma once

class Prototype {
public:
	virtual Prototype* clone() const = 0;
	virtual ~Prototype() = default;
};