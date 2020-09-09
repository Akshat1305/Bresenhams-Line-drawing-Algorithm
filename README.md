# Bresenhams Line Drawing Algorithm

Given co-ordinate of two points A(x0, y0) and B(x1, y1). The task to find all the intermediate points required for drawing line AB on the computer screen of pixels. Note that every pixel has integer coordinates.

:warning: **Header file graphics.h works only in Turbo C++**

## Getting Started

This algorithm is used for scan converting a line. It was developed by Bresenham. It is an efficient method because it involves only integer addition, subtractions, and multiplication operations. These operations can be performed very rapidly so lines can be generated quickly.
In this method, next pixel selected is that one who has the least distance from true line.

![computer-graphics-bresenhams-line-algorithm](https://user-images.githubusercontent.com/63666629/92556585-f39ed180-f287-11ea-9f06-df27732a3384.jpg)

![Bresenham-Line-Drawing-Algorithm-in-Computer-Graphics](https://user-images.githubusercontent.com/63666629/92556588-f699c200-f287-11ea-9a09-d41be04ba20d.png)

## Built With

:beginner: C (http://mingw-w64.org/doku.php)  - The programming language used.

## Acknowledgments
:zap: https://www.javatpoint.com/computer-graphics-bresenhams-line-algorithm

:zap: https://www.geeksforgeeks.org/bresenhams-line-generation-algorithm/
