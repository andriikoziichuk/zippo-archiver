#include "BubbleSort.h"

using namespace OSmetod;

BubbleSort::BubbleSort() {
    sorter = new Bubblesort();
    onprogress = nullptr;
}
BubbleSort::BubbleSort(std::vector<int>* data): BubbleSort(){
    sorter->setdata(data);
}
BubbleSort::~BubbleSort() {
    delete sorter;
}
bool BubbleSort::sort() {
    bool result = false;    
    return sorter->execute(onprogress);
}
