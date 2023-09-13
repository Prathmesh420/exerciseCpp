#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
int gender, age, mode;
float bmr, cal_r, cal_c, cal_skip, cal_push, cal_pull, cal_s, cal_sj, cal_b;
float w, h;

float bmr_f(float h, float w)
{
    float bmr = (gender = 1) ? 13.397 * w + 4.799 * h - 5.677 * age + 88.362 : 9.247 * w + 3.098 * h - 4.33 * age + 447.593;
    cout << "\nBMR: " << bmr << " Kcal" << endl;
    return bmr;
}

float running(float bmr)
{
    float min_r, dist_r, speed_r;
    cout << "\nRunning";
    while (true)
    {
        cout << "\n1. Distance & Time" << endl
             << "2. Speed & Time" << endl;
        cout << "Select: ";
        if (cin >> mode)
        {
            if (mode == 1 || mode == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    switch (mode)
    {
    case 1:
        while (true)
        {
            cout << "Enter Distance (km): ";
            if (cin >> dist_r)
            {
                if (dist_r > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_r)
            {
                if (min_r > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        speed_r = dist_r / (min_r / 60);
        break;

    case 2:
        while (true)
        {
            cout << "Enter Speed (kmph): ";
            if (cin >> speed_r)
            {
                if (speed_r > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }

        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_r)
            {
                if (min_r > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        break;
    }
    float met_r = 0.0931074 + 0.948646717 * speed_r;
    float cal_r = (bmr * met_r) / (24 / (min_r / 60));
    cout << "\nMets: " << met_r << endl;
    cout << "Calories burned by Running: " << cal_r << " Kcal" << endl;
    return cal_r;
}

float cycling(float bmr)
{
    float min_c, dist_c, speed_c;
    cout << "\nRunning";
    while (true)
    {
        cout << "\n1. Distance & Time" << endl
             << "2. Speed & Time" << endl;
        cout << "Select: ";
        if (cin >> mode)
        {
            if (mode == 1 || mode == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    switch (mode)
    {
    case 1:
        while (true)
        {
            cout << "Enter Distance (km): ";
            if (cin >> dist_c)
            {
                if (dist_c > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_c)
            {
                if (min_c > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        speed_c = dist_c / (min_c / 60);
        break;

    case 2:
        while (true)
        {
            cout << "Enter Speed (kmph): ";
            if (cin >> speed_c)
            {
                if (speed_c > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }

        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_c)
            {
                if (min_c > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        break;
    }
    float met_c = -0.758101053 + 0.4417117706 * speed_c;
    float cal_c = (bmr * met_c) / (24 / (min_c / 60));
    cout << "\nMets: " << met_c << endl;
    cout << "Calories burned by Cycling: " << cal_c << " Kcal" << endl;
    return cal_c;
}

float skipping(float bmr)
{
    float min_skip, skip_count, skip_speed;
    cout << "\nSkipping";
    while (true)
    {
        cout << "\n1. Skipping & Time" << endl
             << "2. Skip Speed & Time" << endl;
        cout << "Select: ";
        if (cin >> mode)
        {
            if (mode == 1 || mode == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    switch (mode)
    {
    case 1:
        while (true)
        {
            cout << "Enter Total Skipping (count):";
            if (cin >> skip_count)
            {
                if (skip_count > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_skip)
            {
                if (min_skip > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        skip_speed = skip_count / min_skip;
        break;

    case 2:
        while (true)
        {
            cout << "Enter Speed (kmph): ";
            if (cin >> skip_speed)
            {
                if (skip_speed > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        while (true)
        {
            cout << "Enter Time (min): ";
            if (cin >> min_skip)
            {
                if (min_skip > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
    }
    float met_skip = 0.4666666 + 0.0875 * skip_speed;
    float cal_skip = (bmr * met_skip) / (24 / (min_skip / 60));
    cout << "\nMets: " << met_skip << endl;
    cout << "Calories burned by Skipping: " << cal_skip << " Kcal" << endl;
    return cal_skip;
}

float pushups()
{
    cout << "\nPushups";
}

float pullups()
{
    int pullups_count;
    cout << "\nPull-ups";
    while (true)
    {
        cout << "\nEnter the total number of Pull-ups: ";
        if (cin >> pullups_count)
        {
            if (pullups_count > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    cal_pull = pullups_count * 5 * w / (150 * 0.45359237);
    cout << "\nCalories burned by Pull-ups: " << cal_pull << " Kcal" << endl;
    return cal_pull;
}

float squats()
{
    int squats_count;
    cout << "\nSquats";
    while (true)
    {
        cout << "\nEnter the total number of Squats: ";
        if (cin >> squats_count)
        {
            if (squats_count > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    cal_s = squats_count * 0.4 * w / (150 * 0.45359237);
    cout << "\nCalories burned by Squats: " << cal_s << " Kcal" << endl;
    return cal_s;
}

float sidejumps()
{
    float sidejumps_count;
    float sidejumps_time;
    cout << "\nSidejumps";
    while (true)
    {
        cout << "\n1. No. of Sidejumps: " << endl
             << "2. Minutes Sidejumps done for: " << endl;
        cout << "Select: ";
        if (cin >> mode)
        {
            if (mode == 1 || mode == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    switch (mode)
    {
    case 1:
        while (true)
        {
            cout << "\nEnter the total number of Sidejumps (count): ";
            if (cin >> sidejumps_count)
            {
                if (sidejumps_count > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        sidejumps_time = (sidejumps_count / 60) * (0.571428);
        break;

    case 2:
        while (true)
        {
            cout << "\nEnter the total number of Sidejumps (min): ";
            if (cin >> sidejumps_time)
            {
                if (sidejumps_time > 0)
                {
                    break;
                }
                else
                {
                    cout << "Invalid input, try again" << endl;
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input, try again" << endl;
            }
        }
        break;
    }
    cout << "Time: " << sidejumps_time << endl;
    float cal_sj = 0.14285714285 * w * (sidejumps_time);
    cout << "Calories burned by Sidejumps: " << cal_sj << " Kcal" << endl;
    return cal_sj;
}

float burpees()
{
    int burpees_count;
    cout << "\nBurpees";
    while (true)
    {
        cout << "\nEnter the total number of Burpees: ";
        if (cin >> burpees_count)
        {
            if (burpees_count > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    cal_b = (w / 150) * 0.5 * burpees_count;
    cout << "\nCalories burned by Burpees: " << cal_b << " Kcal" << endl;
    return cal_b;
}

int main()
{
    while (true)
    {
        cout << "Enter Height (cm): ";
        if (cin >> h)
        {
            if (h > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }

    while (true)
    {
        cout << "Enter Weight (kg): ";
        if (cin >> w)
        {
            if (w > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }

    while (true)
    {
        cout << "Enter Age (years): ";
        if (cin >> age)
        {
            if (age > 0)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }

    int gender;
    while (true)
    {
        cout << "\nEnter your gender: " << endl;
        cout << "1. Male" << endl;
        cout << "2. Female" << endl;
        cout << "Gender: ";
        if (cin >> gender)
        {
            if (gender == 1 || gender == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
    }
    float bmr = bmr_f(h, w);
    int exercise;
    while (true)
    {
        cout << "\n********" << endl;
        cout << "Exercises" << endl;
        cout << "********" << endl;
        cout << "1. Running" << endl;
        cout << "2. Cycling" << endl;
        cout << "3. Skipping" << endl;
        cout << "4. Pushups" << endl;
        cout << "5. Pullups" << endl;
        cout << "6. Squats" << endl;
        cout << "7. Side Jumps" << endl;
        cout << "8. burpees" << endl;
        cout << "9. Total" << endl;
        cout << "10. EXIT" << endl;
        cout << "Select: ";
        if (cin >> exercise)
        {
            if (exercise == 10)
            {
                cout << "\nProgram Exited";
                break;
            }
            else if (exercise < 1 || exercise > 10)
            {
                cout << "Invalid input, try again" << endl;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again" << endl;
        }
        switch (exercise)
        {
        case 1:
            running(bmr);
            break;

        case 2:
            cycling(bmr);
            break;

        case 3:
            skipping(bmr);
            break;

        case 4:
            pushups();
            break;

        case 5:
            pullups();
            break;

        case 6:
            squats();
            break;

        case 7:
            sidejumps();
            break;

        case 8:
            burpees();
            break;

        case 9:
            float total = cal_r + cal_c + cal_skip + cal_push + cal_pull + cal_s + cal_sj + cal_b;
            cout << "\nTotal Calories consumed: " << total << " Kcal";
            break;
        }
    }
    return 0;
}
