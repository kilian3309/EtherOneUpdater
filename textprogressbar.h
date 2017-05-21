#ifndef TESTPROGRESSBAR_H
#define TESTPROGRESSBAR_H

#include <QString>

class TextProgressBar
{
public:
    TextProgressBar();

    void clear();
    void update();
    void setMessage(const QString &message);
    void setStatus(qint64 value, qint64 maximum);

private:
    QString message;
    qint64 value;
    qint64 maximum;
    int iteration;
};


#endif // TESTPROGRESSBAR_H
