
#define BUILDING_NODE_EXTENSION

#include <node.h>
#include <v8.h>
#include <QString>
#include <QFile>

using namespace v8;

void init(Handle<Object> target) {
    QString t = "22";
    int n =  t.toInt();


    //NODE_SET_METHOD(target, "test", Method);
}


NODE_MODULE(xchart, init)
