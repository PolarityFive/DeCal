#include "CalculationController.h"
#include "Gutter.h"
#include "Columns.h"
#include "Width.h"
#include "Margin.h"

CalculationController::CalculationController()
{

}

std::vector<ResultValues> CalculationController::handleCalculation(Width width, Margin margin, Gutter gutter, Columns columns)
{
	std::vector<ResultValues> resultList;

	if (gutter.isInvariable() && columns.isInvariable())
	{
		resultList = this->calculationService.calculateNoPrefs(width, margin, gutter, columns);
	}
	return(resultList);
}

std::vector<ResultValues> CalculationController::handleDefaultCalculation(Width width, Margin margin, Gutter gutter, Columns columns)
{
	return(this->calculationService.calculateDefaults(width, margin, gutter, columns));
}
