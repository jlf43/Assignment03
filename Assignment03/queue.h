#pragma once
#include <queue>
using namespace std;


// This function moves the element currently at the front of the queue to the rear of the queue. 
// The element that was second in line will be the new front element. 
void move_to_rear(queue<string>& x)
{
	const string first = x.front(); //stores the first customer to the first variable
	x.pop(); //removing the first customer
	x.push(first); //adding the first customer that was being stored back to the queue 
}
