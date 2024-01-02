#include<bits/stdc++.h>
using namespace std;
/*
    int ar[5] ={.......};
    now if i want to add some more elements, i can't.
    i cannot modify the array, because it is static.
    Arrays are constant in size.

    Now for this reason we have vectors.
    vector is a container which is dynamic in nature, vector stores the elements similar to the array.

    whenever we need to increase the size of the container we can do that.

    if there is a requirement where you don't know the size of required data structure
    that's where the vector comes into .

    Queue, list, map, set, have same functions like vectors.


    SYNTAX:-
    vector <datatype> variable_name;
    

    AID
        https://www.techiedelight.com/print-vector-cpp/  in this you will also get some questions, might solve later

        https://www.geeksforgeeks.org/iterators-c-stl/

        https://www.geeksforgeeks.org/vector-rbegin-and-rend-function-in-c-stl/


    MUST READ 
        https://www.geeksforgeeks.org/gfacts-why-vector-size-1-gives-garbage-value/    

*/

int main()
{
    vector <int> v; // this creates 
    v.push_back(1);
    v.emplace_back(2);// bit faster than push_back
    for(auto it = v.begin(); it!= v.end(); it++) // was writing ! = but it will be !=.   
        cout<<*it<<' ';    
    cout<<endl<<endl;

    for(auto &it: v)//by this & we can actually manipulate the values in the vector
        cout<<it<<' '; 
    cout<<endl<<"..........................."<<endl<<endl;      






    vector <pair<int,int>> vec;
    vec.push_back({5,6});// here we have to give the curly braces or else, it recognise it as a vector.
    vec.emplace_back(8,9); // we don't have to give the curly braces as it automatically assumes it as vector.
    for(auto &it: vec)
        cout<<it.first<<" "<<it.second<<endl;
    cout<<"......................"<<endl<<endl;







    vector <int> v1(5,100); // 5 instances of 100 inside the vector
    for(auto &it: v1)
        cout<<it<<' '; 
    // after this if i do push_back or emplace_back then vector will automatically increase its size. Now, for this reason we do recommend to use the vector container    
    cout<<endl<<"......................"<<endl;



    vector <int> v2(5); // 5 instances of 0 or garbage value (depends on the compiler)
    for(auto &it: v2)
        cout<<it<<' '; 
    cout<<endl<<"......................"<<endl<<endl;


    vector <int> v3(5,30);
    vector <int> v4(v3); // coping a vector, 
    for(auto &it: v4)
        cout<<it<<' '; 
    cout<<endl<<"......................"<<endl<<endl;





    // Access elements in vector

    vector <int> v5;
    v5.push_back(6);
    v5.push_back(8);
    cout<<v5[0]<<' '<<v5.at(1); // we don't usually use v.at(index) in general.
    cout<<endl<<"......................"<<endl<<endl;
    //now the other way is iterator, 
    // iterator points the memory where the element is situated

    vector <int> v6;
    v6.emplace_back(1);
    v6.emplace_back(2);
    v6.emplace_back(3);
    v6.emplace_back(4);
    v6.emplace_back(5);
    v6.emplace_back(6);
    
    //defining the iterator.
    vector <int>::iterator it1 = v6.begin(); // v.begin() points to the first index.
    it1++;
    cout<<*it1<<endl;    
    it1+=3;
    cout<<*it1<<endl;
    cout<<endl<<".........................."<<endl;

    vector <int>::iterator it2 = v6.end(); // v.end() points to the position after the last index
    it2--;
    cout<<*it2<<endl;
    it2-=3;
    cout<<*it2<<endl;
    cout<<endl<<".........................."<<endl; 

        
    // v.rend() points to the position before the first index.
    // v.rbegin() points to the position after  the last index.
    for(auto it3 = v6.rbegin(); it3!= v6.rend(); it3++) // this is going to print in a revrse order
        cout<<*it3<<' ';
    cout<<endl<<".........................."<<endl;   

    //v6.back()
    cout<<"the last index = "<<v6.back()<<endl;
    cout<<endl<<".........................."<<endl; 
    //Printing the vector

    for(vector <int>::iterator it4 = v6.begin(); it4!=v6.end(); it4++)
        cout<<*it4<<' ';
    cout<<endl<<".........................."<<endl; 

    //auto means it automatically assigns the data type, by understanding the value inside it.
    auto i = 2;
    auto s = 'R';

    for(auto it4 = v6.begin(); it4!=v6.end(); it4++)
        cout<<*it4<<' ';
    cout<<endl<<".........................."<<endl; 

    for(auto it4 : v6) // for each loop // auto here is not the iterator rather refering to the integer 
        cout<<it4<<' ';
    cout<<endl<<"Before erasing:- ............."<<endl;   

    //erase from vector

    // in erase command we either give the location of the element to be deleted or, we give the range from where to start the deletion upto which location.
    // v7.erase(v7.begin()) or v7.erase(v7.begin(),v7.end()-1) or v7.erase(v7.begin(),v7.begin()+6)
    // v7.erase(start,end) now the end location is not included.
    vector <int> v7;
    v7.emplace_back(1);
    v7.emplace_back(2);
    v7.emplace_back(3);
    v7.emplace_back(4);
    v7.emplace_back(5);
    v7.emplace_back(6);

    for(auto it5:v7)
        cout<<it5<<' ';
        
    cout<<endl<<"After erasing:- ............"<<endl;
    // v7.erase(v7.begin()+1);
    // v7.erase(v7.begin()+1, v7.begin()+6);
    v7.erase(v7.begin(), v7.end()-1);
    for(auto it5:v7)
        cout<<it5<<' ';
    cout<<endl<<".........................."<<endl;     


    //Insert Function
    vector <int> v8;
    v8.emplace_back(1);
    v8.emplace_back(2);
    v8.emplace_back(3);
    v8.emplace_back(4);
    v8.emplace_back(5);
    v8.emplace_back(6);
    cout<<endl<<"Inserting elements in a particular Position"<<endl;
    for(auto it6:v8)
        cout<<it6<<' '; 
    cout<<endl<<".........................."<<endl; 
    v8.insert(v8.begin()+1,100);
    for(auto it6:v8)
        cout<<it6<<' ';
    cout<<endl<<".........................."<<endl;     
    v8.insert(v8.begin()+2,2,200);
    for(auto it6:v8)
        cout<<it6<<' ';
    cout<<endl<<".........................."<<endl; 


    //how to copy a vector to another vector
    vector <int> v9;
    v9.emplace_back(1);
    v9.emplace_back(2);
    v9.emplace_back(3);
    v9.emplace_back(4);
    v9.emplace_back(5);
    v9.emplace_back(6);

    vector <int> v10(2,500);
    v9.insert(v9.begin(), v10.begin(),v10.end());
    for(auto it7:v9)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 

    // size of the vector
    cout<<"size of v9 = "<<v9.size()<<endl;
    cout<<"size of v10 = "<<v10.size()<<endl;

    // delete the last element
    v9.pop_back(); // ie 6 in that case
    for(auto it7:v9)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 

    //swap the vectors
    vector <int> v11(2,33);
    vector <int> v12(2,39);
    for(auto it7:v11)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 
    for(auto it7:v12)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 
    v12.swap(v11);
    for(auto it7:v11)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 
    for(auto it7:v12)
        cout<<it7<<' ';
    cout<<endl<<".........................."<<endl; 

    //clear the vector, or erase every data from the vector
    v12.clear();

    //check whethe the vector is empty or not
    cout<<"Vector empty? - "<<v12.empty()<<endl; // 1 - means yess, 0 means no.



    cout<<endl;



    /* USER DEFINED VECTOR PAIR
    #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the vector pair = ";
    cin>>n;
    cout<<endl;
    vector <pair<int, int>> v(n);
    cout<<"Enter the values:"<<endl;
    for(auto &it: v)
    {
        
        cout<<"First value of pair = ";
        cin>>it.first;
    
        cout<<"Second value of pair = ";
        cin>>it.second;
        
    }
    
    cout<<"The entered pair values:"<<endl;
    for(auto it: v)
        cout<<'{'<<it.first<<','<<it.second<<'}'<<endl;
    
    


    return 0;
}
    
    
    
    **/
    return 0;
}