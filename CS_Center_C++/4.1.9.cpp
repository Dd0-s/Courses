Foo get_foo(const char *msg) {
    struct Foo1 : Foo {
        explicit Foo1(const char *msg) : Foo(msg) { }
    };
    Foo1 f = Foo1(msg);
    return f;
}
