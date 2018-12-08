#ifndef TST_GRAPH_H
#define TST_GRAPH_H
#include <QtTest>
#include <QSqlQuery>
//#include "../NFL_Teams_App/graph.h"

class GraphPage : public QObject
{
    Q_OBJECT
    QVector <QString> vertices;
    QVector <QString> startEdges;
    QVector <QString> endEdges;
    QVector <int> edgeWeights;
public:
    GraphPage();
private slots:
    void testVertices();
    void testEdges();
};
#endif // TST_STADIUMPAGE_H
