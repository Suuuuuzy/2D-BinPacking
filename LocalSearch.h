#include "dataStructs.h"
#include "utils.h"
#include "Heuristics.h"
#include <iostream>
#include <vector>
using namespace std;

Packing LocalSearch(vector<Item>,int,int, int);

//Devueve el bin que minimiza la filling function
int targetBin(Packing,Bins*,int,int);

//Similar a targetBin, pero devuelve el nth bin
//que minimiza la filling function
int nthFilledBin(Packing,Bins*,int,int,int);

//filling function
double filling(Packing,Bins*,int,int,int);

//Pone cada item en un bin distinto
Packing* initialPacking(vector<Item>,Packing*,Bins*);
