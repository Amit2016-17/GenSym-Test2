#ifndef _TEST_DIALOG_DISMISS_H_
#define _TEST_DIALOG_DISMISS_H_


#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

/*
 * Class that contains G2 hanles tests
 */

class TestDialogDismiss : public CPPUNIT_NS::TestFixture  
{

    CPPUNIT_TEST_SUITE(TestDialogDismiss);
		CPPUNIT_TEST(test);
    CPPUNIT_TEST_SUITE_END();

public:
	virtual void setUp();
	virtual void tearDown();

	void test();
};

#endif
