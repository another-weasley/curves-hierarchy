# curves-hierarchy

## how to run (Linux)
Clone or download the project. Then move to the directory of the project. You can run executable:

`./curves-hierarchy`

Or you can rebuild it:
```
cmake CMakeLists.txt
make
./curves-hierarchy
```

## theory
Curves are parametrically defined, so they are defined that way:

**Circle**: $x=r \cos{t}, \\ y=r \sin{t}$,  here $r$ is radius of the circle

**Ellipse**: $x=a \cos{t}, \\ y=b \sin{t}$,  here $a$ is radius along X axe, $b$ is radius along Y axe

**Helix**: $x=r \cos{t}, \\ y=r \sin{t}, \\ z = ct$, here $r$ is radius, $c$ is step

And their first derivatives are defined that way:

**Circle**: $\dot{x}=-r \sin{t}, \\ \dot{y}=r \cos{t}$,  here $r$ is radius of the circle

**Ellipse**: $\dot{x}=-a \sin{t}, \\ \dot{y}=b \cos{t}$,  here $a$ is radius along X axe, $b$ is radius along Y axe

**Helix**: $\dot{x}=-r \sin{t}, \\ \dot{y}=r \cos{t}, \\ \dot{z} = c$, here $r$ is radius, $c$ is step
