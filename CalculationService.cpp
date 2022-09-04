#include "CalculationService.h"

CalculationService::CalculationService()
{

}

vector<ResultValues> CalculationService::calculateCurrentValues(Width width, Margin margin, Gutter gutter, Columns columns)
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

vector<ResultValues> CalculationService::calculate(Width width, Margin margin, Gutter gutter, Columns columns)
{
	const int gutterSizeStore = gutter.getSize();
	const int columnsStore = columns.getColumns();

	ResultValues resultValues;
	vector<ResultValues> resultList;
	int highThreshold = gutter.getMax();
	//int lowThreshold = gutter.getMin(); //TODO: Investigate: Trying with 800 width 0 margin yields weird results. 

	int iteration = 0, result;
	for (int i = 0; i < 2; i++) 
	{
		while (iteration < highThreshold)
		{
			result = ((width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1)) / columns.getColumns();

			if ((result * columns.getColumns()) == (width.getWidth() - margin.getMargin()) - (gutter.getSize() * (columns.getColumns() - 1)))
			{
				resultValues.setWidth(width.getWidth());
				resultValues.setMargin(margin.getMargin());
				resultValues.setGutterSize(gutter.getSize());
				resultValues.setColumns(columns.getColumns());
				resultValues.setGutter(columns.getColumns() - 1);
				resultList.push_back(resultValues);
			}
			
			if (i == 0)
				gutter.setSize(gutter.getSize() + 1);
			if (i == 1)
				columns.setColumns(columns.getColumns() + 1);
			iteration++;
		}
		gutter.setSize(gutterSizeStore);
		iteration = 0;
		highThreshold = columns.getMax();
	}
	columns.setColumns(columnsStore);

	return resultList;
}
