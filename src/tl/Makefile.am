SUBDIRS = . examples @TLEXTENSIONS@

END=

DIST_SUBDIRS=omp instr instr_pthreads acotes examples stm_func superscalar stm_func nanos

lib_LTLIBRARIES = libtl.la

BUILT_SOURCES = $(top_builddir)/src/frontend/cxx-asttype.h

libtl_la_CXXFLAGS = -Wall \
    -I $(top_srcdir)/src/frontend \
    -I $(top_srcdir)/src/driver \
    -I $(top_srcdir)/lib \
    -I $(top_builddir)/src/frontend \
    -I $(top_builddir)/src/driver \
    -I $(top_builddir)/lib

libtl_la_CFLAGS = -Wall \
    -I $(top_srcdir)/src/frontend \
    -I $(top_srcdir)/src/driver \
    -I $(top_srcdir)/lib \
    -I $(top_builddir)/src/frontend \
    -I $(top_builddir)/src/driver \
    -I $(top_builddir)/lib

libtl_la_SOURCES = \
    tl-object.hpp \
    tl-object.cpp \
    tl-builtin.hpp \
    tl-builtin.cpp \
    tl-ast.hpp \
    tl-ast.cpp \
    tl-scope.hpp \
    tl-scope.cpp \
	tl-scopelink.hpp \
	tl-scopelink.cpp \
    tl-dto.hpp \
    tl-dto.cpp \
	tl-symbol.hpp \
	tl-symbol.cpp \
    tl-compilerphase.hpp \
    tl-compilerphase.cpp \
	tl-source.hpp \
	tl-source.cpp \
	tl-type.hpp \
	tl-type.cpp \
	tl-traverse.hpp \
	tl-traverse.cpp \
	tl-context.hpp \
	tl-context.cpp \
	tl-objectlist.hpp \
	tl-objectlist.cpp \
	tl-predicate.hpp \
	tl-predicate.cpp \
	tl-functor.hpp \
	tl-functor.cpp \
	tl-predicateutils.hpp \
	tl-predicateutils.cpp \
	tl-langconstruct.hpp \
	tl-langconstruct.cpp \
	tl-externalvars.hpp \
	tl-externalvars.cpp \
	tl-handler.hpp \
	tl-handler.cpp \
	tl-pragmasupport.hpp \
	tl-pragmasupport.cpp \
	tl-omp.hpp \
	tl-omp.cpp \
	tl-refptr.hpp \
	tl-multifile.hpp \
	tl-multifile.cpp \
	tl-compilerpipeline.cpp \
	tl-compilerpipeline.hpp \
	tl-declarationclosure.hpp \
	tl-declarationclosure.cpp \
	$(END)

libtl_la_LIBADD = \
	$(top_builddir)/src/frontend/libmcxx.la \
	$(END)
