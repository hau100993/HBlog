

* Builder Design Example (by ChatGPT):

```c++
#include <iostream>
#include <string>

class Car {
public:
    void setMake(const std::string& make) { make_ = make; }
    void setModel(const std::string& model) { model_ = model; }
    void setColor(const std::string& color) { color_ = color; }
    std::string getDescription() const {
        return "Make: " + make_ + ", Model: " + model_ + ", Color: " + color_;
    }
private:
    std::string make_;
    std::string model_;
    std::string color_;
};

class CarBuilder {
public:
    virtual ~CarBuilder() = default;
    virtual void buildMake() = 0;
    virtual void buildModel() = 0;
    virtual void buildColor() = 0;
    virtual Car getCar() = 0;
};

class SedanBuilder : public CarBuilder {
public:
    void buildMake() override {
        car_.setMake("Honda");
    }
    void buildModel() override {
        car_.setModel("Civic");
    }
    void buildColor() override {
        car_.setColor("Red");
    }
    Car getCar() override {
        return car_;
    }
private:
    Car car_;
};

class SUVBuilder : public CarBuilder {
public:
    void buildMake() override {
        car_.setMake("Toyota");
    }
    void buildModel() override {
        car_.setModel("Highlander");
    }
    void buildColor() override {
        car_.setColor("Blue");
    }
    Car getCar() override {
        return car_;
    }
private:
    Car car_;
};

class Director {
public:
    void setBuilder(std::unique_ptr<CarBuilder> builder) {
        builder_ = std::move(builder);
    }
    Car getCar() {
        // Could add more logic 
        builder_->buildMake();
        builder_->buildModel();
        builder_->buildColor();
        return builder_->getCar();
    }
private:
    std::unique_ptr<CarBuilder> builder_;
};

int main() {
    Director director;
    director.setBuilder(std::make_unique<SedanBuilder>());
    Car car = director.getCar();
    std::cout << car.getDescription() << '\n';
    director.setBuilder(std::make_unique<SUVBuilder>());
    car = director.getCar();
    std::cout << car.getDescription() << '\n';
    return 0;
}
```
