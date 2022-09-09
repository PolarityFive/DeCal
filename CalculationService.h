#pragma once
#include <vector>
#include "Gutter.h"
#include "Columns.h"
#include "Width.h"
#include "Margin.h"
#include "ResultValues.h"

using namespace std;

class CalculationService
{
private:

public:
	CalculationService();
	vector<ResultValues> calculate(Width width, Margin margin, Gutter gutter, Columns columns);
};