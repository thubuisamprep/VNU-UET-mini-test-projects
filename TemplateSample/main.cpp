#include <QCoreApplication>

void createLinearVector(QVector<double> &vector, double min, double max )
{
    double range = max-min;
    double n =   vector.size();

    vector[0]=min;

    for(int i=1; i< n ; i++ )
    {
        vector[i] = min+ i/(n-1)*range;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
