//
// Created by Michał on 28.12.2022.
//

#ifndef CIRCUITSIMULATOR_SOURCE_H
#define CIRCUITSIMULATOR_SOURCE_H

#include "Element.h"


class Source: public Element {
private:
    float _amp;
    float _freq;
    float _c_freq;
    float _phase;
    Type _type;
public:
    Source(int node1, int node2, float amp, Type type, float freq=0, float phase=0): Element(node1, node2),
    _amp{amp}, _type{type}, _freq{freq}, _phase{phase}{
        _c_freq = (float)(freq*2*std::numbers::pi);
    }
    [[nodiscard]] float get_amp() const {return _amp;}
    [[nodiscard]] float get_freq() const {return _freq;}
    [[nodiscard]] float get_c_freq() const {return _c_freq;}
    [[nodiscard]] float get_phase() const {return _phase;}
    [[nodiscard]] Type get_type() const override {return _type;}
    [[nodiscard]] bool is_passive() const override {return false;}
    [[nodiscard]] std::complex<float> get_complex_value() const override;

};


#endif //CIRCUITSIMULATOR_SOURCE_H
