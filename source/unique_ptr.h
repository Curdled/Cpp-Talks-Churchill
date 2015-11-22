//
// Created by Joe Isaacs on 01/11/2015.
//

#ifndef SOURCE_UNIQUE_PTR_H
#define SOURCE_UNIQUE_PTR_H

#include <memory>
#include <iostream>

struct Foo
{
    Foo()      { std::cout << "Foo::Foo\n";  }
    ~Foo()     { std::cout << a << " Foo::~Foo\n"; }
    void bar() { std::cout << a << " Foo::bar\n";  }

    int a = 0;
};

struct wrapFoo {
    wrapFoo(){};
    wrapFoo(std::unique_ptr<Foo>& f_) {
        f = std::move(f_);
    }

    std::unique_ptr<Foo> f;
};

void f(std::unique_ptr<Foo>&& f)
{
    f->a = 600;
    std::cout << "f(const Foo&)\n";
    f->bar();
}



#endif //SOURCE_UNIQUE_PTR_H
