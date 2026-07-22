# Smart Pointers in C++

## Overview

Smart pointers are containers that act like ordinary pointers but also provide automatic resource management (e.g., deallocation of dynamically allocated memory) through their internal reference counting or ownership mechanisms. They help prevent memory leaks, dangling pointer references, and ensure resources such as file handles, sockets, etc., are released when they are no longer needed.

C++ offers several smart pointer classes in the `<memory>` header:

| Smart Pointer | Ownership & Lifetime Behavior |
|---------------|------------------------------|
| **`std::unique_ptr<T>`** | Takes exclusive ownership of a resource. When the `unique_ptr` goes out of scope or is reset, it automatically calls `delete` on its pointed-to object (or `reset()` if another pointer takes ownership). It cannot be copied; only moved using `std::move()`. |
| **`std::shared_ptr<T>`** | Shares ownership among multiple pointers. Uses reference counting: when the last `shared_ptr` pointing to an object is destroyed or reset, the pointed-to resource is deallocated. Useful for objects that are part of a graph of interdependent resources (e.g., tree structures). |
| **`std::weak_ptr<T>`** | Provides a non-owning pointer that can observe shared pointers without affecting their lifetime. It holds a weak reference count and will automatically expire when the associated `shared_ptr`s are destroyed, preventing circular references. |

## Core Characteristics

1. **Automatic Deallocation**: Smart pointers manage memory or other resources automatically via RAII (Resource Acquisition Is Initialization). When a smart pointer goes out of scope, it ensures that any allocated resource is correctly released.

2. **Thread Safety**: Modern C++ standards ensure thread safety for standard library containers like `std::shared_ptr`, making them safe to use across multiple threads without additional synchronization mechanisms.

3. **Non-Copyable (for `unique_ptr`)**: To avoid ambiguity in ownership, `unique_ptr` cannot be copied; only moved (`std::move()`). This prevents multiple pointers from owning the same resource simultaneously.

4. **Reference Counting (for `shared_ptr`)**: Internally maintains a count of how many smart pointers or objects hold the resource. When the count reaches zero, the memory is freed.

## Example Usage

### Unique Pointer

```cpp
#include <iostream>
#include <memory>

class MyClass {
public:
    int value = 42;
};

int main() {
    std::unique_ptr<MyClass> ptr(new MyClass()); // Owns and deallocates MyClass automatically
    return 0; // No need to manually delete ptr.get()
}
```

### Shared Pointer

```cpp
#include <iostream>
#include <memory>

class SharedExample {
public:
    int id = 1;
};

int main() {
    std::shared_ptr<SharedExample> sp(new SharedExample());
    std::cout << *sp->id; // Accesses the value safely
    return 0;
}
```

### Weak Pointer

```cpp
#include <iostream>
#include <memory>

class ExampleClass {
public:
    int id = 1;
};

int main() {
    std::shared_ptr<ExampleClass> ptr(new ExampleClass());

    std::weak_ptr<ExampleClass> weakPtr = ptr;

    if (auto strongPtr = weakPtr.lock()) { // Attempt to convert back to shared_ptr
        std::cout << "Accessing ExampleClass via strongPtr: " << strongPtr->id << std::endl;
    } else {
        std::cout << "No instance found." << std::endl;
    }

    ptr.reset(); // Destroy the original shared pointer; weakPtr will expire automatically

    return 0;
}
```

## When to Use Which?

- **Use `std::unique_ptr`** when you need exclusive ownership (e.g., file handles, mutexes) and want a simple non-copyable pointer.
  
- **Use `std::shared_ptr`** for resources that multiple owners may need access to later or in different scopes (e.g., objects used across class hierarchies).

## Benefits Over Raw Pointers

1. **Safety**: Prevents memory leaks by automatically freeing the underlying resource when no longer needed.

2. **Simpler Code**: Reduces boilerplate code for manual deallocation (`delete`), making error handling and maintenance easier.

3. **Thread Safety**: Modern implementations are thread-safe, allowing concurrent use across multiple threads without additional synchronization overhead.

By leveraging smart pointers, you can write more robust, maintainable C++ code that automatically handles memory management, reducing the likelihood of common programming errors such as dangling pointers or double-free bugs.