#include <iostream>
#include "Circuit.h"

int main() {
//    std::shared_ptr<Element> element1 = std::make_shared<Capacitor>(0, 3, 1);
//    std::shared_ptr<Element> element2 = std::make_shared<Capacitor>(3, 1, 1);
//    std::shared_ptr<Element> element3 = std::make_shared<Resistor>(1, 4, 1);
//    std::shared_ptr<Element> element4 = std::make_shared<Resistor>(0, 4, 1);
//    std::shared_ptr<Element> element5 = std::make_shared<Source>(1, 2, 1, Type::voltage, 100);
//    std::shared_ptr<Element> element6 = std::make_shared<Inductor>(0, 2, 1);
//    std::shared_ptr<Element> element7 = std::make_shared<Inductor>(2, 5, 1);
//    std::shared_ptr<Element> element8 = std::make_shared<Resistor>(0, 5, 1);

    std::shared_ptr<Element> element1 = std::make_shared<Capacitor>(3, 1, 10 * 1e-03);
    std::shared_ptr<Element> element2 = std::make_shared<Capacitor>(2, 0, 1e-06);
    std::shared_ptr<Element> element3 = std::make_shared<Resistor>(1, 4, 1000);
    std::shared_ptr<Element> element4 = std::make_shared<Resistor>(0, 4, 1000);
    std::shared_ptr<Element> element5 = std::make_shared<Source>(0, 3, 1, Type::voltage, 100);
    std::shared_ptr<Element> element6 = std::make_shared<Inductor>(1, 2, 1);
    std::shared_ptr<Element> element7 = std::make_shared<Resistor>(2, 5, 1000);
    std::shared_ptr<Element> element8 = std::make_shared<Resistor>(0, 5, 1000);
    element1->set_name("c1");
    element2->set_name("c2");
    element3->set_name("r1");
    element4->set_name("r2");
    element5->set_name("e1");
    element6->set_name("l1");
    element7->set_name("r3");
    element8->set_name("r4");

    std::vector<std::shared_ptr<Element>> elements {element1, element2, element3, element4,
                                                    element5, element6, element7, element8};
    Circuit circuit {elements, 100};
//    circuit.display_node_elements();
//    circuit.display_nodes();
    circuit.display_branch();
//    circuit.display_matrix_nodes();
//    circuit.calculate();
//
//    circuit.display_branches_voltage();


//    std::complex<float> x1 {0.00201117,-0.031767};
//    std::complex<float> x2 {-0.000253047,-8.05472e-06};
//    std::complex<float> x {0.0524116,125.789};
//    std::cout << x1/x << std::endl;
//    std::cout << abs(x1/x) << std::endl;
//    std::cout << x2/x << std::endl;
//    std::cout << abs(x2/x) << std::endl;

    std::cout <<circuit.get_branch_impedance("01") << std::endl;
    std::cout <<circuit.get_branch_impedance("02") << std::endl;
//    std::cout << 1e-03 << std::endl;
    return 0;
}
