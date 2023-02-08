#include<stdio.h>
#include<math.h>

int main()
{


   int n;
    printf("\tEnter the number of array elements: ");
    scanf("%d", &n);
    int num[n];
    printf("\tEnter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    int tem, sum = 0;
    float mean, median, mode, variance, varianceSum = 0;

    int length = sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if(num[i] > num[j])
            {
                tem = num[i];
                num[i] = num[j];
                num[j] = tem;
            }
        }
    }

    for(int i = 0; i < length; i++)
    {
        sum = sum + num[i];
    }

    mean = sum / length;

    if(length % 2 == 0)
    {
        median=(num[length/2] + num[(length/2)+1] ) / 2.0;
    }
    else
    {
        median= (num[(length)/2]);
    }

    mode = (3 * median) - (2 * mean);

    for(int k = 0; k < length; k++)
    {
        varianceSum = varianceSum + pow((mean - num[k]), 2);
    }

    variance = varianceSum / length;

    printf("\n \n \tMean Of The Array: %.2lf \n", mean);
    printf("\n\tMedian Of The Array: %.2lf \n", median);
    printf("\n\tMode Of The Array: %.2lf \n", mode);
    printf("\n\tVariance Of The Array: %.2lf \n", variance);

}
