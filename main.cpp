#include <iostream>

struct Planer
{
  virtual int x() const = 0;
  virtual int y()const = 0;
  virtual int abc_sqt() const = 0;
  virtual ~Planer() = default;
};

Planer * make(std::istream & is);
Planer * most_left (Planer ** pls, size_t k);


int mai()
{
  Planer * pls[10] = {};
  size_t k = 0;
  // pls[k++] = make(std::cin);
  Planer * left = most_left(pls,k);
  //draw(left);
  //free_planars(pls,k); 
}
