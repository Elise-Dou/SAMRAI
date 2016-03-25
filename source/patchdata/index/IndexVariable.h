//
// File:	$URL: file:///usr/casc/samrai/repository/SAMRAI/tags/v-2-2-0/source/patchdata/index/IndexVariable.h $
// Package:	SAMRAI patch data
// Copyright:	(c) 1997-2007 Lawrence Livermore National Security, LLC
// Release:	0.1
// Revision:	$LastChangedRevision: 1704 $
// Modified:	$LastChangedDate: 2007-11-13 16:32:40 -0800 (Tue, 13 Nov 2007) $
// Description:	hier::Variable class for defining irregular index variables
//

#ifndef included_pdat_IndexVariable
#define included_pdat_IndexVariable

#ifndef included_SAMRAI_config
#include "SAMRAI_config.h"
#endif
#ifndef included_hier_IntVector
#include "IntVector.h"
#endif
#ifndef included_hier_Variable
#include "Variable.h"
#endif
#ifndef included_String
#include <string>
#define included_String
#endif

namespace SAMRAI {
    namespace pdat {

/**
 * Class IndexVariable<DIM> is a templated variable class used to define
 * quantities that exist on an irregular cell-centered index set.  The
 * template parameter TYPE defines the storage at each index location.
 * For example, this class is used to represent embedded boundary features
 * as a regular patch data type using the BoundaryCell class as the template
 * type.
 *
 * Please consult the README file in the index data source directory for 
 * instructions on using this class to provide other irregular index set
 * types.
 *
 * @see pdat::IndexData
 * @see pdat::IndexDataFactory
 * @see pdat::Variable
 */

template<int DIM, class TYPE>
class IndexVariable : public hier::Variable<DIM>
{
public:
   /**
    * Create an index variable object with the specified name.
    */
   IndexVariable(const std::string &name);

   /**
    * Virtual destructor for index variable objects.
    */
   virtual ~IndexVariable<DIM,TYPE>();

   /**
    * Return true so that the index data quantities will always be treated as cell-
    * centered quantities as far as communication is concerned.  Note that this is
    * really artificial since the cell data index space matches the cell-centered
    * index space for AMR patches.  Thus, cell data does not live on patch borders
    * and so there is no ambiguity reagrding coarse-fine interface values.
    */
   bool fineBoundaryRepresentsVariable() const {return true;}

   /**
    * Return false since the index data index space matches the cell-centered
    * index space for AMR patches.  Thus, index data does not live on patch borders.
    */
   bool dataLivesOnPatchBorder() const {return false;}

private:
   IndexVariable(const IndexVariable<DIM,TYPE>&); // not implemented
   void operator=(const IndexVariable<DIM,TYPE>&);      // not implemented

};



}
}
#endif

#ifdef INCLUDE_TEMPLATE_IMPLEMENTATION
#include "IndexVariable.C"
#endif