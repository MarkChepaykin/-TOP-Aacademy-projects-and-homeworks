#ifdef INTEGER
typedef int DataType;
#define fillArray fillArrayInt
#define printArray printArrayInt
#define findMin findMinInt
#define findMax findMaxInt
#define sortArray sortArrayInt
#define editArray editArrayInt
#endif

#ifdef DOUBLE
typedef double DataType;
#define fillArray fillArrayDouble
#define printArray printArrayDouble
#define findMin findMinDouble
#define findMax findMaxDouble
#define sortArray sortArrayDouble
#define editArray editArrayDouble
#endif

#ifdef CHAR
typedef char DataType;
#define fillArray fillArrayChar
#define printArray printArrayChar
#define findMin findMinChar
#define findMax findMaxChar
#define sortArray sortArrayChar
#define editArray editArrayChar
#endif

void fillArray(DataType array[], int size);
void printArray(const DataType array[], int size);
DataType findMin(const DataType array[], int size);
DataType findMax(const DataType array[], int size);
void sortArray(DataType array[], int size);
void editArray(DataType array[], int index, DataType newValue);
