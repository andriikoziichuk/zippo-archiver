#pragma once
#include <utility>
#include <vector>
#include <time.h>

using namespace std;

namespace OSmetod {

    delegate void OnProgressEvent(float);

    class Bubblesort {
    private:       
        std::vector<int>* data;
    public:
        time_t sortingtime;
        Bubblesort() {
            this->data = new std::vector<int>;
            sortingtime = 0;
        }
        Bubblesort(std::vector<int>* data) : Bubblesort() {
            this->data->assign(data->begin(), data->end());
        }
        ~Bubblesort() {
            delete data;
        }
        int getlength() {
            int datalength = 0;
            if (data) datalength = data->size(); 
            return datalength;
        }
        std::vector<int>* getdata() {
            return data;
        }
        void setdata(std::vector<int>* data) {
            this->data->assign(data->begin(), data->end()); 
        }
        bool execute(OnProgressEvent^ onprogress)
        {
            bool result = false;
            vector<int> arr(*data);
            try {
                sortingtime = time(NULL);
                int i, j, n;
                n = arr.size();
                bool swapped;
                for (i = 0; i < n - 1; i++) {
                    swapped = false;
                    for (j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            swap(arr[j], arr[j + 1]);
                            swapped = true;
                        }
                    }
                    if (swapped == false)
                        break;
                    if (onprogress) onprogress(float(i + 1) * 100.0f / (float)n);
                };
                data->assign(arr.begin(), arr.end());
                result = true;
            }
            catch (...) {
                result = false;
            }
            sortingtime = difftime(time(NULL), sortingtime);
            return result;
        };
    };

    ref class BubbleSort
    {
    private:
        Bubblesort* sorter;
    public:
        OnProgressEvent^ onprogress;
        BubbleSort();
        BubbleSort(std::vector<int>* data);
        ~BubbleSort();
        property int DataLength {
            int get() { 
                return sorter->getlength();
            };
        }
        property std::vector<int>* Data {
            std::vector<int>* get() { return sorter->getdata(); };
            void set(std::vector<int>* data) { sorter->setdata(data); };
        }
        property System::String^ Timer {
            System::String^ get() { return sorter->sortingtime.ToString(); };
        }
        bool sort();
    };
};

