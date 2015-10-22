//
// Distributed under the ITensor Library License, Version 1.2
//    (See accompanying LICENSE file.)
//
#ifndef __ITENSOR_ITCOMBINER_H
#define __ITENSOR_ITCOMBINER_H

#include "itensor/itdata/itreal.h"

namespace itensor {

class QN;

class ITCombiner
    {
    public:

    ITCombiner() { }

    };

void inline
read(std::istream& s, ITCombiner& dat) { }

void inline
write(std::ostream& s, const ITCombiner& dat) { }

Cplx
doTask(const GetElt<Index>& g, const ITCombiner& c);

Real
doTask(NormNoScale, const ITCombiner& d);

void
doTask(Conj,const ITCombiner& d);

void
doTask(Contract<Index>& C,
       const ITReal& d,
       const ITCombiner& cmb,
       ManageStore& m);

void
doTask(Contract<Index>& C,
       const ITCombiner& cmb,
       const ITReal& d,
       ManageStore& m);

void
doTask(Contract<Index> & C,
       ITCplx     const& d,
       ITCombiner const& cmb,
       ManageStore     & m);

void
doTask(Contract<Index> & C,
       ITCombiner const& cmb,
       ITCplx     const& d,
       ManageStore     & m);

bool
doTask(CheckComplex, const ITCombiner& d);

void
doTask(PrintIT<Index>& P, const ITCombiner& d);

void
doTask(Write& W, const ITCombiner& d);

QN 
doTask(CalcDiv const& C, ITCombiner const& d);

} //namespace itensor

#endif

