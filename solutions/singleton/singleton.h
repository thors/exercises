#ifndef singleton_h
#define singleton_h

class MySingleton {
 public:
  int iData;
  static MySingleton* getInstance();
  void doFancyStuff();
 private:
  MySingleton();
  static MySingleton *iInstance;
};

#endif //ifdef singeton_h
