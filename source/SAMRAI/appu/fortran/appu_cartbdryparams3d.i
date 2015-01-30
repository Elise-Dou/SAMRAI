c
c  File:        $URL$
c  Package:     SAMRAI application utilities
c  Copyright:   (c) 1997-2015 Lawrence Livermore National Security, LLC
c  Revision:    $LastChangedRevision$
c  Description: m4 include file for 3d boundary constant common blocks
c
      common/cartbdrylocparams3d/
     &  XLEFT,XRIGHT,YLEFT,YRIGHT,ZLEFT,ZRIGHT, 
     &  Y0Z0,Y1Z0,Y0Z1,Y1Z1,
     &  X0Z0,X0Z1,X1Z0,X1Z1,
     &  X0Y0,X1Y0,X0Y1,X1Y1,
     &  X0Y0Z0,X1Y0Z0,X0Y1Z0,X1Y1Z0,
     &  X0Y0Z1,X1Y0Z1,X0Y1Z1,X1Y1Z1
      integer
     &  XLEFT,XRIGHT,YLEFT,YRIGHT,ZLEFT,ZRIGHT,
     &  Y0Z0,Y1Z0,Y0Z1,Y1Z1,
     &  X0Z0,X0Z1,X1Z0,X1Z1,
     &  X0Y0,X1Y0,X0Y1,X1Y1,
     &  X0Y0Z0,X1Y0Z0,X0Y1Z0,X1Y1Z0,
     &  X0Y0Z1,X1Y0Z1,X0Y1Z1,X1Y1Z1  
c
c
      common/cartbdrycondparams3d/
     &  FLOW,XFLOW,YFLOW,ZFLOW,
     &  REFLECT,XREFLECT,YREFLECT,ZREFLECT,
     &  DIRICHLET,XDIRICHLET,YDIRICHLET,ZDIRICHLET,
     &  NEUMANN,XNEUMANN,YNEUMANN,ZNEUMANN
      integer
     &  FLOW,XFLOW,YFLOW,ZFLOW,
     &  REFLECT,XREFLECT,YREFLECT,ZREFLECT,
     &  DIRICHLET,XDIRICHLET,YDIRICHLET,ZDIRICHLET,
     &  NEUMANN,XNEUMANN,YNEUMANN,ZNEUMANN
