#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <stdexcept>
#include <sstream>

// exeptions
class InvalidTransportException : public std::exception {
public:
    explicit InvalidTransportException(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

class InvalidCarException : public InvalidTransportException {
public:
    explicit InvalidCarException(const std::string& message) : InvalidTransportException(message) {}
};

class InvalidPlaneException : public InvalidTransportException {
public:
    explicit InvalidPlaneException(const std::string& message) : InvalidTransportException(message) {}
};

class InvalidBoatException : public InvalidTransportException {
public:
    explicit InvalidBoatException(const std::string& message) : InvalidTransportException(message) {}
};

// classes
class Transport {
public:
    Transport() {}
    virtual ~Transport() {}

    virtual void display() const = 0;
};

class Car : public Transport {
public:
    Car(const std::string& brand, int year) : brand(brand), year(year) {}
    ~Car() override {}

    void display() const override {
        std::cout << "Car - Brand: " << brand << ", Year: " << year << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Car - Brand: " << car.brand << ", Year: " << car.year;
        return os;
    }

    bool operator==(const Car& other) const {
        return (brand == other.brand && year == other.year);
    }

private:
    std::string brand;
    int year;
};

class Plane : public Transport {
public:
    Plane(const std::string& model, int capacity) : model(model), capacity(capacity) {}
    ~Plane() override {}

    void display() const override {
        std::cout << "Plane - Model: " << model << ", Capacity: " << capacity << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Plane& plane) {
        os << "Plane - Model: " << plane.model << ", Capacity: " << plane.capacity;
        return os;
    }

    bool operator==(const Plane& other) const {
        return (model == other.model && capacity == other.capacity);
    }

private:
    std::string model;
    int capacity;
};

class Boat : public Transport {
public:
    Boat(const std::string& name, int length) : name(name), length(length) {}
    ~Boat() override {}

    void display() const override {
        std::cout << "Boat - Name: " << name << ", Length: " << length << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Boat& boat) {
        os << "Boat - Name: " << boat.name << ", Length: " << boat.length;
        return os;
    }

    bool operator==(const Boat& other) const {
        return (name == other.name && length == other.length);
    }

private:
    std::string name;
    int length;
};

//function for cheking string
void logException(const std::exception& ex) {
    std::ofstream logFile("exceptions.csv", std::ios_base::app);

    if (logFile) {
        std::stringstream ss;
        ss << typeid(ex).name() << ',' << ex.what() << '\n';
        logFile << ss.str();
        logFile.close();
    }
}
