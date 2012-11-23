

#include <node.h>
#include <v8.h>

//#include <QString>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
    HandleScope scope;

    //QString t = "22";
    //int n =  t.toInt();

    return scope.Close(String::New("test 123"));

}

void init(Handle<Object> target) {
    NODE_SET_METHOD(target, "test", Method);

}

NODE_MODULE(test, init)

