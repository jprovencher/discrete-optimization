/*
*   Author: Joe Provencher -- jprovencher@spptel.com
*   Last changed: 2021-06-22 16:46:24
*   Description:  Naive implementation of the dynamic programming approach to knapsack optimization.
*   License: Whatever.
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>    // std::max deeeerrrrrr
#include <list>
#include "../utils/Item.h"

void dyn(int items_count, int capacity, std::list<Item *> *items)
{
    
    std::list<Item *>::iterator it;
    int traceback[items_count];
    it = items->begin();
    

    int **dynArray;
    //Dynamically allocating row space in heap
    dynArray = new int*[capacity+1];
    //Dynamically allocating column space in heap
    for(int i=0; i<capacity+1; i++){
        dynArray[i] = new int[items_count+1];
    }

    
    for (int j = 0; j < items_count + 1; j++)
    {
    

        if (j != 0)
        {
            //std::cout << "current item: i;v;w; " << (*it)->GetIndex()  << " " << (*it)->GetWeight() << std::endl;
        }
        for (int k = 0; k < capacity + 1; k++)
        {
            if (j == 0)
            {
                dynArray[k][j] = 0;
            }
            else if (k == 0)
            {
                dynArray[k][j] = 0;
            }
            else if ((*it)->GetWeight() <= k)
            {
                dynArray[k][j] = std::max(dynArray[k-1][j],(*it)->GetValue()+ dynArray[k-(*it)->GetWeight()][j-1] );
            }
            else{
                dynArray[k][j]= dynArray[k][j-1];
            }
        }

        if (it != items->end() && j != 0)
        {
            it++;
        }
    }
    //doing traceback here
    int k=capacity;
    for(int j = items_count ; j>0; j--)
    {
        //std::cout << "updating " << j << " ";
        if(dynArray[k][j] == dynArray[k][j-1])
        {
            traceback[j-1] = 0;
        }
        else{
            traceback[j-1] = 1;
            std::list<Item *>::iterator itItems = items->begin();
            // Advance the iterator by 2 positions,
            std::advance(itItems, j-1);
            k = k-(*itItems)->GetWeight();

        }
    }

    //MONEY SHOT
    std::cout  << dynArray[capacity][items_count] << " 1" << std::endl;
    //std::cout << "Traceback: " << traceback << std::endl;
    for (int element: traceback) {
      std::cout << element << "  ";
   }
   std::cout << std::endl;
   
   
}

int main(int argc, char *argv[])
{
    Item *der = new Item(0, 0, 0, 0);
    int capacity = 0;
    int numItems = 0;
    // std::cout << der->GetIndex();
    std::list<Item *> *itemsList = new std::list<Item *>;
    std::fstream newfile;
    std::string delimiter = " ";
    newfile.open(argv[1], std::ios::in); //open a file to perform read operation using file object
    if (newfile.is_open())
    { //checking whether the file is open
        std::string tp;
        int i = 0;
        while (getline(newfile, tp))
        { //read data from file object and put it into string.
            //std::cout << tp << "\n"; //print the data of the string
            size_t pos = 0;
            std::string token1;
            std::string token2;
            int j = 0;
            // while ((pos = tp.find(delimiter)) != std::string::npos)
            // {
            pos = tp.find(delimiter);
            token1 = tp.substr(0, pos);

            // std::cout << "token1:" << token1 << std::endl;
            tp.erase(0, pos + delimiter.length());
            //pos = tp.find(delimiter);
            token2 = tp.substr(0);
            // std::cout << "token2:" << token2 << std::endl;
            if (i == 0)
            {
                numItems = std::stoi(token1);
                capacity = std::stoi(token2);
            }
            else
            {
                itemsList->push_back(new Item(i, std::stoi(token1), std::stoi(token2), 0));
            }
            // }
            i++;
        }
/*         std::cout << "Capacity and item numbers:" << capacity << " " << numItems << std::endl;
        std::cout << "Total items inserted:" << itemsList->size() << std::endl; */

        newfile.close();                    //close the file object.
        dyn(numItems, capacity, itemsList); //this is the money shot
    }
}
