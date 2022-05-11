#ifndef FACE_H
#define FACE_H
#include <vector>
#pragma once

using namespace std;

class Face  
{
	private:
		vector<unsigned int> vectex_indices;
	public:
		Face(vector<unsigned int> vectex_indices);
		void print();

};
#endif