#include <iostream>

struct Planar
{
  virtual int x() const = 0;
  virtual int y()const = 0;
  virtual int abc_sqt() const = 0;
  virtual ~Planar() = default;
};

Planar * make(std::istream & is);
Planar * make(size_t pl);
void draw(Planar * pl);
void free_planars(Planar ** pls, size_t k);
Planar * most_left (Planar ** pls, size_t k);


int mai()
{
  Planar * pls[10] = {};
  size_t k = 0;
  for(size_t i=0; i < 10; ++i){
    try
    {
      pls[k]= make(i%2);
    } catch(...){
      free_planars(pls, k);
      return 2;
    };
    k++;
};
draw(most_left(pls ,k));
free_planars(pls, k);
  // pls[k++] = make(std::cin);
  Planar * left = most_left(pls,k);
  //draw(left);
  //free_planars(pls,k); 
}
