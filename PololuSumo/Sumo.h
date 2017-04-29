#ifndef Sumo_h
#define Sumo_h

class Sumo {
  public:
    Sumo ();
    void forward(int l, int r, int t);
    void reverse(int l, int r, int t);
    void rotate(int t);
    void brake(int t);
};
#endif
