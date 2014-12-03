//
//  main.cpp
//  FieldML-CodeSynthesis
//
//  Created by Randall Britten on 2/12/14.
//  Copyright (c) 2014 University of Auckland. All rights reserved.
//

#include <iostream>
#include "FieldML_0.5.hxx"

using namespace std;

int main(int argc, const char * argv[]) {
  try
  {
    auto f (Fieldml (argv[1]));
    auto v = f->version();
    cout << v << endl;

    
    auto r = f->Region();
    
    for (auto i (r.ParameterEvaluator().begin ());
         i != r.ParameterEvaluator().end();
         ++i)
    {
      cout << "!" << endl;
    }
  }
  catch (const xml_schema::exception& e)
  {
    cerr << e << endl;
    return 1;
  }
  
}
