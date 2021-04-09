#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_boxes, max_height;
    cin >> num_boxes >> max_height;
    int heights[num_boxes];
    for (int i = 0; i < num_boxes; i++)
    {
        cin >> heights[i];
    }
    int pos_crane = 0;
    bool has_box = false;
    int command;
    while (true)
    {
        cin >> command;
        if (command == 0)
            break;
        else if (command == 1 and pos_crane != 0)
        {
            pos_crane--;
        }
        else if (command == 2 and pos_crane != num_boxes - 1)
        {
            pos_crane++;
        }
        else if (command == 3 and !has_box and heights[pos_crane])
        {
            has_box = true;
            heights[pos_crane]--;
        }
        else if (command == 4 and heights[pos_crane] < max_height and has_box)
        {
            has_box = false;
            heights[pos_crane]++;
        }
    }
    for (int i = 0; i < num_boxes; i++)
    {
        cout << heights[i] << " ";
    }
    return 0;
}