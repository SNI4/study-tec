class Cone {
public:
    Cone();
    Cone(double r, double h);
    Cone(double x, double y, double z, double r, double h);
    void input();
    void output();
    double surfaceArea();
    double volume();

private:
    double x, y, z; 
    double r;      
    double h;     
};
