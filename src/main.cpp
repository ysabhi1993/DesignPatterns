#include <OpenClosed.h>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
	Product apple{"Apple", Color::green, Size::small};
  	Product tree{"Tree", Color::green, Size::large};
  	Product house{"House", Color::blue, Size::large};

  	const std::vector<Product*> all { &apple, &tree, &house };

	SizeSpecification large(Size::large);
	ColorSpecification red(Color::red);

	auto spec = large && red;
	FilterOnTypes fot;
	
}