#include "Arduino.h"
uint16_t readMedianValue(int* dataArray, uint16_t arrayLength)
{
	uint16_t i, j, tempValue;
	// 用冒泡法对数组进行排序
	// Use bubble sorting against the dataArray
	
	for (j = 0; j < arrayLength - 1; j++)
	{
		for (i = 0; i < arrayLength - 1 - j; i++)
		{
			if (dataArray[i] > dataArray[i + 1])
			{
				tempValue = dataArray[i];
				dataArray[i] = dataArray[i + 1];
				dataArray[i + 1] = tempValue;
			}
		}
	}
	// 计算中值
	// calculate the median

	if ((arrayLength & 1) > 0)
	{
		// 数组有奇数个元素，返回中间一个元素
		// if the number of elements is an odd pick the element in the middle of the queue

		tempValue = dataArray[(arrayLength - 1) / 2];
	}
	else
	{
		// 数组有偶数个元素，返回中间两个元素平均值
		// if the number of elements is an even pick the two elements in the middle of the queue and calculate their median


		tempValue = (dataArray[arrayLength / 2] + dataArray[arrayLength / 2 - 1]) / 2;
	}
	return tempValue;
}