int main(intargc, char* argv[])
{
    // Create a map which stores a double
    // value using an integer key
    CAtlMap<int, double> mySinTable;
    inti;
    // Initialize the Hash Table
    mySinTable.InitHashTable(257);

    // Add items to the map
    for (i = 0; i < 90; i++)
        mySinTable[i] = sin(i);

    // Confirm the map is valid
    mySinTable.AssertValid();
    // Confirm the number of elements in the map
    ATLASSERT(mySinTable.GetCount() == 90);

    // Remove elements with even key values
    for (i = 0; i < 90; i += 2)
        mySinTable.RemoveKey(i);

// Confirm the number of elements in the map
    ATLASSERT(mySinTable.GetCount() == 45);
    // Walk through all the elements in the map.
    // First, get start position.
    POSITION pos;
    int key;
    double value;
    pos = mySinTable.GetStartPosition();

    // Now iterate the map, element by element
    while (pos != NULL) {
        key = mySinTable.GetKeyAt(pos);
        value = mySinTable.GetNextValue(pos);
    }

    return 0;
}



class Person
{
    Person(int id, CString name)
    {
        mID = id;
        mName = name;
    }
    int mID;
    CString mName;
};

void main()
{
    CAtlMap< int, Person> AtlMapTest;
    Person p1(1, L"xiaoming");
    AtlMapTest.SetAt(1, p1);
    Persont p2(2, L"zhangsan");
    AtlMapTest.SetAt(2, p2);
    CAtlMap< int, Persont >::CPair* pair = NULL;
    POSITION pos = AtlMapTest.GetStartPosition();

    while (pos != NULL) {
        pair = AtlMapTest.GetNext(pos);
        cout << "Key(" << pair->m_key << ")   Value(" << pair->m_value.mID << " " << pair->m_value.mName")" << endl;
    }
}


CAtlMap<CString, int, CStringElementTraits<CString> > map;
map.InitHashTable(269);
map["key1"] = 2;
map["key2"] = 2;
int value;

if (map.Lookup("key1", value));