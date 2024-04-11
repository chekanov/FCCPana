# Developed at ASC ANL
# S.Chekanov (ANL). chekanov@anl.gov 
# Feb. 2024  

default:
	cp -f   aux/delphes.h analysis.h 
	make -f aux/Makefile.delphes clean
	make -f aux/Makefile.delphes mydict
	make -f aux/Makefile.delphes
fast:
	cp -f   aux/delphes.h analysis.h 
	make -f aux/Makefile.delphes clean
	make -f aux/Makefile.delphes mydict
	make -f aux/Makefile.delphes
full:
	cp -f  aux/full_cld.h analysis.h
	make -f aux/Makefile.geant clean
	make -f aux/Makefile.geant mydict
	make -f aux/Makefile.geant
clean: 
	@rm -f *.o  main *~ src/*.o src/*~ inc/*~; echo "Clear.."

