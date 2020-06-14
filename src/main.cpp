#include <OpenClosed.h>
#include <iostream>
#include <vector>
#include <memory>

#include "Customer.h"
#include "CustomerBuilder.h"
#include "CustomerProfileBuilder.h"

int main(int argc, char *argv[])
{	
	CustomerBuilder customerBuilder = Customer::builder();
	std::unique_ptr<Customer> customer = customerBuilder.withProfile().withFirstName("Hello").build();
	std::cout << customer->GetProfile()->GetFirstName() << std::endl;
	return 0;
}