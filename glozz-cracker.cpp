#include <iostream>
#include <string>

#define ABS(x) (x>0?x:(-x))

unsigned long generate(const std::string& login)
{
  unsigned long l = 4567L;

  for(size_t i=0; i<login.length(); ++i)
    l *= (long)login[i];

  return ABS(l)%94929L;
}


int main(int argc, char** argv)
{
  if(argc < 2) {
    std::cerr << "Usage: glozz-cracker <login>\n";
    return 1;
  }

  const std::string& login = argv[1];
  auto password = generate(login);

  std::cout << password << "\n";

  return 0;
}
