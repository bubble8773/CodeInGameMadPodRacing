#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 float distanceSqrt(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

int main()
{

    // game loop
    while (1) {
        int x;
        int y;
        int next_checkpoint_x; // x position of the next check point
        int next_checkpoint_y; // y position of the next check point
        int next_checkpoint_dist; // distance to the next checkpoint
        int next_checkpoint_angle; // angle between your pod orientation and the direction of the next checkpoint
        cin >> x >> y >> next_checkpoint_x >> next_checkpoint_y >> next_checkpoint_dist >> next_checkpoint_angle; cin.ignore();
        int opponent_x;
        int opponent_y;
        cin >> opponent_x >> opponent_y; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // You have to output the target position
        // followed by the power (0 <= thrust <= 100) or "BOOST"
        // i.e.: "x y thrust"

        float thrust = -1;
        float BOOST = 700;
        float longestDistnance = 100000;
        bool isBoostAvailble = false;
        float distanceFromopponent =0;
        distanceFromopponent = distanceSqrt(x, y , opponent_x, opponent_y);
        if (next_checkpoint_angle>90 || next_checkpoint_angle<-90)
        thrust = 0;
        else
        thrust  = 100;
        
        if(next_checkpoint_dist > longestDistnance || distanceFromopponent > longestDistnance){
            longestDistnance = next_checkpoint_dist;
          cout << next_checkpoint_x << " " << next_checkpoint_y << " " <<BOOST<< endl;
          isBoostAvailble = false;
        }
    else 
          cout << next_checkpoint_x << " " << next_checkpoint_y << " " <<thrust<< endl;
    }
}

