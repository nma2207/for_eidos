// Приведенный ниже блок ifdef - это стандартный метод создания макросов, упрощающий процедуру 
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа CLASSES_EXPORTS,
// в командной строке. Этот символ не должен быть определен в каком-либо проекте
// использующем данную DLL. Благодаря этому любой другой проект, чьи исходные файлы включают данный файл, видит 
// функции CLASSES_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef CLASSES_EXPORTS
#define CLASSES_API __declspec(dllexport)
#else
#define CLASSES_API __declspec(dllimport)
#endif

// Этот класс экспортирован из Classes.dll
//class CLASSES_API CClasses {
//public:
//	CClasses(void);
//	// TODO: Добавьте здесь свои методы.
//};
//
//extern CLASSES_API int nClasses;
//
//CLASSES_API int fnClasses(void);
