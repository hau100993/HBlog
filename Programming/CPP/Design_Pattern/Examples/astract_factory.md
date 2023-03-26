

* Builder Design Example (by ChatGPT):

```c++
#include <iostream>
#include <memory>

// Abstract product A
class ProductA {
public:
    virtual void use() const = 0;
    virtual ~ProductA() = default;
};

// Concrete product A1
class ProductA1 : public ProductA {
public:
    void use() const override {
        std::cout << "Using ProductA1" << std::endl;
    }
};

// Concrete product A2
class ProductA2 : public ProductA {
public:
    void use() const override {
        std::cout << "Using ProductA2" << std::endl;
    }
};

// Abstract product B
class ProductB {
public:
    virtual void consume(const std::shared_ptr<ProductA>& productA) const = 0;
    virtual ~ProductB() = default;
};

// Concrete product B1
class ProductB1 : public ProductB {
public:
    void consume(const std::shared_ptr<ProductA>& productA) const override {
        std::cout << "Consuming ProductA1 in ProductB1" << std::endl;
        productA->use();
    }
};

// Concrete product B2
class ProductB2 : public ProductB {
public:
    void consume(const std::shared_ptr<ProductA>& productA) const override {
        std::cout << "Consuming ProductA2 in ProductB2" << std::endl;
        productA->use();
    }
};

// Abstract factory
class AbstractFactory {
public:
    virtual std::shared_ptr<ProductA> createProductA() const = 0;
    virtual std::shared_ptr<ProductB> createProductB() const = 0;
    virtual ~AbstractFactory() = default;
};

// Concrete factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    std::shared_ptr<ProductA> createProductA() const override {
        return std::make_shared<ProductA1>();
    }
    std::shared_ptr<ProductB> createProductB() const override {
        return std::make_shared<ProductB1>();
    }
};

// Concrete factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    std::shared_ptr<ProductA> createProductA() const override {
        return std::make_shared<ProductA2>();
    }
    std::shared_ptr<ProductB> createProductB() const override {
        return std::make_shared<ProductB2>();
    }
};

// Client code
int main() {
    // Using ConcreteFactory1
    std::unique_ptr<AbstractFactory> factory1 = std::make_unique<ConcreteFactory1>();
    std::shared_ptr<ProductA> productA1 = factory1->createProductA();
    std::shared_ptr<ProductB> productB1 = factory1->createProductB();
    productB1->consume(productA1);

    // Using ConcreteFactory2
    std::unique_ptr<AbstractFactory> factory2 = std::make_unique<ConcreteFactory2>();
    std::shared_ptr<ProductA> productA2 = factory2->createProductA();
    std::shared_ptr<ProductB> productB2 = factory2->createProductB();
    productB2->consume(productA2);

    return 0;
}
```
