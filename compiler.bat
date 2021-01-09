g++ -c "./src/Arme.cpp" -o "./debug/Arme.o"
g++ -c "./src/Personnage.cpp" -o "./debug/Personnage.o"
g++ -c "./src/Duree.cpp" -o "./debug/Duree.o"
g++ "./src/main.cpp" -o main "./debug/Arme.o" "./debug/Personnage.o" 
pause