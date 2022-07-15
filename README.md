# Lan-Infrastructure-Design

As we all know how important communication system for human being is. In this project I have developed software which is console based application. It makes it easy to find shortest distance between two routers, expenditure on the cable used, whether or not optical fiber is required, total expenditure etc. 

All the expenses are calculated based on the distance that we find using the Dijkstra Algorithm. The use of optical fiber is necessary or not is also determined using the same. The graph traversal technique used is Breadth First Search which is similar to Breath First search technique used in trees but in graph we have to keep track of the visited vertices as we don’t want to visit same vertex again and again and be stuck in a loop.

If distance<10 the twisted pair cable will be required.
If distance>=10 and <=50 Coaxial Cable, Repeater will be required.
If distance>50 Optical Fiber will be required. There ae re also other conditions that are mentioned in the code.

The Compiler used for this project is MINGW and IDE used was Atom. I have also tried to make the output look colorful and given some subtle animations to it.

