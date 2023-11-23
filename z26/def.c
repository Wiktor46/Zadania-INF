//int calch(int s, int ch, int mh){
//    ch = s/3600;
//    mh = s % 3600;
//    return ch;
//}
int ch(int s, int a){
  a = s / 3600;
  return a;
}


int mh(int s, int b){
    b = s % 3600;
    return b;
}

int cm(int mh, int c){
    c = mh / 60;
    return c;
}

int mm(int mh, int d) {
    d = mh % 60;
    return d;

}