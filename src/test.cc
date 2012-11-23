

#include <node.h>
#include <v8.h>

#include <QString>
#include <QFile>
#include <QTextStream>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
    HandleScope scope;

    QString t = "22";
    int n =  t.toInt();

    /*
     * // test file api.
    QFile file("out.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << "The magic number is: " << 49 << "\n";

        file.close();
    }
    */

    return scope.Close(String::New("test 123"));

}

void init(Handle<Object> target) {
    NODE_SET_METHOD(target, "test", Method);

}

NODE_MODULE(test, init)

