#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TSTest: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TSTest );
	CPPUNIT_TEST( MainTest );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp()
	{
	}

	void tearDown()
	{
	}
	
	void MainTest()
	{
/*		CPPUNIT_ASSERT(l.length() == 0);

		CPPUNIT_ASSERT(l.insert(&a));
		CPPUNIT_ASSERT(l.insert(&b));
		CPPUNIT_ASSERT(l.insert(&c));

		CPPUNIT_ASSERT(l.length() == 3);

		CPPUNIT_ASSERT(l.find(a.GetKey()) == &a);
		CPPUNIT_ASSERT(l.find(b.GetKey()) == &b);
		CPPUNIT_ASSERT(l.find(c.GetKey()) == &c);

		CPPUNIT_ASSERT(l.erase(a.GetKey()) == &a);
		CPPUNIT_ASSERT(l.erase(b.GetKey()) == &b);
		CPPUNIT_ASSERT(l.erase(c.GetKey()) == &c);

		CPPUNIT_ASSERT(l.length() == 0);
*/
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION( TSTest );
#include "Main.hpp"
