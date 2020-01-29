// C++ program that takes the average of x numbers inputted by the user and prints them out on the console. 

#include <iostream>

float average(int lengthOfArray, float arrayOfScores[]);

int main(void) 
{

int numOfScores = 0;
std::cout << "Enter number of scores: ";
std::cin >> numOfScores;
float scores[numOfScores];

float result = average(numOfScores, scores);
std::cout << "Average score is: " << result << std::endl;

return 0;

}

float average(int lengthOfArray, float arrayOfScores[]) 
{

float sum = 0;

for (int i = 0; i < lengthOfArray; i++) 
{
    float input = 0;
    std::cout << "Enter score " << i + 1 << " : ";
    std::cin >> input;
    arrayOfScores[i] = input;
}

for (int i = 0; i < lengthOfArray ; i++)
{

    sum += arrayOfScores[i];

}

return  (sum / lengthOfArray);

}
