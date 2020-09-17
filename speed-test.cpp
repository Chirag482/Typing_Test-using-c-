#include <iomanip>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Instruction(){
    cout.width(65);
    cout<<endl<<right<<"Test your Typing Speed"<<endl<<endl;

    cout<<"INSTRUCTIONS : "<<endl<<endl;
    cout<<"1) You will be given with a paragraph you have to type it as fast as possible"<<endl;
    cout<<"2) you have unlimited time"<<endl;
    cout<<"3) To stop the timer press '$' " <<endl;
    cout<<"4) It is not compulsory to write the whole paragraph you can stop it in between by pressing '$'"<<endl<<endl;
}
int main()
{
    float average_spped = 0;
    float sum=0;
    int turn =1;
    int ttime=0;
    int atime = 0;
    bool play = true;


    Instruction();

    while(play){
    cout.width(70);
    cout<<right<<"Press 'S' to start OR '$' to end"<<endl;

    char start ;
    cin>>start;
    string paragraphs[5];

    if(start == 'S' or start =='s'){
    time_t time1;
    time_t time2;
    time(&time1);
    paragraphs[0] = "Baseball evolved from older bat-and-ball games already being played in England by the mid-18th century. This game was brought by immigrants to North America, where the modern version developed. By the late 19th century, baseball was widely recognized as the national sport of the United States. Baseball is popular in North America and parts of Central and South America, the Caribbean, and East Asia, particularly in Japan, South Korea and Taiwan.In the United States and Canada, professional Major League Baseball (MLB) teams are divided into the National League (NL) and American League (AL), each with three divisions: East, West, and Central.";
    paragraphs[1] = "Python is an interpreted, high-level and general-purpose programming language. Created by Guido van Rossum and first released in 1991, Python's design philosophy emphasizes code readability with its notable use of significant whitespace. Its language constructs and object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects. Python is dynamically typed and garbage-collected. It supports multiple programming paradigms, including structured (particularly, procedural), object-oriented, and functional programming.";
    paragraphs[2] = "React (also known as React.js or ReactJS) is an open-source JavaScript library[3] for building user interfaces or UI components. It is maintained by Facebook and a community of individual developers and companies.[4][5][6] React can be used as a base in the development of single-page or mobile applications. However, React is only concerned with rendering data to the DOM, and so creating React applications usually requires the use of additional libraries for state management and routing. Redux and React Router are respective examples of such libraries.";
    paragraphs[3] = "Manali is a resort town nestled in the mountains of the Indian state of Himachal Pradesh near the northern end of the Kullu Valley in the Beas River Valley. It is located in the Kullu district, about 270 km (168 mi) north of the state capital, Shimla, 309 km (192 miles) north east of Chandigarh and 544 km (338 miles) northeast of Delhi, the national capital. The small town, with a population of 8,096, is the beginning of an ancient trade route to Ladakh and from there over the Karakoram Pass on to Yarkand and Khotan in the Tarim Basin. It is a popular tourist destination and serves as the gateway to Lahaul and Spiti district as well as Leh.";
    paragraphs[4] = "India (Hindi: Bhārat), officially the Republic of India (Hindi: Bhārat Gaṇarājya),[23] is a country in South Asia. It is the second-most populous country, the seventh-largest country by land area, and the most populous democracy in the world. Bounded by the Indian Ocean on the south, the Arabian Sea on the southwest, and the Bay of Bengal on the southeast, it shares land borders with Pakistan to the west; China, Nepal, and Bhutan to the north; and Bangladesh and Myanmar to the east. In the Indian Ocean, India is in the vicinity of Sri Lanka and the Maldives; its Andaman and Nicobar Islands share a maritime border with Thailand and Indonesia.";


    srand(time(0));
    int index = 0 + ( rand() % ( 4 - 0 + 1 ) );
    cout.width(75);
    cout<<right<<"*******************************"<<endl;
    cout<<right<<paragraphs[index]<<endl;
    cout.width(75);
    cout<<right<<"*******************************"<<endl<<endl;
    cin.get();
    char abc[paragraphs[index].length()];
    cin.getline(abc,paragraphs[index].length(),'$');
    time(&time2);


    //Time taken
    ttime = time2-time1;


    //typing speed
    int correct_words = 0;
    int j=0;
    for(int i=0;i<string(abc).length();i++,j++){
        if(abc[i] == paragraphs[index][j]){
            correct_words++;
        }
        else{
            if(abc[i] == paragraphs[index][i+1]){
                j=i+1;
                correct_words++;
            }
        }
    }
    if(correct_words!=0){
    float typing_speed = correct_words/5;
    float minut = ttime/60.0;
    typing_speed = typing_speed/minut;
    sum+= typing_speed;
    average_spped = sum/turn;
    turn++;


    cout<<endl<<endl<<"Calculated Typing speed is : "<<typing_speed<<" WPM"<<endl;
    cout<<"Average Typing Speed : "<<average_spped<<" WPM"<<endl<<endl<<endl;
    }
    else{
        cout<<endl<<endl<<"Calculated Typing speed is : 0 WPM"<<endl;
        cout<<"Average Typing Speed : "<<average_spped<<" WPM"<<endl<<endl<<endl;
    }
    }
    else{
        cout<<"You didn't started the test"<<endl;
        play = false;
    }
    }
    return 0;
}
