#include "CalculationController.h"
#include "Gutter.h"
#include "Columns.h"
#include "Width.h"
#include "Margin.h"

CalculationController::CalculationController()
{

}

bool CalculationController::validateValues(Width width, Margin margin, Gutter gutter, Columns columns) //These are arbitrary validation choices. 
{																									   //They're just here to stop the software from crashing
	if (width.getWidth() < 1)
		return(false);

	if (columns.getColumns() < 2)
		return (false);

	if (width.getWidth() - margin.getMargin() < 1)
		return(false);

	if ((width.getWidth() - margin.getMargin()) < (gutter.getSize() * columns.getColumns() - 1))
		return(false);

	return(true);
}


std::vector<ResultValues> CalculationController::handleCalculation(Width width, Margin margin, Gutter gutter, Columns columns)
{
	std::vector<ResultValues> resultList;

	if (gutter.isInvariable() && columns.isInvariable())
	{
		resultList = this->calculationService.calculateCurrentValues(width, margin, gutter, columns);
	}
	return(resultList);
}

std::vector<ResultValues> CalculationController::handleDefaultCalculation(Width width, Margin margin, Gutter gutter, Columns columns)
{
	return(this->calculationService.calculate(width, margin, gutter, columns));
}
