#ifndef __FUDANDNN_HARDSHRINK_H
#define __FUDANDNN_HARDSHRINK_H
#include "util/utils.h"
#include "Layer.h"

class HardShrinkLayer : public Layer
{

public:
	HardShrinkLayer(size_t size);
	string getNetworkName() override;
	void compute() override;
	void calculate() override;
	void gradient() override;
	void writeSelf(string) override;
	void readSelf(string) override;
	size_t getSize();

};


#endif