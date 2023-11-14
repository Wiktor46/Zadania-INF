double heronc(double xa, double xb, double xc, double ya, double yb, double yc){

    double calca = sqrt( pow(xc - xb, 2) + pow(yc - yb, 2) );
    double calcb = sqrt( pow(xa - xc, 2) + pow(ya - yc, 2) );
    double calcc = sqrt( pow(xa - xb, 2) + pow(ya - yb, 2));

    double perc = 0.5 * (calca + calcb + calcc); //perimeter = per, perc = -||- carthesian;
    double areac = sqrt(perc * (perc - calca) * (perc - calcb) * (perc - calcc) );
    return areac;


}

double heron(double la, double lb, double lc){
    double per = 0.5 * (la + lb + lc); //perimeter = per
    double area = sqrt(per * (per - la) * (per - lb) * (per - lc) );
    return area;
}