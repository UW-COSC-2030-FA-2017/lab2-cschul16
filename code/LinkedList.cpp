// LinkedList.cpp

// tom bailey   0745  5 oct 2010
// Definition of methods for the List class.

// Edited by Chris Schultz
// 25 September 2017

#include "LinkedList.h"

#include <utility>


List::List()
	: first_(NULL)
{
}


List::List(const List & other)
	: first_(clone(other.first_))
{
}


List::~List()
{
	while (!empty())
	{
		removeFirst();
	}
}


const List & List::operator=(const List & other)
{
	// check for list = list
	if (&other != this)
	{
		// clear the current contents of this List
		this -> ~List();
		// and get a copy of other
		first_ = clone(other.first_);
	}

	return *this;
}


bool List::empty() const
{
	return first_ == NULL;
}

// function definition to get the size of the list
int List::size(){
    int count = 0;
    Node * ptr = first_;
    while (ptr != 0){
        count ++;
        ptr = ptr -> next_;
    }
    return count;
}

// function definition to get the sum of the list items
double List::sum(){
    double sum = 0;
    Node * ptr = first_;
    while (ptr != 0){
        sum = sum + (ptr -> entry_);
        ptr = ptr -> next_;
    }
    return sum;
}

void List::insertAsFirst(double x)
{
	first_ = new Node(x, first_);
}

// function definition to insert a double as the last value
void List::insertAsLast(double x){
    if (empty()){
        insertAsFirst(x);
    }
    else{
        Node * ptr = first_;
        while (ptr -> next_ != 0){
            ptr = ptr -> next_;
        }
        ptr -> next_ = new Node (x, 0);
    }
}

double List::removeFirst()
{
	double item = first_->entry_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	delete tempPtr;
	return item;
}


void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		// The first entry is printed separately because no comma
		// is needed.
		outfile << first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			outfile << ", " << ptr->entry_;
			ptr = ptr->next_;
		}
	}
	outfile << " ]";
}


// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
	if (ptr == NULL)
	{
		return NULL;
	}
	Node * first = new Node(ptr->entry_);
	Node * last = first;
	ptr = ptr->next_;
	while (ptr != NULL)
	{
		last->next_ = new Node(ptr->entry_);
		last = last->next_;
		ptr = ptr->next_;
	}
	return first;
}


//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}


