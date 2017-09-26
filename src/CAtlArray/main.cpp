// use CStringElementTraits to have a valid comparison for Find
CAtlArray<CString, CStringElementTraits<CString> > array;

// other traits are CStringRefElementTraits, CStringElementTraitsI
CAtlList<CString, CStringElementTraits<CString> > list;

list.AddHead(CString("hello"));
list.AddHead(CString("string"));
POSITION pos = list.Find("hello");

if (pos != NULL)
{
    CString str = list.GetAt(pos);
}