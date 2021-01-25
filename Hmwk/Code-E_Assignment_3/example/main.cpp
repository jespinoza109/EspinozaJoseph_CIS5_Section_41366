//
//  main.cpp
//  AmazingApp1
//
//  Created by Tristan  Garcia on 4/22/19.
//  Copyright © 2019 Tristan  Garcia. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct cell
{
    bool openBottom;
    bool openRight;
    bool taken;
};

const int MAX_SIZE = 20;
cell arr2d[MAX_SIZE][MAX_SIZE];
int startY = 0;
int endY = 0;
int height = 0;
int width = 0;
int x;
int y;

void getSize()
{
    int widthCondition = 0;
    int heightCondition = 0;
    
    cout <<"We will be contructing a randomized maze. The maximum allowable size of the maze is 20 by 20. The minimum size is 3 by 3." << endl;
    cout <<"Please enter the height for your maze: " << endl;
    cin >> height;
    while (heightCondition == 0)
    {
        if (height < 3 or height > MAX_SIZE)
        {
            cout <<"The value you entered is invalid. Please enter a new value for the height of the maze: " << endl;
            cin >> height;
        }
        else
        {
            heightCondition = 1;
        }
    }
    cout <<"Please enter the width for your maze: " << endl;
    cin >> width;
    while (widthCondition == 0)
    {
        if (width < 3 or width > MAX_SIZE)
        {
            cout <<"The value you entered is invalid. Please enter a new value for the width of the maze: " << endl;
            cin >> width;
        }
        else
        {
            widthCondition = 1;
        }
    }
}

void makeBranch();

void initArr()
{
    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
        {
            arr2d[x][y].openBottom = false;
            arr2d[x][y].openRight = false;
            arr2d[x][y].taken = false;
        }
    }
}

bool canIEnterSquare(int x, int y)
{
    if (x < 0)
    {
        return false;
    }
    else if (y < 0)
    {
        return false;
    }
    else if (x >= width)
    {
        return false;
    }
    else if (y >= height)
    {
        return false;
    }
    else if (arr2d[x][y].taken)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool areWeFinished()
{
    for (int x = 0; x < height; x++)
    {
        for (int y = 0; y < width; y++)
        {
            if (arr2d[x][y].taken)
            {
                return false;
            }
        }
    }
    return true;
}

void enterCell(int x, int y)
{
    arr2d[x][y].taken = true;
    int direction = rand() % 4;
    for (int d = 0; d < 10; d++)
    {
        if (direction == 0) // moves to the right one space
        {
            if (canIEnterSquare(x+1, y))
            {
                arr2d[x][y].openRight = true;
                enterCell(x+1, y);
                return;
            }
        }
        else if (direction == 1) // moves up one space
        {
            if (canIEnterSquare(x, y+1))
            {
                arr2d[x][y].openBottom = true;
                enterCell(x, y+1);
                return;
            }
        }
        else if (direction == 2) // moves to the left one space
        {
            if (canIEnterSquare(x-1, y))
            {
                arr2d[x-1][y].openRight = true;
                enterCell(x-1, y);
                return;
            }
        }
        else if (direction == 3) // moves down one space
        {
            if (canIEnterSquare(x, y-1))
            {
                arr2d[x][y-1].openBottom = true;
                enterCell(x, y-1);
                return;
            }
        }
        direction++; //try a new direction
        if (direction > 3)
        {
            direction = 0;
        }
    
    }
    if (areWeFinished())
    {
        return;
    }
    else
    {
        makeBranch();
    }
}
    
void makeBranch()
{
    for(int x = 0; x < width; x++)
    {
        for(int y = 0; y < height; y++)
        {
            if(arr2d[x][y].taken == true)
            {
                if(canIEnterSquare(x+1, y))
                {
                    arr2d[x][y].openRight = true;
                    enterCell(x+1, y);
                    return;
                }
                else if(canIEnterSquare(x, y+1))
                {
                    arr2d[x][y].openBottom = true;
                    enterCell(x, y+1);
                    return;
                }
                else if(canIEnterSquare(x-1, y))
                {
                    arr2d[x-1][y].openRight = true;
                    enterCell(x-1, y);
                    return;
                }
                else if(canIEnterSquare(x, y-1))
                {
                    arr2d[x][y-1].openBottom = true;
                    enterCell(x, y-1);
                    return;
                }
            }
        }
    }
}


void fillArr()
{
    int min = 0;
    int max = height - 1;
    startY = (min + (rand() % (max - min + 1)));
    enterCell(0, startY);
    endY = (min + (rand() % (max - min + 1)));
    arr2d[width-1][endY].openRight = true;
}

void printArr()
{
    cout << "$";
    for (int y = 0; y < height; y++)
    {
        if (y == startY)
        {
            cout <<"  $";
        }
        else
        {
            cout <<"--$";
        }
    }
    cout << "\n";
    for (int x = 0; x < width; x++)
    {
        cout << "|";
        for (int y = 0; y < height; y++)
        {
            cout << "  ";
            if (arr2d[x][y].openBottom == false)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n$";
        for (int y = 0; y < height; y++)
        {
            if (arr2d[x][y].openRight == false)
            {
                cout << "--";
            }
            else
            {
                cout << "  ";
            }
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    srand(int(time(0)));
    getSize();
    initArr();
    fillArr();
    printArr();
    return 0;
}

