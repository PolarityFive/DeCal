#pragma once
#include "Gutter.h"
#include "Columns.h"
#include "Width.h"
#include "Margin.h"
#include "CalculationService.h"
#include "ResultValues.h"
#include "qvector.h"

class CalculationController
{
private:
	CalculationService calculationService;
public:
	CalculationController();
	bool validateValues(Width width, Margin margin, Gutter gutter, Columns columns);

	std::vector<ResultValues> handleCalculation(Width width, Margin margin, Gutter gutter, Columns columns);
};