// ����������� ���� ���� ifdef - ��� ����������� ����� �������� ��������, ���������� ��������� 
// �������� �� ��������� DLL. ��� ����� ������ DLL �������������� � �������������� ������� CLASSES_EXPORTS,
// � ��������� ������. ���� ������ �� ������ ���� ��������� � �����-���� �������
// ������������ ������ DLL. ��������� ����� ����� ������ ������, ��� �������� ����� �������� ������ ����, ����� 
// ������� CLASSES_API ��� ��������������� �� DLL, ����� ��� ������ DLL ����� �������,
// ������������ ������ ��������, ��� ����������������.
#ifdef CLASSES_EXPORTS
#define CLASSES_API __declspec(dllexport)
#else
#define CLASSES_API __declspec(dllimport)
#endif

// ���� ����� ������������� �� Classes.dll
//class CLASSES_API CClasses {
//public:
//	CClasses(void);
//	// TODO: �������� ����� ���� ������.
//};
//
//extern CLASSES_API int nClasses;
//
//CLASSES_API int fnClasses(void);
