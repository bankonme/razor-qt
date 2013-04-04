#ifndef QTXDG_TEST_H
#define QTXDG_TEST_H

#include <QString>

class QtXdgTest
{
public:
    // Test that XdgDesktopFile and xdg-mime script agree on 
    // default application for each mime-type.
    void testDefaultApp();

    void testTextHtml();
    void testMeldComparison();

private:
    void compare(QString mimetype);
    QString xdgDesktopFileDefaultApp(QString mimetype);
    QString xdgUtilDefaultApp(QString mimetype);
};



int main(int argc, char** args)
{
//    QtXdgTest().testDefaultApp();
    QtXdgTest().testTextHtml();
    QtXdgTest().testMeldComparison();
};

#endif /* QTXDG_TEST_H */
