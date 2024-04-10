# Developed at ASC ANL
# S.Chekanov (ANL). chekanov@anl.gov 
# Feb. 2024  

default:
	make -f aux/Makefile.delphes clean
	make -f aux/Makefile.delphes mydict
	make -f aux/Makefile.delphes
fast:
	make -f aux/Makefile.delphes clean
	make -f aux/Makefile.delphes mydict
	make -f aux/Makefile.delphes
full:
	make -f aux/Makefile.geant clean
	make -f aux/Makefile.geant mydict
	make -f aux/Makefile.geant
clean: 
	@rm -f *.o  main *~ src/*.o src/*~ inc/*~; echo "Clear.."

