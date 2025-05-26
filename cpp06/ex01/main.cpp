#include <iostream>
#include "Data.hpp"
#include "Serializer.cpp"

int main() {
    Data* data = new Data(42, "Teste");

    std::cout << "Data original: id = " << data->id << ", name = " << data->name << std::endl;
    std::cout << "Ponteiro original: " << data << std::endl;

    uintptr_t serialized = Serializer::serialize(data);
    std::cout << "Valor serializado: " << serialized << std::endl;

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Ponteiro desserializado: " << deserialized << std::endl;

    if (data == deserialized) {
        std::cout << "Sucesso: Ponteiros são iguais!" << std::endl;
        std::cout << "Data desserializada: id = " << deserialized->id << ", name = " << deserialized->name << std::endl;
    } else
        std::cout << "Erro: Ponteiros são diferentes!" << std::endl;

    delete data;
    return 0;
}
