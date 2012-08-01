#ifndef singleton_h
#define singleton_h

class MySingleton {
 public:
  int iData;
  MySingleton* getInstance();
  void doFancyStuff();
 private:
  static MySingleton *iInstance;
};

#endif //ifdef singeton_h
