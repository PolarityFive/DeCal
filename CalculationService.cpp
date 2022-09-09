#include "CalculationService.h"

CalculationService::CalculationService()
{

}

vector<ResultValues> CalculationService::calculate(Width width, Margin margin, Gutter gutter, Columns columns)
{
	const unsigned int gutterSizeStore = gutter.getSize();
	const unsigned int columnsStore = columns.getColumns();

	int highColumnThreshold = columns.getMax(), lowColumnThreshold = columns.getMin();
	int highGutterThreshold = gutter.getMax(), lowGutterThreshold = gutter.getMin();

	ResultValues resultValues;
	vector<ResultValues> resultList;

	while (lowColumnThreshold < highColumnThreshold)
	{
		while (lowGutterThreshold < highGutterThreshold)
		{
			int result = ((width.getWidth() - margin.getMargin()) - gutter.getSize() * (columns.getColumns() - 1)) / columns.getColumns();

			if ((result * columns.getColumns()) == (width.getWidth() - margin.getMargin()) - (gutter.getSize() * (columns.getColumns() - 1)))
			{
				resultValues.setWidth(width.getWidth());
				resultValues.setMargin(margin.getMargin());
				resultValues.setGutterSize(gutter.getSize());
				resultValues.setColumns(columns.getColumns());
				resultValues.setGutter(columns.getColumns() - 1);
				resultList.push_back(resultValues);
			}

			if (gutter.isInvariable())
				break;

			gutter.setSize(gutter.getSize() + 1);
			lowGutterThreshold++;
		}

		columns.setColumns(columns.getColumns() + 1);
		lowColumnThreshold++;

		lowGutterThreshold = gutter.getMin();
		gutter.setSize(gutterSizeStore);

		if (columns.isInvariable())
			break;

	}
	return resultList;
}