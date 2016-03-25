//
// File:	$URL: file:///usr/casc/samrai/repository/SAMRAI/tags/v-2-2-0/source/toolbox/memory/ConstPointerBase.h $
// Package:	SAMRAI toolbox for memory management
// Copyright:   (c) 1997-2007 Lawrence Livermore National Security, LLC
// Revision:	$LastChangedRevision: 1704 $
// Modified:	$LastChangedDate: 2007-11-13 16:32:40 -0800 (Tue, 13 Nov 2007) $
// Description: A smart const pointer base class with RTTI
//

#ifndef included_tbox_ConstPointerBase
#define included_tbox_ConstPointerBase

#ifndef included_SAMRAI_config
#include "SAMRAI_config.h"
#endif
#ifndef included_tbox_ReferenceCounter
#include "tbox/ReferenceCounter.h"
#endif
#ifndef included_tbox_DescribedClass
#include "tbox/DescribedClass.h"
#endif

namespace SAMRAI {
   namespace tbox {


/**
 * Class ConstPointerBase is an abstract base class used by template
 * class ConstPointer<TYPE> for type-safe conversion between various
 * pointer types.  It forms the base of the RTTI conversion hierarchy for
 * pointers.  Both the non-const pointer base class and the const pointer
 * class are subclasses of the const pointer base class.  This structure
 * ensures that RTTI conversion of pointers from const to const, non-const
 * to non-const, and non-const to const work as expected but that conversion
 * from const to non-const fail at compile-time.
 *
 * @see tbox::ConstPointer
 * @see tbox::PointerBase
 * @see tbox::Pointer
 */

class ConstPointerBase
{
public:
   ConstPointerBase();
   virtual ~ConstPointerBase();
   virtual ReferenceCounter *getSubclassReferenceCounter() const = 0;
   virtual const DescribedClass *getSubclassPointer() const = 0;
};

}
}

#ifndef DEBUG_NO_INLINE
#include "tbox/ConstPointerBase.I"
#endif
#endif