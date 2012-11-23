
#define BUILDING_NODE_EXTENSION

#include <node.h>
#include <v8.h>

using namespace v8;

void init(Handle<Object> target) {
    //NODE_SET_METHOD(target, "test", Method);
}


NODE_MODULE(xchart, init)
