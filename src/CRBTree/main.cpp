CRBMap<int, int> rbMap;
rbMap.SetAt(10, 20);
rbMap.SetAt(30, 40);
CRBMap<int, int>::CPair* p = rbMap.Lookup(30);
//p->m_key; p->m_value;
rbMap.RemoveKey(30);