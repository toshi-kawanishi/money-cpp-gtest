# -*- coding: utf-8 -*-

CXX = g++

CXXFLAGS = -O2
LDFLAGS = -lpthread -lgmock_main -lgtest -lgmock 

SRCS_ALL = ${wildcard *.cpp}
SRCS_TEST = ${wildcard *Test.cpp}
SRCS = ${filter-out ${SRCS_TEST}, ${SRCS_ALL}}
OBJS_ALL = ${SRCS_ALL:.cpp=.o}
OBJS = ${SRCS:.cpp=.o}
BINS_TEST = ${SRCS_TEST:.cpp=.bin}
TESTS = ${SRCS_TEST:.cpp=}

all : test
test : ${TESTS}

.SUFFIXES : .cpp .make
.cpp.make :
	${CXX} ${CXXFLAGS} -MM -MG  $< > $@
	echo "	${CXX} ${CXXFLAGS} -c $< -o $*.o" >> $@

${OBJS_ALL} : %.o: %.make
	make -f $< $@
	rm -f $<

${BINS_TEST} : %.bin : %.o ${OBJS}
	${CXX} ${OBJS} $< ${CXXFLAGS} ${LDFLAGS} -o $@

${TESTS} : % : %.bin
	./$< --gtest_output=xml:$@.report.xml

clean :
	rm -f *.a
	rm -f *.o
	rm -f *.make
	rm -f *Test.bin
	rm -f *Test.report.xml
