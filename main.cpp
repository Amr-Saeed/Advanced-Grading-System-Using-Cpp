#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void overalling(float overall)
{
        if (overall <30.0)
        {
            cout << "Your Overall Grade Is very weak\n" << endl;
        }
        else if(overall >=30.0 && overall < 50.0)
        {
            cout << "Your Overall Grade Is weak\n" << endl;
        }
        else if(overall >=50.0 && overall < 65.0)
        {
            cout << "Your Overall Grade Is Accepted\n" << endl;
        }
        else if(overall >=65.0 && overall < 75.0)
        {
            cout << "Your Overall Grade Is Good\n" << endl;
        }
        else if(overall >=75.0 && overall < 85.0)
        {
            cout << "Your Overall Grade Is very Good\n" << endl;
        }
        else if(overall >= 85.0)
        {

            cout << "Your Overall Grade Is Excellent\n" << endl;
        }
}
int main()
{

        // Initialize counters for each category

    int excellentCount = 0;
    int excellentCounti = 0;

    int veryGoodCounti = 0;
    int goodCounti = 0;
    int acceptedCounti = 0;
    int weakCounti = 0;
    int veryWeakCounti = 0;


    int excellentCountt = 0;
    int veryGoodCount = 0;
    int goodCount = 0;
    int acceptedCount = 0;
    int weakCount = 0;
    int veryWeakCount = 0;
    float  degrees;
    int size;
    int students;
    cout << "Enter number of subjects: ";
    cin >> size;

    cout << "Enter number of students: ";
    cin >> students;
    float degree;


    const int MAX_SIZE = 100;
    string names[students];



    float overallGrades[students];
    string subjects[students][size]; // 2D array for students and subjects
    float grades[students][size];    // 2D array for students and grades


    string subject[size];
    float id[size];
    float percentage;
    float total = 600;
    float sum =0;
    float overall;

    float excellentOverall[100];
    float veryGoodOverall[100];
    float goodOverall[100];
    float acceptedOverall[100];
    float weakOverall[100];
    float veryWeakOverall[100];

    string weaki[students];
    string weak[students];
    string accepted[students];
    string good[students];
    string goodi[students];
    string excellent[students];
    float excellentGrades[excellentCountt][students];   // 2D array to store subjects and grades for each excellent student
    int excellentIndex = 0;
    string naming[students];
    float overallGrad[students];
    float grading[students];
        float degreesPerStudent[students];
        float deg[size];


        ifstream infile("dataaa.txt");


     for(int i=0; i <students; i++)
     {
        infile >> names[i];
        cout << "\nStudent " << i + 1 << ": " << names[i] << endl;
        degree =0;
        float  degrees=0;
        sum=0;

        for(int j =0; j <size; j++)
        {
            infile >> subjects[i][j] >> grades[i][j];
            sum+=grades[i][j];




                if(subjects[i][j] == "Electronics")
                {
                    degree = 125;
 // Store the degrees for this student


                }
                else if (subjects[i][j] == "Math")
                {
                    degree = 125;


                }
                else if(subjects[i][j] == "Random" )
                {
                    degree = 100;


                }
                else if (subjects[i][j] == "Electromagnetic")
                {
                    degree = 125;


                }
                else if (subjects[i][j] == "Matlab")
                {
                    degree = 100;


                }
                deg[j] = degree;
                degrees += degree;
                degreesPerStudent[i] = degrees;


            percentage = (grades[i][j] / degree) *100.0;


            //for grades

            if(percentage <30.0)
            {
                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
                cout << "very weak\n" << endl;
            }
            else if(percentage >=30.0 && percentage < 50.0)
            {
                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";

                cout << "weak\n" << endl;
            }
            else if (percentage >=50.0 && percentage <65.0)
            {
                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
                cout << "Accepted\n" << endl;
            }
            else if(percentage >=65.0 && percentage <75.0)
            {
                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
                cout << "Good\n" << endl;
            }
            else if(percentage >=75.0 && percentage <85.0)
            {
                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
                cout << "very Good\n" << endl;
            }
            else if (percentage >=85.0 && (sum / total) * 100)
            {

                cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
                cout << "Excellent\n" << endl;
            }

        }

            cout << "****************************" << degrees << endl;
            overall = (sum / degreesPerStudent[i]) * 100;
            overallGrades[i] = overall;
            cout << "(" << "Total grades From " << degrees << " is " <<  sum << ") "  << endl << endl;
            cout << "(" <<"Your percent is = " << overall << " %" << ")" << endl << endl;
            overalling(overallGrades[i]);




            if (overall <30.0)
            {
                    weaki[veryWeakCount++] = names[i];
                    veryWeakOverall[veryWeakCounti++] = overall;
            }
            else if(overall >=30.0 && overall < 50.0)
            {
                    weak[weakCount++] = names[i];
                    weakOverall[weakCounti++] = overall;

            }
            else if(overall >=50.0 && overall < 65.0)
            {
                    accepted[acceptedCount++] = names[i];
                    acceptedOverall[acceptedCounti++] = overall;

            }
            else if(overall >=65.0 && overall < 75.0)
            {
                    good[goodCount++] = names[i];
                    goodOverall[goodCounti++] = overall;

            }
            else if(overall >=75.0 && overall < 85.0)
            {
                    goodi[veryGoodCount++] = names[i];
                    veryGoodOverall[veryGoodCounti++] = overall;


            }
            else if(overall >= 85.0)
            {
                    excellent[excellentCount++] = names[i];
                    excellentOverall[excellentCounti++] = overall;

            }

     }



        degrees=0;
        sum = 0;


        cout << "---------------" << endl;





        // Sort the student names based on their overall grades
    for (int i = 0; i < students; i++) {
        for (int j = i + 1; j < students; j++) {
            if (overallGrades[i] < overallGrades[j]) {
                swap(overallGrades[i], overallGrades[j]);
                swap(names[i], names[j]);
                for (int k = 0; k < size; k++)
                {
                    swap(grades[i][k], grades[j][k]);
                }
            }
        }
    }

    // Output all students in descending order of overall grades
    cout << "All Students: " << endl;
    for (int i = 0; i < students; i++)
        {
            cout << i + 1 << "- " << names[i] << ": " << overallGrades[i] << " %" << endl;
            for (int j=0; j <size; j++)
        {

             cout << "\n" <<subjects[i][j] << ": " << grades[i][j] << " From " << degree << "\n";
        }
    }
    cout <<"---------------------------------------------------------------------" << "\n" <<endl ;

        int excellentIndexx=0;
       //For Excellent students
        cout << "Excellent: " << endl;
        for(int i=0; i <excellentCount-1; i++)
        {
            for(int j=0; j<excellentCount -i -1; j++)
            {
                if(excellentOverall[j] < excellentOverall[j+1])
                {
                    swap(excellentOverall[j], excellentOverall[j+1]);
                    swap(excellent[j], excellent[j+1]);
                }
            }

        }
        for(int i =0; i <excellentCount; i++)
        {
            cout << i+1 << "- " <<excellent[i] << ": " << excellentOverall[i] << " %" << endl << endl;


                for (int j = 0; j < students; j++) {
                    if (names[j] == excellent[i]) {
                        excellentIndexx = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[excellentIndexx][k] << ": " << grades[excellentIndexx][k] << " From " << deg[k] << "\n";
            }
            excellentIndexx++; // Move to the next accepted student
                     cout << "-------------------------------------" << endl << endl;

        }
            cout << endl;

        cout << "-------------------" << endl;



        int veryGoodIndex=0;

       //For very good students
        cout << "Very Good: " << endl;
        for(int i=0; i <veryGoodCount-1; i++)
        {
            for(int j=0; j<veryGoodCount -i -1; j++)
            {
                if(veryGoodOverall[j] < veryGoodOverall[j+1])
                {
                    swap(veryGoodOverall[j], veryGoodOverall[j+1]);
                    swap(goodi[j], goodi[j+1]);
                }
            }

        }
        for(int i =0; i <veryGoodCount; i++)
        {
            cout << i+1 << "- " <<goodi[i] << ": " << veryGoodOverall[i] << " %" << endl << endl;

                for (int j = 0; j < students; j++) {
                    if (names[j] == goodi[i]) {
                        veryGoodIndex = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[veryGoodIndex][k] << ": " << grades[veryGoodIndex][k] << " From " << deg[k] << "\n";
            }
            veryGoodIndex++; // Move to the next accepted student
                     cout << "-------------------------------------" << endl << endl;

        }
        cout << endl;

        cout << "-------------------" << endl;



        int goodIndex =0;
       //For good students
        cout << "Good: " << endl;
        for(int i=0; i <goodCount-1; i++)
        {
            for(int j=0; j<goodCount -i -1; j++)
            {
                if(goodOverall[j] < goodOverall[j+1])
                {
                    swap(goodOverall[j], goodOverall[j+1]);
                    swap(good[j], good[j+1]);
                }
            }

        }
        for(int i =0; i <goodCount; i++)
        {
            cout << i+1 << "- " <<good[i] << ": " << goodOverall[i] << " %" << endl << endl;

                for (int j = 0; j < students; j++) {
                    if (names[j] == good[i]) {
                        goodIndex = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[goodIndex][k] << ": " << grades[goodIndex][k] << " From " << deg[k] << "\n";
            }
            goodIndex++; // Move to the next accepted student

                 cout << "-------------------------------------" << endl << endl;
        }
       cout << endl;

        cout << "-------------------" << endl;



        int acceptedIndex = 0;

       //For accepted students
        cout << "Accepted: " << endl;
        for(int i=0; i <acceptedCount-1; i++)
        {
            for(int j=0; j<acceptedCount -i -1; j++)
            {
                if(acceptedOverall[j] < acceptedOverall[j+1])
                {
                    swap(acceptedOverall[j], acceptedOverall[j+1]);
                    swap(accepted[j], accepted[j+1]);
                }
            }

        }
        for(int i =0; i <acceptedCount; i++)
        {
            cout << i+1 << "- " <<accepted[i] << ": " << acceptedOverall[i] << " %" << endl << endl;


                for (int j = 0; j < students; j++) {
                    if (names[j] == accepted[i]) {
                        acceptedIndex = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[acceptedIndex][k] << ": " << grades[acceptedIndex][k] << " From " << deg[k] << "\n";
            }
            acceptedIndex++; // Move to the next accepted student
            cout << "-------------------------------------" << endl << endl;

        }

        cout << endl;
        cout << "-------------------" << endl;







        int weakIndex =0;

       //For weak students
        cout << "Weak: " << endl;
        for(int i=0; i <weakCount-1; i++)
        {
            for(int j=0; j<weakCount -i -1; j++)
            {
                if(weakOverall[j] < weakOverall[j+1])
                {
                    swap(weakOverall[j], weakOverall[j+1]);
                    swap(weak[j], weak[j+1]);
                }
            }

        }
        for(int i =0; i <weakCount; i++)
        {
            cout << i+1 << "- " <<weak[i] << ": " << weakOverall[i] << " %" << endl << endl;


                for (int j = 0; j < students; j++) {
                    if (names[j] == weak[i]) {
                        weakIndex = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[weakIndex][k] << ": " << grades[weakIndex][k] << " From " << deg[k] << "\n";
            }
            weakIndex++; // Move to the next accepted student
            cout << "-------------------------------------" << endl << endl;

        }

        cout << endl;
        cout << "-------------------" << endl;







       int veryWeakIndex =0;

       //For very weak students
        cout << "Very Weak: " << endl;
        for(int i=0; i <veryWeakCount-1; i++)
        {
            for(int j=0; j<veryWeakCount -i -1; j++)
            {
                if(veryWeakOverall[j] < veryWeakOverall[j+1])
                {
                    swap(veryWeakOverall[j], veryWeakOverall[j+1]);
                    swap(weaki[j], weaki[j+1]);
                    swap(grades[i][j], grades[i][j+1]);
                }
            }

        }
        for(int i =0; i <veryWeakCount; i++)
        {
            cout << i+1 << "- " <<weaki[i] << ": " << veryWeakOverall[i] << " %" << endl << endl;


                for (int j = 0; j < students; j++) {
                    if (names[j] == weaki[i]) {
                        veryWeakIndex = j;
                        break;
                    }
                }

            for (int k=0; k<size; k++)
            {

                 cout << "\n" <<subjects[veryWeakIndex][k] << ": " << grades[veryWeakIndex][k] << " From " << deg[k] << "\n";
            }
            cout << "-------------------------------------" << endl << endl;

        }

        cout << endl;
        cout << "-------------------" << endl;
















    return 0;
}

