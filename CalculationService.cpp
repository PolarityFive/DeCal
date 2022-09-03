#include "CalculationService.h"

CalculationService::CalculationService()
{

}

vector<ResultValues> CalculationService::calculateNoPrefs(Width width, Margin margin, Gutter gutter, Columns columns)
{
	ResultValues resultValues;
	vector<ResultValues> resultList;

	int result = ((width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1)) / columns.getColumns();

	if ((result * columns.getColumns()) == (width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1))
	{
		resultValues.setWidth(width.getWidth());
		resultValues.setMargin(margin.getMargin());
		resultValues.setGutterSize(gutter.getSize());
		resultValues.setColumns(columns.getColumns());
		resultValues.setGutter(columns.getColumns() - 1);
		resultList.push_back(resultValues);
	}
	else
	{
		resultValues.setWidth(0);
		resultValues.setMargin(0);
		resultValues.setGutterSize(0);
		resultValues.setColumns(0);
		resultValues.setGutter(0);
		resultList.push_back(resultValues);
	}

	return resultList;
}

vector<ResultValues> CalculationService::calculateDefaults(Width width, Margin margin, Gutter gutter, Columns columns)
{
	ResultValues resultValues;
	vector<ResultValues> resultList;
	int threshold = 200, iteration = 0, result;
	gutter.setSize(0);

	while(iteration < threshold)
	{
		result = ((width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1)) / columns.getColumns();

		if ((result * columns.getColumns()) == (width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1))
		{
			resultValues.setWidth(width.getWidth());
			resultValues.setMargin(margin.getMargin());
			resultValues.setGutterSize(gutter.getSize());
			resultValues.setColumns(columns.getColumns());
			resultValues.setGutter(columns.getColumns() - 1);
			resultList.push_back(resultValues);
		}

		gutter.setSize(gutter.getSize() + 1);
		iteration++;
	}

	return resultList;
}
